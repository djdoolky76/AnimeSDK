#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OIOEEMPCNEC_BAHNJKKDDGH_OFFSET UNITYSDK_OFFSET(0xE1545B0)
#define OIOEEMPCNEC_CBHNHMBCJEG_OFFSET UNITYSDK_OFFSET(0xE154200)
#define OIOEEMPCNEC_KBKMIKJOOKK_OFFSET UNITYSDK_OFFSET(0xE154530)
#define OIOEEMPCNEC_LLLBLNPEMNH_OFFSET UNITYSDK_OFFSET(0xE154700)
#define OIOEEMPCNEC__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1541F0)

inline static constexpr unsigned int OIOEEMPCNEC_TypeDefinitionIndex = 54872;

class OIOEEMPCNEC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_JLKINOKJGLN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OIOEEMPCNEC_TypeDefinitionIndex)->GetStaticField(0xF360);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIOEEMPCNEC__CCTOR_OFFSET))();
	}

	static ::System::Void CBHNHMBCJEG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIOEEMPCNEC_CBHNHMBCJEG_OFFSET))();
	}

	static ::System::Boolean BAHNJKKDDGH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIOEEMPCNEC_BAHNJKKDDGH_OFFSET))();
	}

	static ::System::Int32 KBKMIKJOOKK()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + OIOEEMPCNEC_KBKMIKJOOKK_OFFSET))();
	}

	static ::System::Boolean LLLBLNPEMNH(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + OIOEEMPCNEC_LLLBLNPEMNH_OFFSET))(MGMDLMBEDJF);
	}
};
