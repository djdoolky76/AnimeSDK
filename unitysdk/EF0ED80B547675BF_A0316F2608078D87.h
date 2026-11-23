#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EF0ED80B547675BF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EF0ED80B547675BF_A0316F2608078D87_E26DEAA9F1F87BCF_OFFSET UNITYSDK_OFFSET(0x393C1B0)
#define EF0ED80B547675BF_A0316F2608078D87__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EF0ED80B547675BF_A0316F2608078D87_TypeDefinitionIndex = 12367;

class EF0ED80B547675BF_A0316F2608078D87 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10
	::EF0ED80B547675BF* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF0ED80B547675BF_A0316F2608078D87__CTOR_OFFSET))(this);
	}

	::System::Void E26DEAA9F1F87BCF(::System::Int32 E82293C0814051A5, ::System::String* AE62BB2B694A9D83)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + EF0ED80B547675BF_A0316F2608078D87_E26DEAA9F1F87BCF_OFFSET))(this, E82293C0814051A5, AE62BB2B694A9D83);
	}
};
