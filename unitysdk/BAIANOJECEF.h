#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmSong; }
namespace System { class Object; }

#define BAIANOJECEF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E6B9E0)
#define BAIANOJECEF_EKMFCAECLHH_OFFSET UNITYSDK_OFFSET(0x15E6B570)
#define BAIANOJECEF_FLICCGEBCPG_OFFSET UNITYSDK_OFFSET(0x15E6B950)

inline static constexpr unsigned int BAIANOJECEF_TypeDefinitionIndex = 61810;

	class BAIANOJECEF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIANOJECEF_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmSong* EKMFCAECLHH(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::RPG::Client::MusicRhythmSong*(*)(::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + BAIANOJECEF_EKMFCAECLHH_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MusicRhythmSong* FLICCGEBCPG(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicRhythmSong*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BAIANOJECEF_FLICCGEBCPG_OFFSET))(a1);
		}

	};
