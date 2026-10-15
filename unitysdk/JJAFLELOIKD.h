#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JJAFLELOIKD;
namespace RPG::GameCore { class TaskConfig; }

#define JJAFLELOIKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0374A0)
#define JJAFLELOIKD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0374B0)
#define JJAFLELOIKD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D037470)

inline static constexpr unsigned int JJAFLELOIKD_TypeDefinitionIndex = 10249;

	class JJAFLELOIKD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* POOLMDAHFCH; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CJALLEAFBOP; // 0x20
		::Il2CppArray<::System::UInt32>* CMNOBDCMGHE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAFLELOIKD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JJAFLELOIKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JJAFLELOIKD*))((::PBYTE)hIl2Cpp + JJAFLELOIKD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JJAFLELOIKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JJAFLELOIKD*))((::PBYTE)hIl2Cpp + JJAFLELOIKD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
