#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DHHLHIEPGCH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x793C30)
#define DHHLHIEPGCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x793BB0)
#define DHHLHIEPGCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B9FE70)
#define DHHLHIEPGCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x793B50)
#define DHHLHIEPGCH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x793B70)
#define DHHLHIEPGCH__CTOR_OFFSET UNITYSDK_OFFSET(0x793B30)

inline static constexpr unsigned int DHHLHIEPGCH_TypeDefinitionIndex = 41264;

struct alignas(8) DHHLHIEPGCH
{
	static ::DHHLHIEPGCH* StaticGet_FDJHEBHLJLD()
	{
		return (::DHHLHIEPGCH*)Il2CppClass::FromTypeDefinitionIndex(DHHLHIEPGCH_TypeDefinitionIndex)->GetStaticField(0x32860);
	}
	static ::DHHLHIEPGCH* StaticGet_CKLNGEOKBIH()
	{
		return (::DHHLHIEPGCH*)Il2CppClass::FromTypeDefinitionIndex(DHHLHIEPGCH_TypeDefinitionIndex)->GetStaticField(0x32878);
	}
	::System::Double IOAAHPKLJMO; // 0x10
	::System::String* AFCBBDKNONL; // 0x18
	::System::Boolean OHGLFCDNFAE; // 0x20

	::System::Void _ctor(::System::Double BIOGEIHKABE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + DHHLHIEPGCH__CTOR_OFFSET))(this, BIOGEIHKABE);
	}

	::System::Void _ctor_1(::System::String* LCEGOBBEECM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHHLHIEPGCH__CTOR_1_OFFSET))(this, LCEGOBBEECM);
	}

	::System::Void _ctor_2(::System::Boolean FCPCLIJNDLA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHHLHIEPGCH__CTOR_2_OFFSET))(this, FCPCLIJNDLA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHHLHIEPGCH__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHLHIEPGCH_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHLHIEPGCH_DPIHOJBBGLA_OFFSET))(this);
	}
};
