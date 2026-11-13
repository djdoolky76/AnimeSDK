#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
namespace CriWare::CriMana { class Player; }

#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F45FD70)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F45FD90)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1F45FD80)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F45FDB0)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1F45FD60)
#define CRIWARE_CRIMANAMOVIEPLAYERHOLDER_START_OFFSET UNITYSDK_OFFSET(0x1F45FDA0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMoviePlayerHolder_TypeDefinitionIndex = 41110;

	class CriManaMoviePlayerHolder : public ::CriWare::CriMonoBehaviour
	{
	public:
		::CriWare::CriMana::Player* _player; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CTOR_OFFSET))(this);
		}

		::System::Void set_player(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_SET_PLAYER_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_AWAKE_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEPLAYERHOLDER_START_OFFSET))(this);
		}

	};
}
