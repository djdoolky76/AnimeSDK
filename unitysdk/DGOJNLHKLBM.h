#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class DGOJNLHKLBM;
class FCOEMCEDLNL;
namespace System { class String; }

#define DGOJNLHKLBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E7570)
#define DGOJNLHKLBM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7E7400)

inline static constexpr unsigned int DGOJNLHKLBM_TypeDefinitionIndex = 13796;

	class DGOJNLHKLBM : public ::System::Object
	{
	public:
		::System::String* MCGFDDANMOD; // 0x10
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOJNLHKLBM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DGOJNLHKLBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DGOJNLHKLBM*))((::PBYTE)hIl2Cpp + DGOJNLHKLBM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
