#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class BIEHLNBOMFL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }

#define BIEHLNBOMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D807290)
#define BIEHLNBOMFL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D807140)

	class BIEHLNBOMFL : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IIDJKFFMDIC; // 0x10
		::System::UInt32 PIOBMEHHDGG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEHLNBOMFL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BIEHLNBOMFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIEHLNBOMFL*))((::PBYTE)hIl2Cpp + BIEHLNBOMFL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
