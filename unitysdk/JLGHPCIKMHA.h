#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFDNKIDGFMD;
class HJFOGKLGINK;

#define JLGHPCIKMHA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13CCB3F0)
#define JLGHPCIKMHA_IKJIEKCLAEF_OFFSET UNITYSDK_OFFSET(0x13CCB2F0)
#define JLGHPCIKMHA_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x13CCB350)
#define JLGHPCIKMHA_KPKMPAAPAGK_OFFSET UNITYSDK_OFFSET(0x13CCB1C0)
#define JLGHPCIKMHA__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCB340)

inline static constexpr unsigned int JLGHPCIKMHA_TypeDefinitionIndex = 73527;

class JLGHPCIKMHA : public ::System::Object
{
public:
	static ::JLGHPCIKMHA** StaticGet_PMKINFHDLFD()
	{
		return (::JLGHPCIKMHA**)Il2CppClass::FromTypeDefinitionIndex(JLGHPCIKMHA_TypeDefinitionIndex)->GetStaticField(0x46780);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGHPCIKMHA__CTOR_OFFSET))(this);
	}

	::System::Boolean KPKMPAAPAGK(::FFDNKIDGFMD* ABOGJGCIOKD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*))((::PBYTE)hIl2Cpp + JLGHPCIKMHA_KPKMPAAPAGK_OFFSET))(this, ABOGJGCIOKD);
	}

	::System::Boolean IKJIEKCLAEF(::FFDNKIDGFMD* ABOGJGCIOKD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*))((::PBYTE)hIl2Cpp + JLGHPCIKMHA_IKJIEKCLAEF_OFFSET))(this, ABOGJGCIOKD);
	}

	static ::HJFOGKLGINK* KCKBIOBGKBH()
	{
		return ((::HJFOGKLGINK*(*)())((::PBYTE)hIl2Cpp + JLGHPCIKMHA_KCKBIOBGKBH_OFFSET))();
	}

	static ::System::Void COKNIICCODC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLGHPCIKMHA_COKNIICCODC_OFFSET))();
	}
};
