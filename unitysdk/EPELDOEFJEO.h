#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEEDINKCEHF;
namespace RPG::Client { class ExpeditionBattleBuff; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPELDOEFJEO_CTOR_OFFSET UNITYSDK_OFFSET(0x155D2530)
#define EPELDOEFJEO_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0x155D2520)
#define EPELDOEFJEO_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0x155D25B0)

	class EPELDOEFJEO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleBuff*>* _Buffs_k__BackingField; // 0x10
		::NEEDINKCEHF* LEMBDFBOFLG; // 0x18
		::System::Void _ctor(::NEEDINKCEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEEDINKCEHF*))((::PBYTE)hIl2Cpp + EPELDOEFJEO_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleBuff*>* get_Buffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleBuff*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPELDOEFJEO_GET_BUFFS_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleBuff* GKKDODPDBLA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleBuff*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPELDOEFJEO_GKKDODPDBLA_OFFSET))(this, a1);
		}

	};
