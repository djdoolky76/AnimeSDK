#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OCCNBEACINI;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define OCCNBEACINI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2233F0)
#define OCCNBEACINI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D223400)
#define OCCNBEACINI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2233C0)

inline static constexpr unsigned int OCCNBEACINI_TypeDefinitionIndex = 19918;

	class OCCNBEACINI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OFJMFAAEMAD; // 0x18
		::System::String* KKJHBCAHFAO; // 0x20
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
