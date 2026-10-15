#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FDMDLGNFCFB;
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define DCDEFONFBCP_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xE2390D0)
#define DCDEFONFBCP_CTOR_OFFSET UNITYSDK_OFFSET(0xE239170)
#define DCDEFONFBCP_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xE238C20)
#define DCDEFONFBCP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xE238D50)
#define DCDEFONFBCP_JHJODHHJLAK_OFFSET UNITYSDK_OFFSET(0xE238F00)
#define DCDEFONFBCP_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE238DA0)
#define DCDEFONFBCP_MPKNGKLPBCK_OFFSET UNITYSDK_OFFSET(0xE238FE0)
#define DCDEFONFBCP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xE238E70)
#define DCDEFONFBCP__ONBIND_OFFSET UNITYSDK_OFFSET(0xE238CB0)

inline static constexpr unsigned int DCDEFONFBCP_TypeDefinitionIndex = 71453;

	class DCDEFONFBCP : public ::FMPCODLIOLG
	{
	public:
		::FDMDLGNFCFB* FHKNGKLAMAF; // 0x60
		::UnityEngine::Animation* KCOAILOHDND; // 0x68
		::RPG::Client::LocalizedText* JGJCHJKLHFG; // 0x70
		::System::Boolean EMHAACACFOM; // 0x78
		::System::Boolean FFIAGGGEAEG; // 0x79
		::System::Byte _padding0[0x2];
		::System::Int32 HGLBNNPGKPH; // 0x7C
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* CJONLJJPLJM; // 0x0
		// static const ::System::String* JHNBEJJJLCO; // 0x0
		// static const ::System::String* PGMNJNHPMGG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDEFONFBCP_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DCDEFONFBCP_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDEFONFBCP__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDEFONFBCP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDEFONFBCP_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDEFONFBCP_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void JHJODHHJLAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCDEFONFBCP_JHJODHHJLAK_OFFSET))(this, a1);
		}

		::System::Void MPKNGKLPBCK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCDEFONFBCP_MPKNGKLPBCK_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCDEFONFBCP_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

	};
