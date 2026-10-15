#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACPGJEEJBPB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGMKEJJJGFM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF397C0)
#define AGMKEJJJGFM_GET_DIALOGUELIST_OFFSET UNITYSDK_OFFSET(0xCF397A0)
#define AGMKEJJJGFM_SET_DIALOGUELIST_OFFSET UNITYSDK_OFFSET(0xCF397B0)

inline static constexpr unsigned int AGMKEJJJGFM_TypeDefinitionIndex = 62993;

	class AGMKEJJJGFM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ACPGJEEJBPB*>* _DialogueList_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKEJJJGFM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ACPGJEEJBPB*>* get_DialogueList()
		{
			return ((::System::Collections::Generic::List_1<::ACPGJEEJBPB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKEJJJGFM_GET_DIALOGUELIST_OFFSET))(this);
		}

		::System::Void set_DialogueList(::System::Collections::Generic::List_1<::ACPGJEEJBPB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ACPGJEEJBPB*>*))((::PBYTE)hIl2Cpp + AGMKEJJJGFM_SET_DIALOGUELIST_OFFSET))(this, a1);
		}

	};
