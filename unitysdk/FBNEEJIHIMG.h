#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FBNEEJIHIMG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }

#define FBNEEJIHIMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCD480)
#define FBNEEJIHIMG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDCD490)
#define FBNEEJIHIMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDCD450)

inline static constexpr unsigned int FBNEEJIHIMG_TypeDefinitionIndex = 10201;

	class FBNEEJIHIMG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LCGICBCPMLO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNEEJIHIMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FBNEEJIHIMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FBNEEJIHIMG*))((::PBYTE)hIl2Cpp + FBNEEJIHIMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FBNEEJIHIMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FBNEEJIHIMG*))((::PBYTE)hIl2Cpp + FBNEEJIHIMG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
