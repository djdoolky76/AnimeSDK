#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFDNKIDGFMD;
class HJFOGKLGINK;

#define FHLICILAAOD_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x10F6C790)
#define FHLICILAAOD_IKJIEKCLAEF_OFFSET UNITYSDK_OFFSET(0x10F6C690)
#define FHLICILAAOD_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x10F6C6F0)
#define FHLICILAAOD_KPKMPAAPAGK_OFFSET UNITYSDK_OFFSET(0x10F6C640)
#define FHLICILAAOD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6C6E0)

inline static constexpr unsigned int FHLICILAAOD_TypeDefinitionIndex = 82904;

class FHLICILAAOD : public ::System::Object
{
public:
	static ::FHLICILAAOD** StaticGet_PMKINFHDLFD()
	{
		return (::FHLICILAAOD**)Il2CppClass::FromTypeDefinitionIndex(FHLICILAAOD_TypeDefinitionIndex)->GetStaticField(0x3DC00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLICILAAOD__CTOR_OFFSET))(this);
	}

	::System::Boolean KPKMPAAPAGK(::FFDNKIDGFMD* ABOGJGCIOKD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*))((::PBYTE)hIl2Cpp + FHLICILAAOD_KPKMPAAPAGK_OFFSET))(this, ABOGJGCIOKD);
	}

	::System::Boolean IKJIEKCLAEF(::FFDNKIDGFMD* ABOGJGCIOKD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*))((::PBYTE)hIl2Cpp + FHLICILAAOD_IKJIEKCLAEF_OFFSET))(this, ABOGJGCIOKD);
	}

	static ::HJFOGKLGINK* KCKBIOBGKBH()
	{
		return ((::HJFOGKLGINK*(*)())((::PBYTE)hIl2Cpp + FHLICILAAOD_KCKBIOBGKBH_OFFSET))();
	}

	static ::System::Void COKNIICCODC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHLICILAAOD_COKNIICCODC_OFFSET))();
	}
};
