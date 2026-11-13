#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
class GGLPJCKICNF;
class NLBIEMILEDE;
namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }
namespace UnityEngine { class RenderTexture; }

#define MNBKDKBAJLO_CLHKAGBFDPH_OFFSET UNITYSDK_OFFSET(0x1890DA70)
#define MNBKDKBAJLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1890C7D0)
#define MNBKDKBAJLO_FIMICOPOBKA_OFFSET UNITYSDK_OFFSET(0x1890C8B0)

inline static constexpr unsigned int MNBKDKBAJLO_TypeDefinitionIndex = 50631;

	class MNBKDKBAJLO : public ::System::Object
	{
	public:
		::System::String* LFLPOOCDHDP; // 0x10
		::UnityEngine::RenderTexture* DEKLBEOICNL; // 0x18
		::System::String* IONNPDPCMGI; // 0x20
		::UnityEngine::RenderTexture* MDFJOFDPLMC; // 0x28
		::System::String* MOEMBHDMKHG; // 0x30
		::System::String* OEBGKDJBDLN; // 0x38
		::System::String* EKBDBADONEE; // 0x40
		::System::Diagnostics::StackTrace* CLOEFAODPDB; // 0x48
		::System::String* DENGBGDGPBG; // 0x50
		::System::String* AIPJJDNLPOG; // 0x58
		::UnityEngine::RenderTexture* DCPECKHILNI; // 0x60
		::System::String* KHIONDCCOHN; // 0x68
		::System::Int32 LFDIFAAKEBC; // 0x70
		::System::Boolean EPLHEEKHGLC; // 0x74
		::System::Boolean JDPFBBHGMBH; // 0x75
		::System::Boolean EOPJAADKJML; // 0x76
		::System::Byte _padding0[0x1];
		::System::Single AEIPCPIMHGK; // 0x78
		::System::Int32 LMFANJLBAGN; // 0x7C
		::System::Int32 JGGJCANEGGK; // 0x80
		::System::Byte _padding1[0x4];
		::System::DateTime LLICGDGPMJL; // 0x88
		static ::GGLPJCKICNF** StaticGet_EPPGCNDBKFJ()
		{
			return (::GGLPJCKICNF**)UnitySDK::FromName("", "MNBKDKBAJLO")->GetStaticField(0xACD0);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNBKDKBAJLO_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLHKAGBFDPH(::NLBIEMILEDE* a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NLBIEMILEDE*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MNBKDKBAJLO_CLHKAGBFDPH_OFFSET))(this, a1, a2);
		}

		::System::Void FIMICOPOBKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBKDKBAJLO_FIMICOPOBKA_OFFSET))(this);
		}

	};
