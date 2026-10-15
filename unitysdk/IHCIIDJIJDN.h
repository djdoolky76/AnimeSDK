#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIAICDLAHO;
class IHCIIDJIJDN;
class LBJLBMOOJGM;
namespace System { class Object; }

#define IHCIIDJIJDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC76570)
#define IHCIIDJIJDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC75BA0)
#define IHCIIDJIJDN_KEBEIGGJIPA_OFFSET UNITYSDK_OFFSET(0x1EC75BB0)

	class IHCIIDJIJDN : public ::System::Object
	{
	public:
		static ::IHCIIDJIJDN** StaticGet_FMJPMFEDIJL()
		{
			return (::IHCIIDJIJDN**)UnitySDK::FromName("", "IHCIIDJIJDN")->GetStaticField(0x4C7E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCIIDJIJDN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHCIIDJIJDN_CCTOR_OFFSET))();
		}

		::System::Object* KEBEIGGJIPA(::ECIAICDLAHO* a1, ::LBJLBMOOJGM* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::ECIAICDLAHO*, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + IHCIIDJIJDN_KEBEIGGJIPA_OFFSET))(this, a1, a2);
		}

	};
