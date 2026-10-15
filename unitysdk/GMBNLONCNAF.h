#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GMBNLONCNAF;
namespace System { class String; }

#define GMBNLONCNAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE67C40)
#define GMBNLONCNAF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE67C50)
#define GMBNLONCNAF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE67C10)

inline static constexpr unsigned int GMBNLONCNAF_TypeDefinitionIndex = 21852;

	class GMBNLONCNAF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MNDFOPKBHKP; // 0x18
		::System::UInt32 EADPJDCFCGB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBNLONCNAF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GMBNLONCNAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMBNLONCNAF*))((::PBYTE)hIl2Cpp + GMBNLONCNAF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GMBNLONCNAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMBNLONCNAF*))((::PBYTE)hIl2Cpp + GMBNLONCNAF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
