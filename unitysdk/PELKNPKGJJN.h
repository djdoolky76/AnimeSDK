#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PELKNPKGJJN;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define PELKNPKGJJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D59A0)
#define PELKNPKGJJN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2D59E0)
#define PELKNPKGJJN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2D5920)

inline static constexpr unsigned int PELKNPKGJJN_TypeDefinitionIndex = 21080;

	class PELKNPKGJJN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ABAEIEAEEAI; // 0x28
		::System::Int32 NALMBOOCCIN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELKNPKGJJN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PELKNPKGJJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PELKNPKGJJN*))((::PBYTE)hIl2Cpp + PELKNPKGJJN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PELKNPKGJJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PELKNPKGJJN*))((::PBYTE)hIl2Cpp + PELKNPKGJJN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
