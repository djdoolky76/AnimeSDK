#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class HILBLEPGKKJ;
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace System { class String; }

#define HILBLEPGKKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE816C0)
#define HILBLEPGKKJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE81510)

inline static constexpr unsigned int HILBLEPGKKJ_TypeDefinitionIndex = 16870;

	class HILBLEPGKKJ : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* NEGLMLIAPBI; // 0x10
		::System::String* LIHGDFGCPIC; // 0x18
		::System::Int32 APAKCBFMCAB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILBLEPGKKJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HILBLEPGKKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HILBLEPGKKJ*))((::PBYTE)hIl2Cpp + HILBLEPGKKJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
