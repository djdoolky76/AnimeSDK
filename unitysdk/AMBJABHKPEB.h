#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"
class AMBJABHKPEB;
namespace UnityEngine { class RenderTexture; }

#define AMBJABHKPEB_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15576340)
#define AMBJABHKPEB_CTOR_OFFSET UNITYSDK_OFFSET(0x15575D20)
#define AMBJABHKPEB_EFBJHGDLIDD_OFFSET UNITYSDK_OFFSET(0x15576050)
#define AMBJABHKPEB_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15575D00)
#define AMBJABHKPEB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15575E00)
#define AMBJABHKPEB_KPMCKFDMANI_OFFSET UNITYSDK_OFFSET(0x155763B0)
#define AMBJABHKPEB_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15575D10)

inline static constexpr unsigned int AMBJABHKPEB_TypeDefinitionIndex = 72787;

	class AMBJABHKPEB : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* ABCJACPIIGJ; // 0x10
		::System::Int32 DOOKGCECNPB; // 0x18
		static ::AMBJABHKPEB** StaticGet__Current_k__BackingField()
		{
			return (::AMBJABHKPEB**)UnitySDK::FromName("", "AMBJABHKPEB")->GetStaticField(0x40330);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBJABHKPEB_CTOR_OFFSET))(this);
		}

		static ::AMBJABHKPEB* get_Current()
		{
			return ((::AMBJABHKPEB*(*)())((::PBYTE)hIl2Cpp + AMBJABHKPEB_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_Current(::AMBJABHKPEB* a1)
		{
			return ((::System::Void(*)(::AMBJABHKPEB*))((::PBYTE)hIl2Cpp + AMBJABHKPEB_SET_CURRENT_OFFSET))(a1);
		}

		static ::UnityEngine::RenderTexture* KPJGDHLENIP(::System::Single a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Single, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + AMBJABHKPEB_KPJGDHLENIP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EFBJHGDLIDD(::UnityEngine::RenderTexture* a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + AMBJABHKPEB_EFBJHGDLIDD_OFFSET))(a1, a2, a3);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBJABHKPEB_ABKBOGIGAEH_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* KPMCKFDMANI()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBJABHKPEB_KPMCKFDMANI_OFFSET))(this);
		}

	};
