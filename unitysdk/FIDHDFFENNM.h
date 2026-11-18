#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DCBIKALEPHJ;
class IBENDELLLAO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIDHDFFENNM_GJCBMMNPJHJ_OFFSET UNITYSDK_OFFSET(0x14AD5990)
#define FIDHDFFENNM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD5980)

inline static constexpr unsigned int FIDHDFFENNM_TypeDefinitionIndex = 75958;

class FIDHDFFENNM : public ::System::Object
{
public:
	::System::String* CNKADFLAGOK; // 0x10
	::System::Collections::Generic::List_1<::DCBIKALEPHJ*>* OHJNDFDLIBE; // 0x18
	::IBENDELLLAO* DANLNNHLDKO; // 0x20
	::System::Int64 CBOCGENFLMN; // 0x28
	::System::Boolean CCOMDCGGGGJ; // 0x30
	::System::Byte _padding0[0x7];
	::System::Int64 CDMKODJJBKH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDHDFFENNM__CTOR_OFFSET))(this);
	}

	::System::String* GJCBMMNPJHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDHDFFENNM_GJCBMMNPJHJ_OFFSET))(this);
	}
};
