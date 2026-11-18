#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/PGBAJHAFANP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class BLAHDLPJIIC;
class CLOPJGCIJIM;
class KEJNHMJNNCF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LMDFHIBGBGD_OHAKOCDCCDD__CTOR_OFFSET UNITYSDK_OFFSET(0x15667160)

inline static constexpr unsigned int LMDFHIBGBGD_OHAKOCDCCDD_TypeDefinitionIndex = 79906;

class LMDFHIBGBGD_OHAKOCDCCDD : public ::System::Object
{
public:
	::CLOPJGCIJIM* DDOCHHMLDMN; // 0x10
	::System::ValueTuple_2<::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*> JHNBMMNCJFH; // 0x18
	::System::Byte _padding0[0x8];
	::System::ValueTuple_2<::BLAHDLPJIIC*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*> JPCCCICEGCF; // 0x28
	::System::Byte _padding1[0x8];
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::KEJNHMJNNCF*>* IOCAGGOFNOK; // 0x38
	::System::String* CLCKEFKHAIJ; // 0x40
	::System::Int32 BPOLJAMAIFF; // 0x48
	::PGBAJHAFANP OJDHAKGEJBH; // 0x4C
	::System::Int32 OHFINKAPHON; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_OHAKOCDCCDD__CTOR_OFFSET))(this);
	}
};
