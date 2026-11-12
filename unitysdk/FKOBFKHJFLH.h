#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
#include "unitysdk/System/Object.h"
class COPBBBMLGEL;
class EAIGLLEMOII;
class EFKDICGPLEH;
class FKOBFKHJFLH;
class GGLFJLFFBPP;
class JPFJJLEPGBC;
class KPMAOLIGPAP;
class MCFDMCPGEBD;
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FKOBFKHJFLH_AGDLFBIPEIP_1_OFFSET UNITYSDK_OFFSET(0x1677FFB0)
#define FKOBFKHJFLH_AGDLFBIPEIP_OFFSET UNITYSDK_OFFSET(0x1677FF30)
#define FKOBFKHJFLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1677FD50)
#define FKOBFKHJFLH_DIEAFFHFPJI_OFFSET UNITYSDK_OFFSET(0x16780900)
#define FKOBFKHJFLH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16780BA0)
#define FKOBFKHJFLH_GNFFFFBHHFG_OFFSET UNITYSDK_OFFSET(0x1677FC80)
#define FKOBFKHJFLH_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0x167811F0)
#define FKOBFKHJFLH_MNPFDFDBMNG_OFFSET UNITYSDK_OFFSET(0x167800B0)
#define FKOBFKHJFLH_NNBIOLPHFFF_OFFSET UNITYSDK_OFFSET(0x16780190)
#define FKOBFKHJFLH_OEADNCPFOJJ_OFFSET UNITYSDK_OFFSET(0x167806E0)
#define FKOBFKHJFLH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16780950)

inline static constexpr unsigned int FKOBFKHJFLH_TypeDefinitionIndex = 61917;

	class FKOBFKHJFLH : public ::System::Object
	{
	public:
		::EFKDICGPLEH* KAMLEMCONJK; // 0x10
		::System::Collections::Generic::HashSet_1<::KPMAOLIGPAP*>* LIEOKFNODOI; // 0x18
		::System::Collections::Generic::HashSet_1<::KPMAOLIGPAP*>* FHGIGDLLOJN; // 0x20
		::COPBBBMLGEL* KGLKOEEKDJI; // 0x28
		::System::Boolean GFAMGLFOMGI; // 0x30
		static ::FKOBFKHJFLH** StaticGet_BOLKIDLCDGK()
		{
			return (::FKOBFKHJFLH**)UnitySDK::FromName("", "FKOBFKHJFLH")->GetStaticField(0x672F0);
		}

		::System::Void _ctor(::EFKDICGPLEH* a1, ::COPBBBMLGEL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFKDICGPLEH*, ::COPBBBMLGEL*))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::FKOBFKHJFLH* GNFFFFBHHFG()
		{
			return ((::FKOBFKHJFLH*(*)())((::PBYTE)hIl2Cpp + FKOBFKHJFLH_GNFFFFBHHFG_OFFSET))();
		}

		::System::Boolean AGDLFBIPEIP(::JPFJJLEPGBC* a1, ::RPG::GameCore::LittleGameSandboxScope a2, ::EAIGLLEMOII* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPFJJLEPGBC*, ::RPG::GameCore::LittleGameSandboxScope, ::EAIGLLEMOII*))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_AGDLFBIPEIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AGDLFBIPEIP_1(::JPFJJLEPGBC* a1, ::RPG::GameCore::LittleGameSandboxScope a2, ::EAIGLLEMOII* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPFJJLEPGBC*, ::RPG::GameCore::LittleGameSandboxScope, ::EAIGLLEMOII*, ::System::String*))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_AGDLFBIPEIP_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OEADNCPFOJJ(::GGLFJLFFBPP* a1, ::EAIGLLEMOII* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGLFJLFFBPP*, ::EAIGLLEMOII*, ::System::String*))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_OEADNCPFOJJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NNBIOLPHFFF(::JPFJJLEPGBC* a1, ::RPG::GameCore::LittleGameSandboxScope a2, ::MCFDMCPGEBD* a3, ::EAIGLLEMOII* a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPFJJLEPGBC*, ::RPG::GameCore::LittleGameSandboxScope, ::MCFDMCPGEBD*, ::EAIGLLEMOII*, ::System::String*))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_NNBIOLPHFFF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IDisposable* DIEAFFHFPJI()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_DIEAFFHFPJI_OFFSET))(this);
		}

		::System::Boolean MNPFDFDBMNG(::JPFJJLEPGBC* a1, ::MCFDMCPGEBD* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPFJJLEPGBC*, ::MCFDMCPGEBD*, ::System::String*))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_MNPFDFDBMNG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_DISPOSE_OFFSET))(this);
		}

		::System::Void GPLLONMEDAC(::KPMAOLIGPAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*))((::PBYTE)hIl2Cpp + FKOBFKHJFLH_GPLLONMEDAC_OFFSET))(this, a1);
		}

	};
