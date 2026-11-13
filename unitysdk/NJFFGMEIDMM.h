#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComicDessertTutorialOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NJFFGMEIDMM;

#define NJFFGMEIDMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E754C70)
#define NJFFGMEIDMM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E754C80)
#define NJFFGMEIDMM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E754C30)

inline static constexpr unsigned int NJFFGMEIDMM_TypeDefinitionIndex = 21898;

	class NJFFGMEIDMM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* HGAIGOMOMJM; // 0x18
		::RPG::GameCore::ComicDessertTutorialOperationType PLPPPCEPBDO; // 0x20
		::System::Int32 KJNNGFJJOEN; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFFGMEIDMM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NJFFGMEIDMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJFFGMEIDMM*))((::PBYTE)hIl2Cpp + NJFFGMEIDMM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NJFFGMEIDMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJFFGMEIDMM*))((::PBYTE)hIl2Cpp + NJFFGMEIDMM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
