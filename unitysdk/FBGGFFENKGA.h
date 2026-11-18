#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IOONMNPCCNF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBGGFFENKGA__CTOR_OFFSET UNITYSDK_OFFSET(0x17263290)

inline static constexpr unsigned int FBGGFFENKGA_TypeDefinitionIndex = 78120;

class FBGGFFENKGA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::IOONMNPCCNF*>* DNGNIJLNJOA; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGGFFENKGA__CTOR_OFFSET))(this);
	}
};
