#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"

class AB642D1382756991;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B6C277297B2BB22D_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x18D57D0)
#define B6C277297B2BB22D_BE45898387226EEC_OFFSET UNITYSDK_OFFSET(0x1678550)
#define B6C277297B2BB22D_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x18D5700)
#define B6C277297B2BB22D__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5820)

inline static constexpr unsigned int B6C277297B2BB22D_TypeDefinitionIndex = 1384;

class B6C277297B2BB22D : public ::BD3A9F619D176EFE
{
public:
	::System::Collections::Generic::List_1<::AB642D1382756991*>* B1DF549D286AB9FD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6C277297B2BB22D__CTOR_OFFSET))(this);
	}

	::System::Boolean BE45898387226EEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B6C277297B2BB22D_BE45898387226EEC_OFFSET))(this);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B6C277297B2BB22D_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + B6C277297B2BB22D_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}
};
