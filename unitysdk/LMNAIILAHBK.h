#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMNAIILAHBK__CTOR_OFFSET UNITYSDK_OFFSET(0x15669A80)

inline static constexpr unsigned int LMNAIILAHBK_TypeDefinitionIndex = 83711;

class LMNAIILAHBK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE; // 0x10
	::System::Action* EBAAGGHDBEF; // 0x18
	::System::Boolean GBEJHEECAII; // 0x20
	::System::Byte _padding0[0x3];
	::System::UInt32 CJHCCIAEBNP; // 0x24

	::System::Void _ctor(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE, ::System::UInt32 NACGJJKHEJE, ::System::Boolean GBEJHEECAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + LMNAIILAHBK__CTOR_OFFSET))(this, GLOIMHAJJIE, NACGJJKHEJE, GBEJHEECAII);
	}
};
