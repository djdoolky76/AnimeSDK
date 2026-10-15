#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
class EGKICDECDMA;
class GGJFAFONDHN;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define EGKICDECDMA_BGBONPKMMDG_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1451CEC0)
#define EGKICDECDMA_BGBONPKMMDG_CPHBJJMCHPC_OFFSET UNITYSDK_OFFSET(0x1451CD40)
#define EGKICDECDMA_BGBONPKMMDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1451DB30)

inline static constexpr unsigned int EGKICDECDMA_BGBONPKMMDG_TypeDefinitionIndex = 49454;

	class EGKICDECDMA_BGBONPKMMDG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::EGKICDECDMA*>* PLPNIKALEBA; // 0x10
		::System::Int32 GLLLIKDBLCL; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGKICDECDMA_BGBONPKMMDG_CTOR_OFFSET))(this, a1);
		}

		::EGKICDECDMA* CPHBJJMCHPC(::RPG::GameCore::EnviromentControlPriority a1, ::GGJFAFONDHN* a2)
		{
			return ((::EGKICDECDMA*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EGKICDECDMA_BGBONPKMMDG_CPHBJJMCHPC_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH(::EGKICDECDMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGKICDECDMA*))((::PBYTE)hIl2Cpp + EGKICDECDMA_BGBONPKMMDG_ABKBOGIGAEH_OFFSET))(this, a1);
		}

	};
