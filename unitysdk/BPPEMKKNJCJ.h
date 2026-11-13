#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class LocalizedTextSDF; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define BPPEMKKNJCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B60C730)
#define BPPEMKKNJCJ_DFEBHAEEPMJ_OFFSET UNITYSDK_OFFSET(0x1B60C670)
#define BPPEMKKNJCJ_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1B60C410)
#define BPPEMKKNJCJ_MLHNIPNABAA_OFFSET UNITYSDK_OFFSET(0x1B60C4A0)
#define BPPEMKKNJCJ_OFGEPHCCHNO_OFFSET UNITYSDK_OFFSET(0x1B60C6C0)
#define BPPEMKKNJCJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B60C390)
#define BPPEMKKNJCJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B60C1E0)
#define BPPEMKKNJCJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1B60C460)
#define BPPEMKKNJCJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B60C3D0)

inline static constexpr unsigned int BPPEMKKNJCJ_TypeDefinitionIndex = 73867;

	class BPPEMKKNJCJ : public ::FMPCODLIOLG
	{
	public:
		::System::String* JJDGIADDPHM; // 0x60
		::System::String* KCOAILOHDND; // 0x68
		::RPG::Client::LocalizedTextSDF* CAJFGLLLNLA; // 0x70
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
		::RPG::Client::LocalizedTextSDF* AADENDDMEBP; // 0x80
		// static const ::System::String* NMMPNAINPHM; // 0x0
		// static const ::System::String* HMCCMOHDPHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ__ONDISPOSE_OFFSET))(this);
		}

		::System::Void MLHNIPNABAA(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ_MLHNIPNABAA_OFFSET))(this, a1, a2);
		}

		::System::Void DFEBHAEEPMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ_DFEBHAEEPMJ_OFFSET))(this);
		}

		::System::Void OFGEPHCCHNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ_OFGEPHCCHNO_OFFSET))(this);
		}

	};
