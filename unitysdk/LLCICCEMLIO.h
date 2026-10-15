#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLCICCEMLIO;
namespace RPG::GameCore { class TeamBuildGroupConfigRow; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LLCICCEMLIO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB75B650)
#define LLCICCEMLIO_CTOR_OFFSET UNITYSDK_OFFSET(0xB75B920)
#define LLCICCEMLIO_GET_CANDIDATEAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB75B640)
#define LLCICCEMLIO_GET_ID_OFFSET UNITYSDK_OFFSET(0xB75B630)

inline static constexpr unsigned int LLCICCEMLIO_TypeDefinitionIndex = 68090;

	class LLCICCEMLIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _CandidateAvatarIDs_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LLCICCEMLIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICCEMLIO_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_CandidateAvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICCEMLIO_GET_CANDIDATEAVATARIDS_OFFSET))(this);
		}

		static ::LLCICCEMLIO* BPLPBPMEODA(::RPG::GameCore::TeamBuildGroupConfigRow* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
		{
			return ((::LLCICCEMLIO*(*)(::RPG::GameCore::TeamBuildGroupConfigRow*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LLCICCEMLIO_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
