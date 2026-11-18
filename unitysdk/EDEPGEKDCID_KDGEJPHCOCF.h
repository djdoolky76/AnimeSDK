#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJBMLMHDOME;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDEPGEKDCID_KDGEJPHCOCF_OBCNJAIICHL_OFFSET UNITYSDK_OFFSET(0x106300A0)
#define EDEPGEKDCID_KDGEJPHCOCF__CTOR_OFFSET UNITYSDK_OFFSET(0x10630090)

inline static constexpr unsigned int EDEPGEKDCID_KDGEJPHCOCF_TypeDefinitionIndex = 62889;

class EDEPGEKDCID_KDGEJPHCOCF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FNALCBEBIEI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPGEKDCID_KDGEJPHCOCF__CTOR_OFFSET))(this);
	}

	::System::Boolean OBCNJAIICHL(::BJBMLMHDOME* DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::PVOID, ::BJBMLMHDOME*))((::PBYTE)hIl2Cpp + EDEPGEKDCID_KDGEJPHCOCF_OBCNJAIICHL_OFFSET))(this, DEKJDEPKKLH);
	}
};
