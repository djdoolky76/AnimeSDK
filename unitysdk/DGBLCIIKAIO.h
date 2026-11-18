#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGBLCIIKAIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1940FD00)

inline static constexpr unsigned int DGBLCIIKAIO_TypeDefinitionIndex = 81365;

class DGBLCIIKAIO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* AFJOCHIKKHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBLCIIKAIO__CTOR_OFFSET))(this);
	}
};
