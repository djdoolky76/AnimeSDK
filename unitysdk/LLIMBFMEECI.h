#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAEKBENGCBO;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLIMBFMEECI__CTOR_OFFSET UNITYSDK_OFFSET(0x15E08B30)

inline static constexpr unsigned int LLIMBFMEECI_TypeDefinitionIndex = 47217;

class LLIMBFMEECI : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* JFNGPALILAD; // 0x10
	::System::Collections::Generic::List_1<::AAEKBENGCBO*>* BMFABAIELKM; // 0x18
	::System::Boolean DOMLPHLHBAI; // 0x20
	::System::Boolean DALBBPJJGEE; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIMBFMEECI__CTOR_OFFSET))(this);
	}
};
