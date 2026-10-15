#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MADBGHENHAF_CTOR_OFFSET UNITYSDK_OFFSET(0xB842A10)
#define MADBGHENHAF_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xB842D70)
#define MADBGHENHAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB842F50)
#define MADBGHENHAF_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0xB842BD0)

	class MADBGHENHAF : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelNavmapConfig* MJBCOBFDODD; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* LFNAGEKFDAP; // 0x18
		::System::Int32 KFLLNFLBIFC; // 0x20
		::System::Void _ctor(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MADBGHENHAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MOKNCFJICIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBGHENHAF_MOKNCFJICIC_OFFSET))(this);
		}

		::System::Void DHFBDMHFNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBGHENHAF_DHFBDMHFNIK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBGHENHAF_DISPOSE_OFFSET))(this);
		}

	};
