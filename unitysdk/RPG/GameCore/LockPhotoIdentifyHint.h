#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockPhotoIdentifyHint; }

#define RPG_GAMECORE_LOCKPHOTOIDENTIFYHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F075F60)
#define RPG_GAMECORE_LOCKPHOTOIDENTIFYHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F075F70)
#define RPG_GAMECORE_LOCKPHOTOIDENTIFYHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F075EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockPhotoIdentifyHint_TypeDefinitionIndex = 22047;

	class LockPhotoIdentifyHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPHOTOIDENTIFYHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockPhotoIdentifyHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockPhotoIdentifyHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPHOTOIDENTIFYHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockPhotoIdentifyHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockPhotoIdentifyHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPHOTOIDENTIFYHINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
