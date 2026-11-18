#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCHOANCLADD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCOOBEKHHCP__CTOR_OFFSET UNITYSDK_OFFSET(0x14F68AE0)

inline static constexpr unsigned int OCOOBEKHHCP_TypeDefinitionIndex = 55150;

class OCOOBEKHHCP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BCHOANCLADD*>* CKBKIJEKDDL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOOBEKHHCP__CTOR_OFFSET))(this);
	}
};
