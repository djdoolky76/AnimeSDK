#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"

#define FDHGKBDKNMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x304AC90)
#define FDHGKBDKNMD_CTOR_OFFSET UNITYSDK_OFFSET(0x304AC60)
#define FDHGKBDKNMD_GET_ANCHORID_OFFSET UNITYSDK_OFFSET(0xE600)
#define FDHGKBDKNMD_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x28060)
#define FDHGKBDKNMD_GET_ISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x264F0)
#define FDHGKBDKNMD_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x304ACD0)
#define FDHGKBDKNMD_GET_ISUSED_OFFSET UNITYSDK_OFFSET(0x304ACC0)
#define FDHGKBDKNMD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x12B10)

inline static constexpr unsigned int FDHGKBDKNMD_TypeDefinitionIndex = 79802;

	struct alignas(4) FDHGKBDKNMD
	{
		::System::UInt32 _AnchorID_k__BackingField; // 0x10
		::RPG::Client::LittleGame::ComicDessert::AnchorType _Type_k__BackingField; // 0x14
		::System::Boolean _IsOccupied_k__BackingField; // 0x18
		::System::Boolean _IsLocked_k__BackingField; // 0x19
		::System::Boolean _IsUsed_k__BackingField; // 0x1A
		::System::Boolean _IsReady_k__BackingField; // 0x1B
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FDHGKBDKNMD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FDHGKBDKNMD_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 get_AnchorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHGKBDKNMD_GET_ANCHORID_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::AnchorType get_Type()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::AnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHGKBDKNMD_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsOccupied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHGKBDKNMD_GET_ISOCCUPIED_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHGKBDKNMD_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHGKBDKNMD_GET_ISUSED_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHGKBDKNMD_GET_ISREADY_OFFSET))(this);
		}

	};
