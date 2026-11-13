#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
class EKJEHDDDBII;
class OIKDEOMMOAM;
namespace RPG::GameCore { class RtAbilityPropertyRangeGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define OHEJAJDCBFJ_ABOFOMGHGJM_OFFSET UNITYSDK_OFFSET(0x18E0AD50)
#define OHEJAJDCBFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18E0AF40)
#define OHEJAJDCBFJ_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x18E0A4E0)
#define OHEJAJDCBFJ_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x18E0A9F0)
#define OHEJAJDCBFJ_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0x18E0A4D0)
#define OHEJAJDCBFJ_FIOOLGJCKLK_OFFSET UNITYSDK_OFFSET(0x18E0A800)
#define OHEJAJDCBFJ_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x18E0A6C0)

inline static constexpr unsigned int OHEJAJDCBFJ_TypeDefinitionIndex = 54924;

	class OHEJAJDCBFJ : public ::GJPFGOGOLBI
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::EKJEHDDDBII*>* NBEHPCCKACL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEJAJDCBFJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEJAJDCBFJ_EFKLLLLPAJH_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEJAJDCBFJ_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEJAJDCBFJ_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::Il2CppArray<::RPG::GameCore::RtAbilityPropertyRangeGroup*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtAbilityPropertyRangeGroup*>*))((::PBYTE)hIl2Cpp + OHEJAJDCBFJ_DLAILGNMFGI_OFFSET))(this, a1);
		}

		::System::Void FIOOLGJCKLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEJAJDCBFJ_FIOOLGJCKLK_OFFSET))(this);
		}

		::System::Void ABOFOMGHGJM(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + OHEJAJDCBFJ_ABOFOMGHGJM_OFFSET))(this, a1);
		}

	};
