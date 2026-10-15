#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
class GGLPJCKICNF;
class NLBIEMILEDE;
namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }
namespace UnityEngine { class RenderTexture; }

#define MNBKDKBAJLO_CLHKAGBFDPH_OFFSET UNITYSDK_OFFSET(0xB9E4080)
#define MNBKDKBAJLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E2DD0)
#define MNBKDKBAJLO_FIMICOPOBKA_OFFSET UNITYSDK_OFFSET(0xB9E2EB0)

inline static constexpr unsigned int MNBKDKBAJLO_TypeDefinitionIndex = 49555;

	class MNBKDKBAJLO : public ::System::Object
	{
	public:
		::System::String* IONNPDPCMGI; // 0x10
		::System::String* LFLPOOCDHDP; // 0x18
		::UnityEngine::RenderTexture* DEKLBEOICNL; // 0x20
		::System::String* OEBGKDJBDLN; // 0x28
		::UnityEngine::RenderTexture* DCPECKHILNI; // 0x30
		::System::String* DENGBGDGPBG; // 0x38
		::System::String* MOEMBHDMKHG; // 0x40
		::System::String* EKBDBADONEE; // 0x48
		::System::Diagnostics::StackTrace* CLOEFAODPDB; // 0x50
		::System::String* AIPJJDNLPOG; // 0x58
		::System::String* KHIONDCCOHN; // 0x60
		::UnityEngine::RenderTexture* MDFJOFDPLMC; // 0x68
		::System::Int32 LMFANJLBAGN; // 0x70
		::System::Int32 LFDIFAAKEBC; // 0x74
		::System::Single AEIPCPIMHGK; // 0x78
		::System::Byte _padding0[0x4];
		::System::DateTime LLICGDGPMJL; // 0x80
		::System::Boolean JDPFBBHGMBH; // 0x88
		::System::Boolean EOPJAADKJML; // 0x89
		::System::Boolean EPLHEEKHGLC; // 0x8A
		::System::Byte _padding1[0x1];
		::System::Int32 JGGJCANEGGK; // 0x8C
		static ::GGLPJCKICNF** StaticGet_EPPGCNDBKFJ()
		{
			return (::GGLPJCKICNF**)UnitySDK::FromName("", "MNBKDKBAJLO")->GetStaticField(0xFF70);
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
