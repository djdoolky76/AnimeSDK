#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMBIJHEIJPD.h"
#include "unitysdk/JBNMGDJKCCP.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class DLNOGMONFKF;
class JOCEKMFJJFM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJGLPJJKEBL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D34360)

inline static constexpr unsigned int LJGLPJJKEBL_TypeDefinitionIndex = 44242;

class LJGLPJJKEBL : public ::System::Object
{
public:
	::DLNOGMONFKF* MBKGDLPCNIK; // 0x10
	::System::Collections::Generic::List_1<::JOCEKMFJJFM*>* MCKCKEMNNMC; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>* CICMHEMILLO; // 0x20
	::System::UInt32 OHOPKBMFLFF; // 0x28
	::CMBIJHEIJPD ONGGIDMFHHA; // 0x2C
	::JBNMGDJKCCP AJCFFCLLOHJ; // 0x30
	::System::Boolean KPBDLNAGBEI; // 0x34
	::System::Byte _padding0[0x3];
	::System::UInt32 JOIKFFDAMBL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGLPJJKEBL__CTOR_OFFSET))(this);
	}
};
