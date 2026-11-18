#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FHFJEPFNPIP_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x132133E0)
#define FHFJEPFNPIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x132133D0)

inline static constexpr unsigned int FHFJEPFNPIP_TypeDefinitionIndex = 73861;

class FHFJEPFNPIP : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_FBEOLJDLFFL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FHFJEPFNPIP_TypeDefinitionIndex)->GetStaticField(0xA800);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHFJEPFNPIP__CCTOR_OFFSET))();
	}

	static ::System::Void KKFNPONHGEM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHFJEPFNPIP_KKFNPONHGEM_OFFSET))();
	}
};
