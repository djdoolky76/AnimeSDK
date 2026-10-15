#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGCLPNOGKLH_AOKHHBGBEKE_OFFSET UNITYSDK_OFFSET(0xB688B10)
#define LGCLPNOGKLH_BIOEADFFMEG_OFFSET UNITYSDK_OFFSET(0xB688DD0)
#define LGCLPNOGKLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB689180)
#define LGCLPNOGKLH_GPGEGELMLOB_OFFSET UNITYSDK_OFFSET(0xB688EE0)
#define LGCLPNOGKLH_HCEDAJEPBAE_OFFSET UNITYSDK_OFFSET(0xB688BB0)
#define LGCLPNOGKLH_IFOAKOOPGOE_OFFSET UNITYSDK_OFFSET(0xB688B60)
#define LGCLPNOGKLH_LCDNFHIPGFA_OFFSET UNITYSDK_OFFSET(0xB689130)
#define LGCLPNOGKLH_PFJDPKMFNOI_OFFSET UNITYSDK_OFFSET(0xB688F80)

inline static constexpr unsigned int LGCLPNOGKLH_TypeDefinitionIndex = 68255;

	class LGCLPNOGKLH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCLPNOGKLH_CTOR_OFFSET))(this);
		}

		::System::UInt32 AOKHHBGBEKE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCLPNOGKLH_AOKHHBGBEKE_OFFSET))(this);
		}

		::System::UInt32 IFOAKOOPGOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCLPNOGKLH_IFOAKOOPGOE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* HCEDAJEPBAE()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCLPNOGKLH_HCEDAJEPBAE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* BIOEADFFMEG()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCLPNOGKLH_BIOEADFFMEG_OFFSET))(this);
		}

		::RPG::Client::QuestData* GPGEGELMLOB(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGCLPNOGKLH_GPGEGELMLOB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* PFJDPKMFNOI(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LGCLPNOGKLH_PFJDPKMFNOI_OFFSET))(this, a1);
		}

		::System::UInt32 LCDNFHIPGFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCLPNOGKLH_LCDNFHIPGFA_OFFSET))(this);
		}

	};
