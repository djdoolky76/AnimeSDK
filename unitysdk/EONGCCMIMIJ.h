#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class EONGCCMIMIJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define EONGCCMIMIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF92FC0)
#define EONGCCMIMIJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF92FD0)
#define EONGCCMIMIJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF92F90)

inline static constexpr unsigned int EONGCCMIMIJ_TypeDefinitionIndex = 23296;

	class EONGCCMIMIJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AOCGPGMHMEP; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::String* BMALIACHMOO; // 0x28
		::RPG::MVector3 NNACFJKJOHO; // 0x30
		::System::Single IEHPFADHJFD; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONGCCMIMIJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EONGCCMIMIJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EONGCCMIMIJ*))((::PBYTE)hIl2Cpp + EONGCCMIMIJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EONGCCMIMIJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EONGCCMIMIJ*))((::PBYTE)hIl2Cpp + EONGCCMIMIJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
