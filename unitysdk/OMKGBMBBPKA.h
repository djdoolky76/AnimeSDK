#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPCMLINNGDM.h"
#include "unitysdk/System/Object.h"

class AHJCGEBAGDE;
class NPHJFIBBHOG;

#define OMKGBMBBPKA_IIKGBDMHNBP_OFFSET UNITYSDK_OFFSET(0x1E5E57F0)
#define OMKGBMBBPKA_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1E5F8270)
#define OMKGBMBBPKA_NJDOCFFDFIO_OFFSET UNITYSDK_OFFSET(0x1E5F8430)
#define OMKGBMBBPKA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8200)

inline static constexpr unsigned int OMKGBMBBPKA_TypeDefinitionIndex = 34080;

class OMKGBMBBPKA : public ::System::Object
{
public:
	static ::Il2CppArray<::AHJCGEBAGDE*>** StaticGet_EPNJCKHOGMF()
	{
		return (::Il2CppArray<::AHJCGEBAGDE*>**)Il2CppClass::FromTypeDefinitionIndex(OMKGBMBBPKA_TypeDefinitionIndex)->GetStaticField(0x2A110);
	}
	static ::Il2CppArray<::NPHJFIBBHOG*>** StaticGet_NOIICKMCHPG()
	{
		return (::Il2CppArray<::NPHJFIBBHOG*>**)Il2CppClass::FromTypeDefinitionIndex(OMKGBMBBPKA_TypeDefinitionIndex)->GetStaticField(0x2A118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMKGBMBBPKA__CCTOR_OFFSET))();
	}

	static ::AHJCGEBAGDE* NJDOCFFDFIO(::DPCMLINNGDM IMLLDOHDCNC)
	{
		return ((::AHJCGEBAGDE*(*)(::DPCMLINNGDM))((::PBYTE)hIl2Cpp + OMKGBMBBPKA_NJDOCFFDFIO_OFFSET))(IMLLDOHDCNC);
	}

	static ::System::Void JMDEKPONKMF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMKGBMBBPKA_JMDEKPONKMF_OFFSET))();
	}

	static ::AHJCGEBAGDE* IIKGBDMHNBP(::DPCMLINNGDM IMLLDOHDCNC)
	{
		return ((::AHJCGEBAGDE*(*)(::DPCMLINNGDM))((::PBYTE)hIl2Cpp + OMKGBMBBPKA_IIKGBDMHNBP_OFFSET))(IMLLDOHDCNC);
	}
};
