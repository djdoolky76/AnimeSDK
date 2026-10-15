#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GODICBHGGJP_CMDDHOADMFL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PNIDGEPGDHI.h"
namespace RPG::GameCore { class ClockParkStoryAnimState; }
namespace Spine::Unity { class SkeletonGraphic; }

#define GODICBHGGJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1ED90)
#define GODICBHGGJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B1F090)
#define GODICBHGGJP_IGBCDBGDKGL_OFFSET UNITYSDK_OFFSET(0x15B1EF70)
#define GODICBHGGJP_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x15B1EE00)
#define GODICBHGGJP_JJLNLPFBOPK_OFFSET UNITYSDK_OFFSET(0x15B1F0E0)
#define GODICBHGGJP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15B1EDA0)

inline static constexpr unsigned int GODICBHGGJP_TypeDefinitionIndex = 60282;

	class GODICBHGGJP : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkStoryAnimState* LJCLINDGLLH; // 0x10
		::GODICBHGGJP_CMDDHOADMFL JJBOPOPCOCH; // 0x18
		::Spine::Unity::SkeletonGraphic* PMJCJFGNLCN; // 0x28
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
