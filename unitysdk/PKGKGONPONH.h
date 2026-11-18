#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABDCODBFDMB.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GHDNGLEGEEB;
class MDIKGPOMBGJ;
class PFKOGAJAOIF;

#define PKGKGONPONH_DMDMPBOHJLH_OFFSET UNITYSDK_OFFSET(0x1ED96670)
#define PKGKGONPONH_PAGLFLHMFKC_OFFSET UNITYSDK_OFFSET(0x1ED96300)
#define PKGKGONPONH_PJDIIHNMJND_OFFSET UNITYSDK_OFFSET(0x1ED961D0)

inline static constexpr unsigned int PKGKGONPONH_TypeDefinitionIndex = 94898;

class PKGKGONPONH : public ::System::Object
{
public:
	static ::System::Void PJDIIHNMJND(::PFKOGAJAOIF* JEJIIDAHMPF)
	{
		return ((::System::Void(*)(::PFKOGAJAOIF*))((::PBYTE)hIl2Cpp + PKGKGONPONH_PJDIIHNMJND_OFFSET))(JEJIIDAHMPF);
	}

	static ::System::Boolean PAGLFLHMFKC(::GHDNGLEGEEB* AAOCANGHBDG, ::MDIKGPOMBGJ* IFAJBOBJDJE, ::System::Int32 ANNOJCFNHIO, ::ABDCODBFDMB& HIDDDEFCKOJ)
	{
		return ((::System::Boolean(*)(::GHDNGLEGEEB*, ::MDIKGPOMBGJ*, ::System::Int32, ::ABDCODBFDMB&))((::PBYTE)hIl2Cpp + PKGKGONPONH_PAGLFLHMFKC_OFFSET))(AAOCANGHBDG, IFAJBOBJDJE, ANNOJCFNHIO, HIDDDEFCKOJ);
	}

	static ::System::Void DMDMPBOHJLH(::GHDNGLEGEEB* AAOCANGHBDG, ::System::Int32 ANNOJCFNHIO, ::UnityEngine::Vector3 BAECLPHLLHO, ::System::Single CNFLHOKKFMB, ::System::Boolean JIOMIIDAPBH)
	{
		return ((::System::Void(*)(::GHDNGLEGEEB*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PKGKGONPONH_DMDMPBOHJLH_OFFSET))(AAOCANGHBDG, ANNOJCFNHIO, BAECLPHLLHO, CNFLHOKKFMB, JIOMIIDAPBH);
	}
};
