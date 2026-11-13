#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKACOEJLABN;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace UnityEngine { class GameObject; }

#define CMJDEKHCHGA_INCNAAKNJCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B19F2E0)

inline static constexpr unsigned int CMJDEKHCHGA_INCNAAKNJCP_TypeDefinitionIndex = 74160;

	class CMJDEKHCHGA_INCNAAKNJCP : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* OLPPHJJNMEA; // 0x10
		::System::Collections::Generic::LinkedListNode_1<::System::Object*>* PPAOJPLEDOD; // 0x18
		::System::String* IPKCFNKIDMB; // 0x20
		::EKACOEJLABN* EOBLJJBOBIN; // 0x28
		::System::Collections::Generic::LinkedListNode_1<::System::Object*>* OCDILFBIKAM; // 0x30
		::System::Collections::Generic::LinkedListNode_1<::System::Object*>* GFEAEEPMPGK; // 0x38
		::System::Void _ctor(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CMJDEKHCHGA_INCNAAKNJCP_CTOR_OFFSET))(this, a1, a2);
		}

	};
