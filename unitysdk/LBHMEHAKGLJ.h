#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACDPFPICOAD.h"
#include "unitysdk/KGFNKFAJDEB.h"

class CAAEMKFJGJE;
class EKMKMNCJEHI;
class OCIKAJAKGGL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBHMEHAKGLJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x126CB280)
#define LBHMEHAKGLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x126CAF00)

inline static constexpr unsigned int LBHMEHAKGLJ_TypeDefinitionIndex = 52144;

class LBHMEHAKGLJ : public ::KGFNKFAJDEB
{
public:
	::CAAEMKFJGJE* PBFABIEPHCI; // 0x18
	::CAAEMKFJGJE* BAINDNMPDCP; // 0x20
	::System::Collections::Generic::List_1<::CAAEMKFJGJE*>* MCNIHBDGDIN; // 0x28
	::System::String* CCLINDELKAL; // 0x30
	::System::String* IODOOEIIEOJ; // 0x38
	::System::String* AMEEMEPHGEL; // 0x40
	::System::Boolean PLKNALFLOAO; // 0x48
	::System::Boolean MCDFEBKGPGO; // 0x49
	::System::Boolean FHEPDLDGLBB; // 0x4A
	::System::Boolean FPPEDHEDOBL; // 0x4B
	::System::Boolean CKMACLOPFPP; // 0x4C
	::System::Boolean MJAFHFKEMAK; // 0x4D
	::System::Byte _padding0[0x2];
	::ACDPFPICOAD KFCJAIOBGLA; // 0x50
	::System::Int32 ICCPPFDFAMN; // 0x54

	::System::Void _ctor(::OCIKAJAKGGL* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OCIKAJAKGGL*))((::PBYTE)hIl2Cpp + LBHMEHAKGLJ__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void _ctor_1(::EKMKMNCJEHI* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EKMKMNCJEHI*))((::PBYTE)hIl2Cpp + LBHMEHAKGLJ__CTOR_1_OFFSET))(this, LJBPECKCCEA);
	}
};
