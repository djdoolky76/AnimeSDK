#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class EEAOMAIPHGE;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define EEAOMAIPHGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD440A0)
#define EEAOMAIPHGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD43F00)

inline static constexpr unsigned int EEAOMAIPHGE_TypeDefinitionIndex = 18157;

	class EEAOMAIPHGE : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GMACMKDGHPP; // 0x10
		::System::String* IFNAGLOMHBK; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NKCKAJPAJCJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAOMAIPHGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EEAOMAIPHGE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEAOMAIPHGE*))((::PBYTE)hIl2Cpp + EEAOMAIPHGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
