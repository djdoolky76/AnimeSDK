#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GODICBHGGJP_CMDDHOADMFL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PNIDGEPGDHI.h"
namespace RPG::GameCore { class ClockParkStoryAnimState; }
namespace Spine::Unity { class SkeletonGraphic; }

#define GODICBHGGJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2A780)
#define GODICBHGGJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B2AA80)
#define GODICBHGGJP_IGBCDBGDKGL_OFFSET UNITYSDK_OFFSET(0x15B2A960)
#define GODICBHGGJP_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x15B2A7F0)
#define GODICBHGGJP_JJLNLPFBOPK_OFFSET UNITYSDK_OFFSET(0x15B2AAD0)
#define GODICBHGGJP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15B2A790)

	class GODICBHGGJP : public ::System::Object
	{
	public:
		::Spine::Unity::SkeletonGraphic* PMJCJFGNLCN; // 0x10
		::RPG::GameCore::ClockParkStoryAnimState* LJCLINDGLLH; // 0x18
		::GODICBHGGJP_CMDDHOADMFL JJBOPOPCOCH; // 0x20
		::System::Void _ctor(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + GODICBHGGJP_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::ClockParkStoryAnimState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkStoryAnimState*))((::PBYTE)hIl2Cpp + GODICBHGGJP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JDAGFHEPMHF(::RPG::GameCore::ClockParkStoryAnimState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkStoryAnimState*))((::PBYTE)hIl2Cpp + GODICBHGGJP_JDAGFHEPMHF_OFFSET))(this, a1);
		}

		::System::Void IGBCDBGDKGL(::RPG::GameCore::ClockParkStoryAnimState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkStoryAnimState*))((::PBYTE)hIl2Cpp + GODICBHGGJP_IGBCDBGDKGL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODICBHGGJP_DISPOSE_OFFSET))(this);
		}

		::PNIDGEPGDHI JJLNLPFBOPK()
		{
			return ((::PNIDGEPGDHI(*)(::PVOID))((::PBYTE)hIl2Cpp + GODICBHGGJP_JJLNLPFBOPK_OFFSET))(this);
		}

	};
