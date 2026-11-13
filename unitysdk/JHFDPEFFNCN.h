#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFIOPGBDLCA;
class OAMHNEPJGFN;
namespace RPG::GameCore { class BattleInstance; }

#define JHFDPEFFNCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x19369070)
#define JHFDPEFFNCN_CTOR_OFFSET UNITYSDK_OFFSET(0x19369060)
#define JHFDPEFFNCN_EOGKGIGACFF_OFFSET UNITYSDK_OFFSET(0x19368B90)
#define JHFDPEFFNCN_GET_LASTMATCHEDSTRATEGY_OFFSET UNITYSDK_OFFSET(0x19368B70)
#define JHFDPEFFNCN_GOHLJCKPBFM_OFFSET UNITYSDK_OFFSET(0x19368BF0)
#define JHFDPEFFNCN_IOHEEJDKIKO_OFFSET UNITYSDK_OFFSET(0x19368C50)
#define JHFDPEFFNCN_OLEHKPHLLFC_OFFSET UNITYSDK_OFFSET(0x19368FE0)
#define JHFDPEFFNCN_PFJLMAOBHFN_OFFSET UNITYSDK_OFFSET(0x19368F80)
#define JHFDPEFFNCN_SET_LASTMATCHEDSTRATEGY_OFFSET UNITYSDK_OFFSET(0x19368B80)

inline static constexpr unsigned int JHFDPEFFNCN_TypeDefinitionIndex = 62408;

	class JHFDPEFFNCN : public ::System::Object
	{
	public:
		::OAMHNEPJGFN* _LastMatchedStrategy_k__BackingField; // 0x10
		::FFIOPGBDLCA* EEFMDEHLLFI; // 0x18
		static ::Il2CppArray<::OAMHNEPJGFN*>** StaticGet_EMIFAOACJNI()
		{
			return (::Il2CppArray<::OAMHNEPJGFN*>**)UnitySDK::FromName("", "JHFDPEFFNCN")->GetStaticField(0x6F3D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFDPEFFNCN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHFDPEFFNCN_CCTOR_OFFSET))();
		}

		::OAMHNEPJGFN* get_LastMatchedStrategy()
		{
			return ((::OAMHNEPJGFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFDPEFFNCN_GET_LASTMATCHEDSTRATEGY_OFFSET))(this);
		}

		::System::Void set_LastMatchedStrategy(::OAMHNEPJGFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAMHNEPJGFN*))((::PBYTE)hIl2Cpp + JHFDPEFFNCN_SET_LASTMATCHEDSTRATEGY_OFFSET))(this, a1);
		}

		::System::Boolean EOGKGIGACFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFDPEFFNCN_EOGKGIGACFF_OFFSET))(this);
		}

		::System::Boolean GOHLJCKPBFM(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + JHFDPEFFNCN_GOHLJCKPBFM_OFFSET))(this, a1);
		}

		::OAMHNEPJGFN* PFJLMAOBHFN(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::OAMHNEPJGFN*(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + JHFDPEFFNCN_PFJLMAOBHFN_OFFSET))(this, a1);
		}

		::System::Void OLEHKPHLLFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFDPEFFNCN_OLEHKPHLLFC_OFFSET))(this);
		}

		::OAMHNEPJGFN* IOHEEJDKIKO(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::OAMHNEPJGFN*(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + JHFDPEFFNCN_IOHEEJDKIKO_OFFSET))(this, a1);
		}

	};
