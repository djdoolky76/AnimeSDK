#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACDPFPICOAD.h"
#include "unitysdk/System/Object.h"

class DHOGFPGPJHD;
class KBJEFCOAJMB;
class OCIKAJAKGGL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EECEBDJKOBI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1353A9E0)
#define EECEBDJKOBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1353A740)

inline static constexpr unsigned int EECEBDJKOBI_TypeDefinitionIndex = 74977;

class EECEBDJKOBI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KBJEFCOAJMB*>* MCNIHBDGDIN; // 0x10
	::System::String* IODOOEIIEOJ; // 0x18
	::System::String* CCLINDELKAL; // 0x20
	::System::String* AMEEMEPHGEL; // 0x28
	::KBJEFCOAJMB* PBFABIEPHCI; // 0x30
	::KBJEFCOAJMB* BAINDNMPDCP; // 0x38
	::System::Boolean CKMACLOPFPP; // 0x40
	::System::Byte _padding0[0x3];
	::ACDPFPICOAD KFCJAIOBGLA; // 0x44

	::System::Void _ctor(::OCIKAJAKGGL* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OCIKAJAKGGL*))((::PBYTE)hIl2Cpp + EECEBDJKOBI__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void _ctor_1(::DHOGFPGPJHD* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::DHOGFPGPJHD*))((::PBYTE)hIl2Cpp + EECEBDJKOBI__CTOR_1_OFFSET))(this, LJBPECKCCEA);
	}
};
