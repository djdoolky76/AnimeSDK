#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define INPCFNLLGMO__CTOR_OFFSET UNITYSDK_OFFSET(0x19439070)

inline static constexpr unsigned int INPCFNLLGMO_TypeDefinitionIndex = 54939;

class INPCFNLLGMO : public ::System::Object
{
public:
	::UnityEngine::RectTransform* CHIKCMGDDAA; // 0x10
	::System::Action_1<::System::Int32>* PAMFALGMBKK; // 0x18
	::System::Action* FAHJADCIIPD; // 0x20
	::System::String* AFNJPFLBDJB; // 0x28
	::System::Boolean EFLKFCCLMMG; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 NOOLOILNGPL; // 0x34
	::System::Int32 KIBGNEGKEFI; // 0x38
	::System::Int32 GHPPDJEPJIJ; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPCFNLLGMO__CTOR_OFFSET))(this);
	}
};
