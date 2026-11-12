#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define IMOAFBKNDGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB810F20)
#define IMOAFBKNDGG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB810E60)
#define IMOAFBKNDGG__ONBIND_OFFSET UNITYSDK_OFFSET(0xB810CB0)

inline static constexpr unsigned int IMOAFBKNDGG_TypeDefinitionIndex = 73893;

	class IMOAFBKNDGG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::UnityEngine::Transform* NLOFDELKDOI; // 0x68
		::UnityEngine::Transform* GHGAKNDLKGM; // 0x70
		// static const ::System::String* FPGPODGIBFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAFBKNDGG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAFBKNDGG__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IMOAFBKNDGG_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

	};
