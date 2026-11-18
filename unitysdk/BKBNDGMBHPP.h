#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKBNDGMBHPP_AMCDAOJKFNF_OFFSET UNITYSDK_OFFSET(0x115F4330)
#define BKBNDGMBHPP_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x115F4280)
#define BKBNDGMBHPP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x115F41C0)
#define BKBNDGMBHPP__CCTOR_OFFSET UNITYSDK_OFFSET(0x115F4100)
#define BKBNDGMBHPP__CTOR_OFFSET UNITYSDK_OFFSET(0x115F40F0)

inline static constexpr unsigned int BKBNDGMBHPP_TypeDefinitionIndex = 62455;

class BKBNDGMBHPP : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_MKHNKIFFJFF()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BKBNDGMBHPP_TypeDefinitionIndex)->GetStaticField(0x51210);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBNDGMBHPP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKBNDGMBHPP__CCTOR_OFFSET))();
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKBNDGMBHPP_PHOADBJGFBE_OFFSET))();
	}

	static ::System::Void ANPBCLAFCJB(::System::Object* HELLOIIPKGF)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + BKBNDGMBHPP_ANPBCLAFCJB_OFFSET))(HELLOIIPKGF);
	}

	static ::System::Int32 AMCDAOJKFNF()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BKBNDGMBHPP_AMCDAOJKFNF_OFFSET))();
	}
};
