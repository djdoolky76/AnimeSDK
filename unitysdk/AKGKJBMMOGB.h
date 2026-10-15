#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"
class AKGKJBMMOGB;
class FCOEMCEDLNL;

#define AKGKJBMMOGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA65D0)
#define AKGKJBMMOGB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCA6520)

inline static constexpr unsigned int AKGKJBMMOGB_TypeDefinitionIndex = 14943;

	class AKGKJBMMOGB : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournRoomType LHLKJIDFLIN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKJBMMOGB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AKGKJBMMOGB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKGKJBMMOGB*))((::PBYTE)hIl2Cpp + AKGKJBMMOGB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
