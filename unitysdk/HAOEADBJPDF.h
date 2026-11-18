#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GKFPDFNFFMD;

#define HAOEADBJPDF_ELFFPBNEAJI_OFFSET UNITYSDK_OFFSET(0x16F1BE00)
#define HAOEADBJPDF_MJHCDADMPKG_OFFSET UNITYSDK_OFFSET(0x16F1BDF0)
#define HAOEADBJPDF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1BDE0)

inline static constexpr unsigned int HAOEADBJPDF_TypeDefinitionIndex = 65742;

class HAOEADBJPDF : public ::System::Object
{
public:
	::GKFPDFNFFMD* HBDIIHGJMJJ; // 0x10
	::System::Int32 PHHLHKFGBNI; // 0x18

	::System::Void _ctor(::System::Int32 AKGGKGEPJLP, ::GKFPDFNFFMD* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::GKFPDFNFFMD*))((::PBYTE)hIl2Cpp + HAOEADBJPDF__CTOR_OFFSET))(this, AKGGKGEPJLP, PLBEAIIJADM);
	}

	::System::Int32 MJHCDADMPKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEADBJPDF_MJHCDADMPKG_OFFSET))(this);
	}

	::System::Void ELFFPBNEAJI(::System::Int32 CJHKJLBCNEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAOEADBJPDF_ELFFPBNEAJI_OFFSET))(this, CJHKJLBCNEH);
	}
};
