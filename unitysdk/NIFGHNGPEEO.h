#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NIFGHNGPEEO_GNDJBCIGIHI_OFFSET UNITYSDK_OFFSET(0x10D7A7E0)
#define NIFGHNGPEEO_LIKGOLKOBHM_OFFSET UNITYSDK_OFFSET(0x10D7AD90)
#define NIFGHNGPEEO__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D7A7A0)
#define NIFGHNGPEEO__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7A790)

inline static constexpr unsigned int NIFGHNGPEEO_TypeDefinitionIndex = 48339;

class NIFGHNGPEEO : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_HDDFJLDPLHE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NIFGHNGPEEO_TypeDefinitionIndex)->GetStaticField(0x11B40);
	}
	static ::System::Boolean* StaticGet_BODJCDFEMNO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NIFGHNGPEEO_TypeDefinitionIndex)->GetStaticField(0x11B44);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFGHNGPEEO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFGHNGPEEO__CCTOR_OFFSET))();
	}

	static ::System::Void GNDJBCIGIHI(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NIFGHNGPEEO_GNDJBCIGIHI_OFFSET))(FBILHHBPEHD);
	}

	static ::System::Boolean LIKGOLKOBHM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIFGHNGPEEO_LIKGOLKOBHM_OFFSET))();
	}
};
