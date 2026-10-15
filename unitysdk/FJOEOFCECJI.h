#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FJOEOFCECJI;

#define FJOEOFCECJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFC940)
#define FJOEOFCECJI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDFC950)
#define FJOEOFCECJI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDFC910)

	class FJOEOFCECJI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOEOFCECJI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FJOEOFCECJI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FJOEOFCECJI*))((::PBYTE)hIl2Cpp + FJOEOFCECJI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FJOEOFCECJI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FJOEOFCECJI*))((::PBYTE)hIl2Cpp + FJOEOFCECJI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
