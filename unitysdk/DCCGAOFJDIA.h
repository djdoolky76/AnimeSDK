#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCCGAOFJDIA_ProfileStackDirtyState.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCCGAOFJDIA_ACDCFENLKCB_OFFSET UNITYSDK_OFFSET(0xE235E90)
#define DCCGAOFJDIA_AHAGKCJHAPC_OFFSET UNITYSDK_OFFSET(0xE235860)
#define DCCGAOFJDIA_BMLDAIFKNPP_OFFSET UNITYSDK_OFFSET(0xE237ED0)
#define DCCGAOFJDIA_CCJPDHADIAE_OFFSET UNITYSDK_OFFSET(0xE236860)
#define DCCGAOFJDIA_CLFFKKIEJAF_OFFSET UNITYSDK_OFFSET(0xE237F80)
#define DCCGAOFJDIA_CTOR_OFFSET UNITYSDK_OFFSET(0xE234F40)
#define DCCGAOFJDIA_DHIACFKBCHD_OFFSET UNITYSDK_OFFSET(0xE236920)
#define DCCGAOFJDIA_EPMMDABBGOP_OFFSET UNITYSDK_OFFSET(0xE238070)
#define DCCGAOFJDIA_FKFDNJBDHAL_OFFSET UNITYSDK_OFFSET(0xE236670)
#define DCCGAOFJDIA_GAMLMFJDHFG_OFFSET UNITYSDK_OFFSET(0xE2381F0)
#define DCCGAOFJDIA_GLHCEFMHCGN_OFFSET UNITYSDK_OFFSET(0xE2350B0)
#define DCCGAOFJDIA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xE2356F0)
#define DCCGAOFJDIA_IKKOOGBJCGC_OFFSET UNITYSDK_OFFSET(0xE237F30)
#define DCCGAOFJDIA_KBOAICJNMHG_OFFSET UNITYSDK_OFFSET(0xE238530)
#define DCCGAOFJDIA_MFCFABPGFGB_OFFSET UNITYSDK_OFFSET(0xE236240)

inline static constexpr unsigned int DCCGAOFJDIA_TypeDefinitionIndex = 49590;

	class DCCGAOFJDIA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*>* KPEMDEMFAOJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* OHEDMDLEPHI; // 0x18
		::EnviromentSystem::EnviromentProfile* LMMDKKMKGEP; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::EnviromentSystem::EnviromentProfile*>* HINAMCABAED; // 0x28
		::DCCGAOFJDIA_ProfileStackDirtyState IJCDEINGADN; // 0x30
		static ::System::Boolean* StaticGet_LCDCHEKNEFK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DCCGAOFJDIA")->GetStaticField(0x139C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_CTOR_OFFSET))(this);
		}

		::System::Void GLHCEFMHCGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_GLHCEFMHCGN_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void AHAGKCJHAPC(::EnviromentSystem::EnviromentProfile* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_AHAGKCJHAPC_OFFSET))(this, a1, a2);
		}

		::System::Void ACDCFENLKCB(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_ACDCFENLKCB_OFFSET))(this, a1);
		}

		::RPG::GameCore::EnviromentControlPriority FKFDNJBDHAL()
		{
			return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_FKFDNJBDHAL_OFFSET))(this);
		}

		::System::Boolean CCJPDHADIAE(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_CCJPDHADIAE_OFFSET))(this, a1);
		}

		::System::Boolean DHIACFKBCHD(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_DHIACFKBCHD_OFFSET))(this, a1);
		}

		::System::Void BMLDAIFKNPP(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_BMLDAIFKNPP_OFFSET))(this, a1);
		}

		::System::String* IKKOOGBJCGC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_IKKOOGBJCGC_OFFSET))(this);
		}

		::EnviromentSystem::EnviromentProfile* CLFFKKIEJAF()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_CLFFKKIEJAF_OFFSET))(this);
		}

		::System::Void MFCFABPGFGB(::EnviromentSystem::EnviroProperty* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_MFCFABPGFGB_OFFSET))(this, a1, a2);
		}

		::System::Object* EPMMDABBGOP(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_EPMMDABBGOP_OFFSET))(this, a1);
		}

		::System::Void GAMLMFJDHFG(::EnviromentSystem::EnviroProperty* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_GAMLMFJDHFG_OFFSET))(this, a1, a2);
		}

		::System::Void KBOAICJNMHG(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + DCCGAOFJDIA_KBOAICJNMHG_OFFSET))(this, a1);
		}

	};
