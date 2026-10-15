#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayMusicRhythmTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MFPLPKCKPGF_CTOR_OFFSET UNITYSDK_OFFSET(0xB9124A0)
#define MFPLPKCKPGF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9124B0)
#define MFPLPKCKPGF_GHCNAKNCFOI_OFFSET UNITYSDK_OFFSET(0xB912990)
#define MFPLPKCKPGF_NPHDKJCJDCA_OFFSET UNITYSDK_OFFSET(0xB912640)
#define MFPLPKCKPGF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB912560)
#define MFPLPKCKPGF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9128E0)
#define MFPLPKCKPGF_TICK_OFFSET UNITYSDK_OFFSET(0xB912930)

inline static constexpr unsigned int MFPLPKCKPGF_TypeDefinitionIndex = 53098;

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
