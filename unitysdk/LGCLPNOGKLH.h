#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGCLPNOGKLH_AOKHHBGBEKE_OFFSET UNITYSDK_OFFSET(0xBF255F0)
#define LGCLPNOGKLH_BIOEADFFMEG_OFFSET UNITYSDK_OFFSET(0xBF258B0)
#define LGCLPNOGKLH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF25C20)
#define LGCLPNOGKLH_GPGEGELMLOB_OFFSET UNITYSDK_OFFSET(0xBF259C0)
#define LGCLPNOGKLH_HCEDAJEPBAE_OFFSET UNITYSDK_OFFSET(0xBF25690)
#define LGCLPNOGKLH_IFOAKOOPGOE_OFFSET UNITYSDK_OFFSET(0xBF25640)
#define LGCLPNOGKLH_LCDNFHIPGFA_OFFSET UNITYSDK_OFFSET(0xBF25BD0)
#define LGCLPNOGKLH_PFJDPKMFNOI_OFFSET UNITYSDK_OFFSET(0xBF25A60)

inline static constexpr unsigned int LGCLPNOGKLH_TypeDefinitionIndex = 70201;

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
