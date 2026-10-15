#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ADFHDGEHFIP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }

#define ADFHDGEHFIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC7EDE0)
#define ADFHDGEHFIP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CC7EDF0)
#define ADFHDGEHFIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC7EDB0)

inline static constexpr unsigned int ADFHDGEHFIP_TypeDefinitionIndex = 10247;

	class ADFHDGEHFIP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KEHEFLHCENE; // 0x18
		::System::Boolean DIOGHCPEMMB; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 IIAJADPLGLH; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHDGEHFIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ADFHDGEHFIP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ADFHDGEHFIP*))((::PBYTE)hIl2Cpp + ADFHDGEHFIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ADFHDGEHFIP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ADFHDGEHFIP*))((::PBYTE)hIl2Cpp + ADFHDGEHFIP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
