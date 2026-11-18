#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class EKOMAFPIPMA_MKHNHHPDENB;
class ODCBCMEIOGG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILAENLNHPIO__CTOR_OFFSET UNITYSDK_OFFSET(0x153B7130)

inline static constexpr unsigned int ILAENLNHPIO_TypeDefinitionIndex = 52599;

class ILAENLNHPIO : public ::System::Object
{
public:
	::EKOMAFPIPMA_MKHNHHPDENB* CKABFEAHKPH; // 0x10
	::ODCBCMEIOGG* DMACGCLLJNC; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* HGKBDPJCHHJ; // 0x20
	::System::Int32 MKIBAHLCKJN; // 0x28
	::System::Boolean JLMNBGAGOOJ; // 0x2C
	::System::Byte _padding0[0x3];
	::Foundation::ViewObject::GroupMemberIdentifier CJHKKDKFGJE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAENLNHPIO__CTOR_OFFSET))(this);
	}
};
