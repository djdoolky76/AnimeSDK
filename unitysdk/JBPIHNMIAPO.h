#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class JBPIHNMIAPO;
namespace RPG::GameCore { class OrbitMoveRange; }
namespace System { class String; }

#define JBPIHNMIAPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0153A0)
#define JBPIHNMIAPO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D015250)

inline static constexpr unsigned int JBPIHNMIAPO_TypeDefinitionIndex = 22870;

	class JBPIHNMIAPO : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OrbitMoveRange*>* FBGMBABKNNN; // 0x10
		::System::String* PODFJDMHFMK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPIHNMIAPO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JBPIHNMIAPO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JBPIHNMIAPO*))((::PBYTE)hIl2Cpp + JBPIHNMIAPO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
