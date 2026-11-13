#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"

#define OKEBJKOBBEK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E075860)
#define OKEBJKOBBEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0758B0)

inline static constexpr unsigned int OKEBJKOBBEK_TypeDefinitionIndex = 43989;

	class OKEBJKOBBEK : public ::System::Object
	{
	public:
		::System::UInt32 ONOGIODHCEC; // 0x10
		::System::UInt32 CEJEOLOFOBL; // 0x14
		::System::UInt32 JCJGJBLENCP; // 0x18
		::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x1C
		::System::UInt32 JBHIKEHKLLI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBJKOBBEK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBJKOBBEK_CLEAR_OFFSET))(this);
		}

	};
