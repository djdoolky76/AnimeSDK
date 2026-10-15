#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIAICDLAHO;
class LBJLBMOOJGM;
class OJLHJAMFNAD;
namespace System { class Object; }

#define OJLHJAMFNAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC8B120)
#define OJLHJAMFNAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8AE80)
#define OJLHJAMFNAD_KEBEIGGJIPA_OFFSET UNITYSDK_OFFSET(0x1EC8AE90)

	class OJLHJAMFNAD : public ::System::Object
	{
	public:
		static ::OJLHJAMFNAD** StaticGet_FMJPMFEDIJL()
		{
			return (::OJLHJAMFNAD**)UnitySDK::FromName("", "OJLHJAMFNAD")->GetStaticField(0x4C830);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHJAMFNAD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLHJAMFNAD_CCTOR_OFFSET))();
		}

		::System::Object* KEBEIGGJIPA(::ECIAICDLAHO* a1, ::LBJLBMOOJGM* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::ECIAICDLAHO*, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + OJLHJAMFNAD_KEBEIGGJIPA_OFFSET))(this, a1, a2);
		}

	};
