#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICGOGNGGID.h"
#include "unitysdk/System/Object.h"
class LPFCCHDGOFB;
namespace RPG::GameCore { class TeamBuildConfigRow; }

#define LPFCCHDGOFB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB818CC0)
#define LPFCCHDGOFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB818F00)
#define LPFCCHDGOFB_GET_CANDIDATEPOOLIDS_OFFSET UNITYSDK_OFFSET(0xB818CB0)
#define LPFCCHDGOFB_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB818CA0)

inline static constexpr unsigned int LPFCCHDGOFB_TypeDefinitionIndex = 68091;

	class LPFCCHDGOFB : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::UInt32>*>* _CandidatePoolIDs_k__BackingField; // 0x10
		::LICGOGNGGID _Identifier_k__BackingField; // 0x18
		::System::Void _ctor(::LICGOGNGGID a1, ::Il2CppArray<::Il2CppArray<::System::UInt32>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LICGOGNGGID, ::Il2CppArray<::Il2CppArray<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + LPFCCHDGOFB_CTOR_OFFSET))(this, a1, a2);
		}

		::LICGOGNGGID get_Identifier()
		{
			return ((::LICGOGNGGID(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFCCHDGOFB_GET_IDENTIFIER_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::System::UInt32>*>* get_CandidatePoolIDs()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFCCHDGOFB_GET_CANDIDATEPOOLIDS_OFFSET))(this);
		}

		static ::LPFCCHDGOFB* BPLPBPMEODA(::RPG::GameCore::TeamBuildConfigRow* a1)
		{
			return ((::LPFCCHDGOFB*(*)(::RPG::GameCore::TeamBuildConfigRow*))((::PBYTE)hIl2Cpp + LPFCCHDGOFB_BPLPBPMEODA_OFFSET))(a1);
		}

	};
