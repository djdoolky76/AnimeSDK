#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGGPGICGHCL.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NBLICBHDAFM;
namespace System { class String; }

#define NBLICBHDAFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C2BF0)
#define NBLICBHDAFM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1C2C00)
#define NBLICBHDAFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1C2BC0)

inline static constexpr unsigned int NBLICBHDAFM_TypeDefinitionIndex = 19910;

	class NBLICBHDAFM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::HGGPGICGHCL MMNJODIJPOE; // 0x20
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBLICBHDAFM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NBLICBHDAFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBLICBHDAFM*))((::PBYTE)hIl2Cpp + NBLICBHDAFM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NBLICBHDAFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBLICBHDAFM*))((::PBYTE)hIl2Cpp + NBLICBHDAFM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
