#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskConfig; }

#define MDHMIDHALGE_COCMJJNJHOO_OFFSET UNITYSDK_OFFSET(0xC159F20)
#define MDHMIDHALGE_CTOR_OFFSET UNITYSDK_OFFSET(0xC15A0E0)
#define MDHMIDHALGE_EOJKNKMNGJB_OFFSET UNITYSDK_OFFSET(0xC159FB0)
#define MDHMIDHALGE_HPMKHIGKAKN_OFFSET UNITYSDK_OFFSET(0xC1598B0)
#define MDHMIDHALGE_KJMCBCCDOFM_OFFSET UNITYSDK_OFFSET(0xC15A010)
#define MDHMIDHALGE_KKJFIDBMFCL_OFFSET UNITYSDK_OFFSET(0xC159DF0)
#define MDHMIDHALGE_LCIDMLKJENK_OFFSET UNITYSDK_OFFSET(0xC159D90)
#define MDHMIDHALGE_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0xC1597A0)

inline static constexpr unsigned int MDHMIDHALGE_TypeDefinitionIndex = 62459;

	class MDHMIDHALGE
	{
	public:
		::KFELGAIGHAP* IHIKAHLOABK; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHMIDHALGE_CTOR_OFFSET))(this);
		}

		::System::Void OnStartLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHMIDHALGE_ONSTARTLOADING_OFFSET))(this);
		}

		::System::Void LCIDMLKJENK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHMIDHALGE_LCIDMLKJENK_OFFSET))(this);
		}

		::System::Void EOJKNKMNGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHMIDHALGE_EOJKNKMNGJB_OFFSET))(this);
		}

		::System::Void KJMCBCCDOFM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDHMIDHALGE_KJMCBCCDOFM_OFFSET))(this, a1);
		}

		::System::Void COCMJJNJHOO(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + MDHMIDHALGE_COCMJJNJHOO_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* HPMKHIGKAKN(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
		{
			return ((::KFELGAIGHAP*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + MDHMIDHALGE_HPMKHIGKAKN_OFFSET))(this, a1);
		}

		::System::Void KKJFIDBMFCL(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + MDHMIDHALGE_KKJFIDBMFCL_OFFSET))(this, a1);
		}

	};
