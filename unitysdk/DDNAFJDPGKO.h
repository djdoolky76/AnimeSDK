#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class SetLoopRewindSnapSection; }
namespace RPG::GameCore { class TaskContext; }

#define DDNAFJDPGKO_CDKIDBFHNPL_OFFSET UNITYSDK_OFFSET(0xE4E8360)
#define DDNAFJDPGKO_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E7D90)
#define DDNAFJDPGKO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4E7E80)
#define DDNAFJDPGKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4E7FF0)
#define DDNAFJDPGKO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE4E8230)
#define DDNAFJDPGKO_TICK_OFFSET UNITYSDK_OFFSET(0xE4E8300)

inline static constexpr unsigned int DDNAFJDPGKO_TypeDefinitionIndex = 53390;

	class DDNAFJDPGKO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetLoopRewindSnapSection* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::EntityTimeRewindComponent* GLBECKBELNK; // 0x20
		::KFELGAIGHAP* EBOEKBPIJPI; // 0x28
		::KFELGAIGHAP* GKEPNAPPHOG; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLoopRewindSnapSection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLoopRewindSnapSection*))((::PBYTE)hIl2Cpp + DDNAFJDPGKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNAFJDPGKO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNAFJDPGKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNAFJDPGKO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDNAFJDPGKO_TICK_OFFSET))(this, a1);
		}

		::System::Void CDKIDBFHNPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNAFJDPGKO_CDKIDBFHNPL_OFFSET))(this);
		}

	};
