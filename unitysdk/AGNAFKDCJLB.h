#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBAOKOHKCF.h"
#include "unitysdk/RPG/Client/ChenLingBattle/SoldierPropertyChangeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AGNAFKDCJLB;
class ALPLGBPDPIK;
class IDKGOGKFDOB;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGNAFKDCJLB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF40C10)
#define AGNAFKDCJLB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF40E80)
#define AGNAFKDCJLB_DGEACDGIBFI_OFFSET UNITYSDK_OFFSET(0xCF40F10)
#define AGNAFKDCJLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF40E90)
#define AGNAFKDCJLB_GBGIHCGPNCH_OFFSET UNITYSDK_OFFSET(0xCF41190)
#define AGNAFKDCJLB_HJJFFFJINCI_OFFSET UNITYSDK_OFFSET(0xCF413C0)
#define AGNAFKDCJLB_JJFAAIMNGBE_OFFSET UNITYSDK_OFFSET(0xCF41990)

inline static constexpr unsigned int AGNAFKDCJLB_TypeDefinitionIndex = 76382;

	class AGNAFKDCJLB : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::GLBAOKOHKCF, ::ALPLGBPDPIK*>* FCBNHDCINHC; // 0x10
		::RPG::PoolDictionary_2<::GLBAOKOHKCF, ::ALPLGBPDPIK*>* CEBECBOBLDO; // 0x18
		::RPG::Client::ChenLingBattle::Soldier* APDOFPIONOB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNAFKDCJLB_CTOR_OFFSET))(this);
		}

		static ::AGNAFKDCJLB* BPLPBPMEODA(::RPG::Client::ChenLingBattle::Soldier* a1)
		{
			return ((::AGNAFKDCJLB*(*)(::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + AGNAFKDCJLB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNAFKDCJLB_DISPOSE_OFFSET))(this);
		}

		::System::Void DGEACDGIBFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNAFKDCJLB_DGEACDGIBFI_OFFSET))(this);
		}

		::IDKGOGKFDOB* GBGIHCGPNCH()
		{
			return ((::IDKGOGKFDOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNAFKDCJLB_GBGIHCGPNCH_OFFSET))(this);
		}

		::System::Void HJJFFFJINCI(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a2, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType a3, ::GLBAOKOHKCF a4, ::IDKGOGKFDOB* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType, ::GLBAOKOHKCF, ::IDKGOGKFDOB*))((::PBYTE)hIl2Cpp + AGNAFKDCJLB_HJJFFFJINCI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::PoolDictionary_2<::RPG::GameCore::FixPoint, ::System::Int32>* JJFAAIMNGBE(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::PoolDictionary_2<::RPG::GameCore::FixPoint, ::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + AGNAFKDCJLB_JJFAAIMNGBE_OFFSET))(this, a1);
		}

	};
