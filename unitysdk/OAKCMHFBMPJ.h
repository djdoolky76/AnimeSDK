#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OAKCMHFBMPJ;
namespace RPG::GameCore { class TaskConfig; }

#define OAKCMHFBMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7850)
#define OAKCMHFBMPJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5F7860)
#define OAKCMHFBMPJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5F7820)

inline static constexpr unsigned int OAKCMHFBMPJ_TypeDefinitionIndex = 21818;

	class OAKCMHFBMPJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EBLMEKGAKAD; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OMBKBICFOHC; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FPPJEOEGLHA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKCMHFBMPJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OAKCMHFBMPJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OAKCMHFBMPJ*))((::PBYTE)hIl2Cpp + OAKCMHFBMPJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OAKCMHFBMPJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OAKCMHFBMPJ*))((::PBYTE)hIl2Cpp + OAKCMHFBMPJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
