#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAKCLAJLOB.h"
class GGJFAFONDHN;
namespace UnityEngine::Rendering { class CommandBuffer; }

#define NJKBGMAIGNE_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1A796420)
#define NJKBGMAIGNE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1A796280)
#define NJKBGMAIGNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A796510)
#define NJKBGMAIGNE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A7961B0)
#define NJKBGMAIGNE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1A796470)
#define NJKBGMAIGNE__INIT_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A796530)

inline static constexpr unsigned int NJKBGMAIGNE_TypeDefinitionIndex = 50421;

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
