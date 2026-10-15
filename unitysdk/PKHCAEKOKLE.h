#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MusicRhythmGroupRow; }

#define PKHCAEKOKLE_AKNMPKDGMNC_OFFSET UNITYSDK_OFFSET(0xC2BAD00)
#define PKHCAEKOKLE_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BAC90)
#define PKHCAEKOKLE_GET_ID_OFFSET UNITYSDK_OFFSET(0xC2BAD70)
#define PKHCAEKOKLE_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC2BAD90)
#define PKHCAEKOKLE_SET_ID_OFFSET UNITYSDK_OFFSET(0xC2BAD80)
#define PKHCAEKOKLE_SET_ROW_OFFSET UNITYSDK_OFFSET(0xC2BADA0)

	class PKHCAEKOKLE : public ::System::Object
	{
	public:
		::RPG::GameCore::MusicRhythmGroupRow* _Row_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKHCAEKOKLE_CTOR_OFFSET))(this, a1);
		}

		::System::Void AKNMPKDGMNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHCAEKOKLE_AKNMPKDGMNC_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHCAEKOKLE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKHCAEKOKLE_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MusicRhythmGroupRow* get_Row()
		{
			return ((::RPG::GameCore::MusicRhythmGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHCAEKOKLE_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MusicRhythmGroupRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmGroupRow*))((::PBYTE)hIl2Cpp + PKHCAEKOKLE_SET_ROW_OFFSET))(this, a1);
		}

	};
