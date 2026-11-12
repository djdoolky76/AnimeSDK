#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FIMPGJNMOJK;

#define FIMPGJNMOJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD0AC0)
#define FIMPGJNMOJK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DFD0AD0)
#define FIMPGJNMOJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFD0A90)

inline static constexpr unsigned int FIMPGJNMOJK_TypeDefinitionIndex = 24775;

	class FIMPGJNMOJK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PBOFFICPNBC; // 0x18
		::System::UInt32 KGAPFBKGFIO; // 0x1C
		::System::UInt32 PFDHNIJBGKO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPGJNMOJK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FIMPGJNMOJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FIMPGJNMOJK*))((::PBYTE)hIl2Cpp + FIMPGJNMOJK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FIMPGJNMOJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FIMPGJNMOJK*))((::PBYTE)hIl2Cpp + FIMPGJNMOJK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
