#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFDNKIDGFMD;

#define HNIOEPACGFE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x16CFF690)
#define HNIOEPACGFE_IKJIEKCLAEF_OFFSET UNITYSDK_OFFSET(0x16CFF630)
#define HNIOEPACGFE_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x16CFF700)
#define HNIOEPACGFE_KPKMPAAPAGK_OFFSET UNITYSDK_OFFSET(0x16CFF5E0)
#define HNIOEPACGFE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFF680)

inline static constexpr unsigned int HNIOEPACGFE_TypeDefinitionIndex = 51914;

class HNIOEPACGFE : public ::System::Object
{
public:
	static ::HNIOEPACGFE** StaticGet_PMKINFHDLFD()
	{
		return (::HNIOEPACGFE**)Il2CppClass::FromTypeDefinitionIndex(HNIOEPACGFE_TypeDefinitionIndex)->GetStaticField(0x37BA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIOEPACGFE__CTOR_OFFSET))(this);
	}

	::System::Boolean KPKMPAAPAGK(::FFDNKIDGFMD* ABOGJGCIOKD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*))((::PBYTE)hIl2Cpp + HNIOEPACGFE_KPKMPAAPAGK_OFFSET))(this, ABOGJGCIOKD);
	}

	::System::Boolean IKJIEKCLAEF(::FFDNKIDGFMD* ABOGJGCIOKD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*))((::PBYTE)hIl2Cpp + HNIOEPACGFE_IKJIEKCLAEF_OFFSET))(this, ABOGJGCIOKD);
	}

	static ::System::Void COKNIICCODC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNIOEPACGFE_COKNIICCODC_OFFSET))();
	}

	static ::HNIOEPACGFE* KCKBIOBGKBH()
	{
		return ((::HNIOEPACGFE*(*)())((::PBYTE)hIl2Cpp + HNIOEPACGFE_KCKBIOBGKBH_OFFSET))();
	}
};
