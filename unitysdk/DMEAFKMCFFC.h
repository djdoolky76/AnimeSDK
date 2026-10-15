#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDHODAPAOMM.h"
#include "unitysdk/RPG/GameCore/SDFTextAlignType.h"
class PKLHDDGKKOC;
namespace RPG::Client { class UISetTMPAttribute; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define DMEAFKMCFFC_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB3270)
#define DMEAFKMCFFC_DJCBGDDOLBL_OFFSET UNITYSDK_OFFSET(0xFEB3C10)
#define DMEAFKMCFFC_FBIGGDKCMDG_OFFSET UNITYSDK_OFFSET(0xFEB3E60)
#define DMEAFKMCFFC_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xFEB32C0)
#define DMEAFKMCFFC_JMCPDMLGHBC_OFFSET UNITYSDK_OFFSET(0xFEB3CC0)
#define DMEAFKMCFFC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xFEB3280)
#define DMEAFKMCFFC_LGDAGLKFEJE_OFFSET UNITYSDK_OFFSET(0xFEB3DB0)
#define DMEAFKMCFFC_LOEFADJBNIE_OFFSET UNITYSDK_OFFSET(0xFEB33C0)
#define DMEAFKMCFFC_NGNMBJELPJK_OFFSET UNITYSDK_OFFSET(0xFEB3AE0)
#define DMEAFKMCFFC_NNNGFJMFLON_OFFSET UNITYSDK_OFFSET(0xFEB3300)

inline static constexpr unsigned int DMEAFKMCFFC_TypeDefinitionIndex = 57378;

	class DMEAFKMCFFC : public ::HDHODAPAOMM
	{
	public:
		::System::String* NNAGBBGGELA; // 0x18
		::RPG::Client::UISetTMPAttribute* BFPACAACJNA; // 0x20
		::System::String* NFKEJHFCLCK; // 0x28
		::UnityEngine::Animator* JGHOOEMEMNN; // 0x30
		::RPG::GameCore::SDFTextAlignType LFPJKKMJLGJ; // 0x38
		::System::Boolean MDENJGCCOAF; // 0x3C
		::System::Boolean NNEKDGJKECJ; // 0x3D
		::System::Boolean LNCLEOBLMHP; // 0x3E
		::System::Boolean KPGCOKPMIJH; // 0x3F
		::System::Single OFFNANIBEBE; // 0x40
		::System::Single KAHLOLBANEE; // 0x44
		::System::Single BDMPGHLEALD; // 0x48
		::System::Single FKPGHKFPGFP; // 0x4C
		::System::UInt32 GOLPINLCBAF; // 0x50
		::System::Int32 NHEOPNFJOOP; // 0x54
		// static const ::System::String* MGMBDBGJFBO; // 0x0
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void NNNGFJMFLON(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_NNNGFJMFLON_OFFSET))(this, a1);
		}

		::System::Void DJCBGDDOLBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_DJCBGDDOLBL_OFFSET))(this);
		}

		::System::Void JMCPDMLGHBC(::System::Boolean a1, ::System::UInt32 a2, ::System::String* a3, ::System::Single a4, ::System::String* a5, ::System::Int32 a6, ::System::Boolean a7, ::RPG::GameCore::SDFTextAlignType a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::String*, ::System::Single, ::System::String*, ::System::Int32, ::System::Boolean, ::RPG::GameCore::SDFTextAlignType))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_JMCPDMLGHBC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void LGDAGLKFEJE(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_LGDAGLKFEJE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LOEFADJBNIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_LOEFADJBNIE_OFFSET))(this);
		}

		::System::Void NGNMBJELPJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_NGNMBJELPJK_OFFSET))(this);
		}

		::PKLHDDGKKOC* FBIGGDKCMDG()
		{
			return ((::PKLHDDGKKOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEAFKMCFFC_FBIGGDKCMDG_OFFSET))(this);
		}

	};
