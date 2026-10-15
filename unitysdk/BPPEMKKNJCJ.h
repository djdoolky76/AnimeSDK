#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class LocalizedTextSDF; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define BPPEMKKNJCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC1AEEF0)
#define BPPEMKKNJCJ_DFEBHAEEPMJ_OFFSET UNITYSDK_OFFSET(0xC1AEE30)
#define BPPEMKKNJCJ_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC1AEBA0)
#define BPPEMKKNJCJ_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC1AEBE0)
#define BPPEMKKNJCJ_MLHNIPNABAA_OFFSET UNITYSDK_OFFSET(0xC1AEC70)
#define BPPEMKKNJCJ_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC1AEB60)
#define BPPEMKKNJCJ_OFGEPHCCHNO_OFFSET UNITYSDK_OFFSET(0xC1AEE80)
#define BPPEMKKNJCJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xC1AEAD0)
#define BPPEMKKNJCJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC1AEC30)

inline static constexpr unsigned int BPPEMKKNJCJ_TypeDefinitionIndex = 71847;

	class BPPEMKKNJCJ : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedTextSDF* CAJFGLLLNLA; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::System::String* KCOAILOHDND; // 0x70
		::System::String* JJDGIADDPHM; // 0x78
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPEMKKNJCJ_EKGCGIDIFJJ_OFFSET))(this);
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
