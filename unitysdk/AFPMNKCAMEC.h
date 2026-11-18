#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFPMNKCAMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF1030)

inline static constexpr unsigned int AFPMNKCAMEC_TypeDefinitionIndex = 54519;

class AFPMNKCAMEC : public ::System::Object
{
public:
	::System::Action* BDGAKDEBMPI; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JJCHLGFMLFL; // 0x18
	::System::String* KIHCEGPGBBG; // 0x20
	::System::Int32 KOMCNLHINMB; // 0x28
	::System::Int32 POBMKNPJPEL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPMNKCAMEC__CTOR_OFFSET))(this);
	}
};
