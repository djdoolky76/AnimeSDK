#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGGPGICGHCL.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NBLICBHDAFM;
namespace System { class String; }

#define NBLICBHDAFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F0900)
#define NBLICBHDAFM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1F0910)
#define NBLICBHDAFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1F08D0)

	class NBLICBHDAFM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x20
		::HGGPGICGHCL MMNJODIJPOE; // 0x24
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
