#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OCCNBEACINI;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define OCCNBEACINI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D251010)
#define OCCNBEACINI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D251020)
#define OCCNBEACINI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D250FE0)

	class OCCNBEACINI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* KKJHBCAHFAO; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OFJMFAAEMAD; // 0x20
		::System::Boolean FKDDKHGMEAM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCNBEACINI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OCCNBEACINI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OCCNBEACINI*))((::PBYTE)hIl2Cpp + OCCNBEACINI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OCCNBEACINI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OCCNBEACINI*))((::PBYTE)hIl2Cpp + OCCNBEACINI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
