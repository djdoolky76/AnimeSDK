#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class PKLAICEMAHO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICGOIPDHGPB_FGPBDGECKHD_OFFSET UNITYSDK_OFFSET(0x12EA4570)
#define ICGOIPDHGPB_LIHOFMJLJOD_OFFSET UNITYSDK_OFFSET(0x12EA4600)
#define ICGOIPDHGPB__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA44B0)

inline static constexpr unsigned int ICGOIPDHGPB_TypeDefinitionIndex = 55359;

class ICGOIPDHGPB : public ::System::Object
{
public:
	::PKLAICEMAHO* MIGAOFOKENO; // 0x10
	::System::Collections::Generic::List_1<::CJIEIHEDMME*>* ODKNFEBBOGH; // 0x18
	::CJIEIHEDMME* IHMKPNPADEM; // 0x20
	::System::Collections::Generic::List_1<::CJIEIHEDMME*>* FLGBPJHAFBM; // 0x28

	::System::Void _ctor(::PKLAICEMAHO* MIGAOFOKENO)
	{
		return ((::System::Void(*)(::PVOID, ::PKLAICEMAHO*))((::PBYTE)hIl2Cpp + ICGOIPDHGPB__CTOR_OFFSET))(this, MIGAOFOKENO);
	}

	::System::Void FGPBDGECKHD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + ICGOIPDHGPB_FGPBDGECKHD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void LIHOFMJLJOD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + ICGOIPDHGPB_LIHOFMJLJOD_OFFSET))(this, LADPIPOMBJM);
	}
};
