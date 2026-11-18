#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGFNKFAJDEB.h"

class BCJBCEGNFNP;
class DIPGIIOKIJA;
class LHGBGMHHEKD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPGIIFINGGC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10F50070)
#define EPGIIFINGGC__CTOR_OFFSET UNITYSDK_OFFSET(0x10F4FD80)

inline static constexpr unsigned int EPGIIFINGGC_TypeDefinitionIndex = 65153;

class EPGIIFINGGC : public ::KGFNKFAJDEB
{
public:
	::System::String* CCLINDELKAL; // 0x18
	::System::Collections::Generic::List_1<::LHGBGMHHEKD*>* MCNIHBDGDIN; // 0x20
	::System::Boolean KPBDLNAGBEI; // 0x28
	::System::Boolean MCDFEBKGPGO; // 0x29
	::System::Boolean FIPHHFMGJLA; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 LALANOIPMBD; // 0x2C

	::System::Void _ctor(::BCJBCEGNFNP* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::BCJBCEGNFNP*))((::PBYTE)hIl2Cpp + EPGIIFINGGC__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void _ctor_1(::DIPGIIOKIJA* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::DIPGIIOKIJA*))((::PBYTE)hIl2Cpp + EPGIIFINGGC__CTOR_1_OFFSET))(this, LJBPECKCCEA);
	}
};
