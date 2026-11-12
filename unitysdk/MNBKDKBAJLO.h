#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
class GGLPJCKICNF;
class NLBIEMILEDE;
namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }
namespace UnityEngine { class RenderTexture; }

#define MNBKDKBAJLO_CLHKAGBFDPH_OFFSET UNITYSDK_OFFSET(0xC2A0CD0)
#define MNBKDKBAJLO_CTOR_OFFSET UNITYSDK_OFFSET(0xC29FA20)
#define MNBKDKBAJLO_FIMICOPOBKA_OFFSET UNITYSDK_OFFSET(0xC29FB00)

inline static constexpr unsigned int MNBKDKBAJLO_TypeDefinitionIndex = 50631;

	class MNBKDKBAJLO : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* MDFJOFDPLMC; // 0x10
		::System::String* LFLPOOCDHDP; // 0x18
		::System::String* IONNPDPCMGI; // 0x20
		::System::String* MOEMBHDMKHG; // 0x28
		::System::String* AIPJJDNLPOG; // 0x30
		::System::Diagnostics::StackTrace* CLOEFAODPDB; // 0x38
		::System::String* OEBGKDJBDLN; // 0x40
		::UnityEngine::RenderTexture* DCPECKHILNI; // 0x48
		::UnityEngine::RenderTexture* DEKLBEOICNL; // 0x50
		::System::String* EKBDBADONEE; // 0x58
		::System::String* KHIONDCCOHN; // 0x60
		::System::String* DENGBGDGPBG; // 0x68
		::System::Int32 LMFANJLBAGN; // 0x70
		::System::Int32 JGGJCANEGGK; // 0x74
		::System::DateTime LLICGDGPMJL; // 0x78
		::System::Single AEIPCPIMHGK; // 0x80
		::System::Boolean EOPJAADKJML; // 0x84
		::System::Boolean JDPFBBHGMBH; // 0x85
		::System::Boolean EPLHEEKHGLC; // 0x86
		::System::Byte _padding0[0x1];
		::System::Int32 LFDIFAAKEBC; // 0x88
		static ::GGLPJCKICNF** StaticGet_EPPGCNDBKFJ()
		{
			return (::GGLPJCKICNF**)UnitySDK::FromName("", "MNBKDKBAJLO")->GetStaticField(0xAE40);
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
