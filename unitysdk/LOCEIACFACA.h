#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFJBILIBADO;
class EPELDOEFJEO;
class LBPCONKMBIK;
class MGIJEJMFIKN;
class MMJNOJDBGFL;
class MODHHPELPLO;
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleRoute; }

#define LOCEIACFACA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7EDE70)
#define LOCEIACFACA_EIKNJCGBAIK_OFFSET UNITYSDK_OFFSET(0xB7EE270)
#define LOCEIACFACA_HNFMGPFAIDK_OFFSET UNITYSDK_OFFSET(0xB7EE030)
#define LOCEIACFACA_LPDKNJKMCFO_OFFSET UNITYSDK_OFFSET(0xB7EDE90)

inline static constexpr unsigned int LOCEIACFACA_TypeDefinitionIndex = 63834;

	class LOCEIACFACA : public ::System::Object
	{
	public:
		::EPELDOEFJEO* KDOBDEMBJCE; // 0x10
		::MMJNOJDBGFL* EFKNMBPNGEA; // 0x18
		::MGIJEJMFIKN* NGKPKBEGEGG; // 0x20
		::MODHHPELPLO* MABDGPAHJCF; // 0x28
		::BFJBILIBADO* JOHBJDFMNGA; // 0x30
		::System::Void _ctor(::BFJBILIBADO* a1, ::MODHHPELPLO* a2, ::MGIJEJMFIKN* a3, ::EPELDOEFJEO* a4, ::MMJNOJDBGFL* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BFJBILIBADO*, ::MODHHPELPLO*, ::MGIJEJMFIKN*, ::EPELDOEFJEO*, ::MMJNOJDBGFL*))((::PBYTE)hIl2Cpp + LOCEIACFACA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::ExpeditionBattleMap* LPDKNJKMCFO(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOCEIACFACA_LPDKNJKMCFO_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleRoute* HNFMGPFAIDK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ExpeditionBattleRoute*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LOCEIACFACA_HNFMGPFAIDK_OFFSET))(this, a1, a2);
		}

		::LBPCONKMBIK* EIKNJCGBAIK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::LBPCONKMBIK*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LOCEIACFACA_EIKNJCGBAIK_OFFSET))(this, a1, a2);
		}

	};
