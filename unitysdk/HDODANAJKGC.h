#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HDODANAJKGC;
namespace System { class String; }

#define HDODANAJKGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE97420)
#define HDODANAJKGC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE97430)
#define HDODANAJKGC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE973F0)

	class HDODANAJKGC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDODANAJKGC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HDODANAJKGC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDODANAJKGC*))((::PBYTE)hIl2Cpp + HDODANAJKGC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HDODANAJKGC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDODANAJKGC*))((::PBYTE)hIl2Cpp + HDODANAJKGC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
