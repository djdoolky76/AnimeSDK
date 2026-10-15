#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIOCFENBIHO_APLOECCILIF_OFFSET UNITYSDK_OFFSET(0x154D34E0)
#define EIOCFENBIHO_CTOR_OFFSET UNITYSDK_OFFSET(0x154D3560)
#define EIOCFENBIHO_FFGEGBNLLOO_OFFSET UNITYSDK_OFFSET(0x154D3520)
#define EIOCFENBIHO_GET_ENHANCEDREDDOTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x154D34C0)
#define EIOCFENBIHO_GET_ENHANCEDREDDOTTRIALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x154D34D0)
#define EIOCFENBIHO_GET_MAXENHANCEDSEASON_OFFSET UNITYSDK_OFFSET(0x154D34A0)
#define EIOCFENBIHO_SET_MAXENHANCEDSEASON_OFFSET UNITYSDK_OFFSET(0x154D34B0)

inline static constexpr unsigned int EIOCFENBIHO_TypeDefinitionIndex = 62759;

	class EIOCFENBIHO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EnhancedRedDotTrialStageIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _EnhancedRedDotAvatarIDs_k__BackingField; // 0x18
		::System::UInt32 _MaxEnhancedSeason_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOCFENBIHO_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxEnhancedSeason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOCFENBIHO_GET_MAXENHANCEDSEASON_OFFSET))(this);
		}

		::System::Void set_MaxEnhancedSeason(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIOCFENBIHO_SET_MAXENHANCEDSEASON_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EnhancedRedDotAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOCFENBIHO_GET_ENHANCEDREDDOTAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EnhancedRedDotTrialStageIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOCFENBIHO_GET_ENHANCEDREDDOTTRIALSTAGEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* APLOECCILIF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOCFENBIHO_APLOECCILIF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* FFGEGBNLLOO()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOCFENBIHO_FFGEGBNLLOO_OFFSET))(this);
		}

	};
