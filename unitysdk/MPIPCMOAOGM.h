#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MPIPCMOAOGM;
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define MPIPCMOAOGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DF0C0)
#define MPIPCMOAOGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1DF100)
#define MPIPCMOAOGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1DF060)

inline static constexpr unsigned int MPIPCMOAOGM_TypeDefinitionIndex = 21068;

	class MPIPCMOAOGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::Il2CppArray<::System::UInt32>* EGGCADJJJOD; // 0x28
		::RPG::GameCore::PlayNPCBubbleTalk* AAMIHCPFPIF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIPCMOAOGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MPIPCMOAOGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPIPCMOAOGM*))((::PBYTE)hIl2Cpp + MPIPCMOAOGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MPIPCMOAOGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPIPCMOAOGM*))((::PBYTE)hIl2Cpp + MPIPCMOAOGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
