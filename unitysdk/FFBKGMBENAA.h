#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FFBKGMBENAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1572FF40)
#define FFBKGMBENAA_DALKINCKLJJ_OFFSET UNITYSDK_OFFSET(0x1572F970)
#define FFBKGMBENAA_DNOPLMGEEJE_OFFSET UNITYSDK_OFFSET(0x1572FB00)
#define FFBKGMBENAA_GOLHJJIFDEA_OFFSET UNITYSDK_OFFSET(0x1572FE50)
#define FFBKGMBENAA_INHBJHGKPGP_OFFSET UNITYSDK_OFFSET(0x1572FD60)
#define FFBKGMBENAA_LPANHDEIMPH_OFFSET UNITYSDK_OFFSET(0x1572FC90)

	class FFBKGMBENAA : public ::System::Object
	{
	public:
		::System::String* DBGAADAGCJC; // 0x10
		::System::String* JFBNIFLNGOJ; // 0x18
		::System::String* GOAFEIBMOGG; // 0x20
		::System::String* LKGEHKPLJII; // 0x28
		::Il2CppArray<::System::String*>* KELKMCMLHHA; // 0x30
		::System::String* CDPNAMLJGCN; // 0x38
		::System::String* FHGKDPJPMBK; // 0x40
		::System::String* JMIGDFGDIKF; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBKGMBENAA_CTOR_OFFSET))(this);
		}

		::System::Void DALKINCKLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBKGMBENAA_DALKINCKLJJ_OFFSET))(this);
		}

		::System::Void DNOPLMGEEJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBKGMBENAA_DNOPLMGEEJE_OFFSET))(this);
		}

		::System::Void LPANHDEIMPH(::System::UInt32 a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FFBKGMBENAA_LPANHDEIMPH_OFFSET))(this, a1, a2);
		}

		::System::Void INHBJHGKPGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBKGMBENAA_INHBJHGKPGP_OFFSET))(this);
		}

		::System::Void GOLHJJIFDEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBKGMBENAA_GOLHJJIFDEA_OFFSET))(this);
		}

	};
