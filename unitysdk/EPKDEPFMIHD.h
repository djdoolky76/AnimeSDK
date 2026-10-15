#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
class EKJEHDDDBII;
class MNBNFBAMKKI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDynamicValueRangeGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPKDEPFMIHD_AFOLPEHDGEP_OFFSET UNITYSDK_OFFSET(0x155D6B80)
#define EPKDEPFMIHD_CTOR_OFFSET UNITYSDK_OFFSET(0x155D70A0)
#define EPKDEPFMIHD_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x155D5FC0)
#define EPKDEPFMIHD_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x155D6500)
#define EPKDEPFMIHD_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0x155D5FB0)
#define EPKDEPFMIHD_FFGMGGDEDOD_OFFSET UNITYSDK_OFFSET(0x155D6D70)
#define EPKDEPFMIHD_FIOOLGJCKLK_OFFSET UNITYSDK_OFFSET(0x155D6200)
#define EPKDEPFMIHD_HOKBCNGMDDO_OFFSET UNITYSDK_OFFSET(0x155D7010)
#define EPKDEPFMIHD_IOEFCHEEDGC_OFFSET UNITYSDK_OFFSET(0x155D6EF0)
#define EPKDEPFMIHD_NFOLJPPLKDH_OFFSET UNITYSDK_OFFSET(0x155D6F80)
#define EPKDEPFMIHD_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x155D6140)

inline static constexpr unsigned int EPKDEPFMIHD_TypeDefinitionIndex = 53753;

	class EPKDEPFMIHD : public ::GJPFGOGOLBI
	{
	public:
		::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* HPKBJIDDHKH; // 0x18
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x20
		::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* HNOLNCCAEEB; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope>, ::EKJEHDDDBII*>* MAJIBJBAIHG; // 0x30
		::System::Action_1<::MNBNFBAMKKI*>* MIJEEJDKJEO; // 0x38
		::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* NNDONLIHELA; // 0x40
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::System::UInt32 CBPPMDNFIMG; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_EFKLLLLPAJH_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::Il2CppArray<::RPG::GameCore::RtDynamicValueRangeGroup*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtDynamicValueRangeGroup*>*))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_DLAILGNMFGI_OFFSET))(this, a1);
		}

		::System::Void FIOOLGJCKLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_FIOOLGJCKLK_OFFSET))(this);
		}

		::System::Void AFOLPEHDGEP(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_AFOLPEHDGEP_OFFSET))(this, a1);
		}

		::System::Void FFGMGGDEDOD(::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope> a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicValueContextScope>, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_FFGMGGDEDOD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IOEFCHEEDGC(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_IOEFCHEEDGC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NFOLJPPLKDH(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_NFOLJPPLKDH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOKBCNGMDDO(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EPKDEPFMIHD_HOKBCNGMDDO_OFFSET))(this, a1, a2, a3);
		}

	};
