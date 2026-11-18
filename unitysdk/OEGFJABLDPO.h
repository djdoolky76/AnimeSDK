#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJOHEPEJHK.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class CIIJJIJBFPN;
class IAGLACHHAPE;

#define OEGFJABLDPO_AFJIABILNJC_OFFSET UNITYSDK_OFFSET(0x1B77B3F0)
#define OEGFJABLDPO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1B77B730)
#define OEGFJABLDPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B77B430)
#define OEGFJABLDPO_OGPGJJHOHAF_OFFSET UNITYSDK_OFFSET(0x1B77B5A0)
#define OEGFJABLDPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B77B4F0)
#define OEGFJABLDPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77B480)

inline static constexpr unsigned int OEGFJABLDPO_TypeDefinitionIndex = 62955;

class OEGFJABLDPO : public ::IMJOHEPEJHK
{
public:
	static ::OEGFJABLDPO** StaticGet_CGICCOBHACH()
	{
		return (::OEGFJABLDPO**)Il2CppClass::FromTypeDefinitionIndex(OEGFJABLDPO_TypeDefinitionIndex)->GetStaticField(0x39CD0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGFJABLDPO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGFJABLDPO__CCTOR_OFFSET))();
	}

	::System::Void AFJIABILNJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGFJABLDPO_AFJIABILNJC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGFJABLDPO_DISPOSE_OFFSET))(this);
	}

	static ::OEGFJABLDPO* OGPGJJHOHAF(::CIIJJIJBFPN*& NJJMBKAKEGB, ::IAGLACHHAPE*& JGPKLNLMHPG)
	{
		return ((::OEGFJABLDPO*(*)(::CIIJJIJBFPN*&, ::IAGLACHHAPE*&))((::PBYTE)hIl2Cpp + OEGFJABLDPO_OGPGJJHOHAF_OFFSET))(NJJMBKAKEGB, JGPKLNLMHPG);
	}

	static ::OEGFJABLDPO* COKNIICCODC(::CIIJJIJBFPN*& NJJMBKAKEGB, ::IAGLACHHAPE*& JGPKLNLMHPG, ::MoleMole::EntityHandle& NCKMIGOHAGG)
	{
		return ((::OEGFJABLDPO*(*)(::CIIJJIJBFPN*&, ::IAGLACHHAPE*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + OEGFJABLDPO_COKNIICCODC_OFFSET))(NJJMBKAKEGB, JGPKLNLMHPG, NCKMIGOHAGG);
	}
};
