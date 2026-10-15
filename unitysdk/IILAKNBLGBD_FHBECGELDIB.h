#pragma once
#include "unitysdk/unitysdk.h"
class IILAKNBLGBD;
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define IILAKNBLGBD_FHBECGELDIB_CTOR_OFFSET UNITYSDK_OFFSET(0x16442160)
#define IILAKNBLGBD_FHBECGELDIB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16442C90)
#define IILAKNBLGBD_FHBECGELDIB_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x16442B40)

	class IILAKNBLGBD_FHBECGELDIB
	{
	public:
		::UnityEngine::Texture* AIAJELFJKIJ; // 0x30
		::System::Void _ctor(::System::Single a1, ::System::String* a2, ::IILAKNBLGBD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::IILAKNBLGBD*, ::System::Int32))((::PBYTE)hIl2Cpp + IILAKNBLGBD_FHBECGELDIB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Texture* MNGGAOFNGIP()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILAKNBLGBD_FHBECGELDIB_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILAKNBLGBD_FHBECGELDIB_KHGIKBFDLFB_OFFSET))(this);
		}

	};
