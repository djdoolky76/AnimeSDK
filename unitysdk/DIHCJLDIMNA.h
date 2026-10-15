#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMABCOBMACM.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class DIHCJLDIMNA;
class FCOEMCEDLNL;
namespace System { class Object; }
namespace System { class String; }

#define DIHCJLDIMNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD267E0)
#define DIHCJLDIMNA_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1CD269A0)
#define DIHCJLDIMNA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD267F0)
#define DIHCJLDIMNA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD267B0)

	class DIHCJLDIMNA : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x20
		::CMABCOBMACM PICEOEEKCIN; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHCJLDIMNA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DIHCJLDIMNA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DIHCJLDIMNA*))((::PBYTE)hIl2Cpp + DIHCJLDIMNA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DIHCJLDIMNA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DIHCJLDIMNA*))((::PBYTE)hIl2Cpp + DIHCJLDIMNA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHCJLDIMNA_GETDYNAMICKEY_OFFSET))(this);
		}

	};
