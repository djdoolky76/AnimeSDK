#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJCMKDPMILJ;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEHGNHLHAMB_HMEEIPDNPLD_OFFSET UNITYSDK_OFFSET(0x13DCA130)
#define GEHGNHLHAMB_OPEFHAMCGEI_OFFSET UNITYSDK_OFFSET(0x13DCA030)
#define GEHGNHLHAMB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DC9F10)

inline static constexpr unsigned int GEHGNHLHAMB_TypeDefinitionIndex = 62908;

class GEHGNHLHAMB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::EJCMKDPMILJ*>** StaticGet_NELKJJPKNCD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::EJCMKDPMILJ*>**)Il2CppClass::FromTypeDefinitionIndex(GEHGNHLHAMB_TypeDefinitionIndex)->GetStaticField(0x51EC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEHGNHLHAMB__CCTOR_OFFSET))();
	}

	static ::System::Void OPEFHAMCGEI(::System::Type* FMIPOOKEMHO, ::EJCMKDPMILJ* IKILJKBJDEL)
	{
		return ((::System::Void(*)(::System::Type*, ::EJCMKDPMILJ*))((::PBYTE)hIl2Cpp + GEHGNHLHAMB_OPEFHAMCGEI_OFFSET))(FMIPOOKEMHO, IKILJKBJDEL);
	}

	static ::EJCMKDPMILJ* HMEEIPDNPLD(::System::Type* FMIPOOKEMHO)
	{
		return ((::EJCMKDPMILJ*(*)(::System::Type*))((::PBYTE)hIl2Cpp + GEHGNHLHAMB_HMEEIPDNPLD_OFFSET))(FMIPOOKEMHO);
	}
};
