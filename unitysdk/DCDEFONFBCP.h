#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FDMDLGNFCFB;
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define DCDEFONFBCP_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1B167640)
#define DCDEFONFBCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1676E0)
#define DCDEFONFBCP_JHJODHHJLAK_OFFSET UNITYSDK_OFFSET(0x1B167470)
#define DCDEFONFBCP_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1B167310)
#define DCDEFONFBCP_MPKNGKLPBCK_OFFSET UNITYSDK_OFFSET(0x1B167550)
#define DCDEFONFBCP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1B1673E0)
#define DCDEFONFBCP__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B167160)
#define DCDEFONFBCP__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1670D0)
#define DCDEFONFBCP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B1672C0)

inline static constexpr unsigned int DCDEFONFBCP_TypeDefinitionIndex = 73435;

	class DCDEFONFBCP : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::RPG::Client::LocalizedText* JGJCHJKLHFG; // 0x68
		::FDMDLGNFCFB* FHKNGKLAMAF; // 0x70
		::System::Int32 HGLBNNPGKPH; // 0x78
		::System::Boolean FFIAGGGEAEG; // 0x7C
		::System::Boolean EMHAACACFOM; // 0x7D
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* CJONLJJPLJM; // 0x0
		// static const ::System::String* JHNBEJJJLCO; // 0x0
		// static const ::System::String* PGMNJNHPMGG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDEFONFBCP_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DCDEFONFBCP__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDEFONFBCP__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDEFONFBCP__SETUPVIEW_OFFSET))(this);
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
