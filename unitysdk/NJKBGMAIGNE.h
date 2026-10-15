#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAKCLAJLOB.h"
class GGJFAFONDHN;
namespace UnityEngine::Rendering { class CommandBuffer; }

#define NJKBGMAIGNE_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBC1A2F0)
#define NJKBGMAIGNE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xBC1A150)
#define NJKBGMAIGNE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1A3E0)
#define NJKBGMAIGNE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC1A080)
#define NJKBGMAIGNE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBC1A340)
#define NJKBGMAIGNE__INIT_B__0_0_OFFSET UNITYSDK_OFFSET(0xBC1A400)

	class NJKBGMAIGNE : public ::KHAKCLAJLOB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKBGMAIGNE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKBGMAIGNE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NJKBGMAIGNE_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKBGMAIGNE_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + NJKBGMAIGNE_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void _Init_b__0_0(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + NJKBGMAIGNE__INIT_B__0_0_OFFSET))(this, a1);
		}

	};
