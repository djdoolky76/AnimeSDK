#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayMusicRhythmTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MFPLPKCKPGF_CTOR_OFFSET UNITYSDK_OFFSET(0x17C9C8F0)
#define MFPLPKCKPGF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C9C900)
#define MFPLPKCKPGF_GHCNAKNCFOI_OFFSET UNITYSDK_OFFSET(0x17C9CE00)
#define MFPLPKCKPGF_NPHDKJCJDCA_OFFSET UNITYSDK_OFFSET(0x17C9CA90)
#define MFPLPKCKPGF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C9C9B0)
#define MFPLPKCKPGF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C9CD50)
#define MFPLPKCKPGF_TICK_OFFSET UNITYSDK_OFFSET(0x17C9CDA0)

inline static constexpr unsigned int MFPLPKCKPGF_TypeDefinitionIndex = 54259;

	class MFPLPKCKPGF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayMusicRhythmTalk* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Boolean BHEIANKOOPN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMusicRhythmTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMusicRhythmTalk*))((::PBYTE)hIl2Cpp + MFPLPKCKPGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPLPKCKPGF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPLPKCKPGF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPLPKCKPGF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFPLPKCKPGF_TICK_OFFSET))(this, a1);
		}

		::System::Void GHCNAKNCFOI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFPLPKCKPGF_GHCNAKNCFOI_OFFSET))(this, a1);
		}

		::System::Void NPHDKJCJDCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPLPKCKPGF_NPHDKJCJDCA_OFFSET))(this);
		}

	};
