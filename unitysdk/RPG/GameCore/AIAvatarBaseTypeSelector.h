#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIAvatarBaseTypeSelector; }

#define RPG_GAMECORE_AIAVATARBASETYPESELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D337950)
#define RPG_GAMECORE_AIAVATARBASETYPESELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D337960)
#define RPG_GAMECORE_AIAVATARBASETYPESELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D337910)

namespace RPG::GameCore
{
	class AIAvatarBaseTypeSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BaseTypeList; // 0x10
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x18
		::System::Boolean InverseResultFlag; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIAVATARBASETYPESELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIAvatarBaseTypeSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIAvatarBaseTypeSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIAVATARBASETYPESELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIAvatarBaseTypeSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIAvatarBaseTypeSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIAVATARBASETYPESELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
