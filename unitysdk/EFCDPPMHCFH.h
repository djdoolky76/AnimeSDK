#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCJKEBPNIED;
class LABEGKEFBPJ;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }

#define EFCDPPMHCFH_CTOR_OFFSET UNITYSDK_OFFSET(0x13A48B90)
#define EFCDPPMHCFH_IIKPAAKCFHB_OFFSET UNITYSDK_OFFSET(0x13A48A60)
#define EFCDPPMHCFH_JHJFLCLPGNJ_OFFSET UNITYSDK_OFFSET(0x13A48260)
#define EFCDPPMHCFH_LBOLBHEJGJE_OFFSET UNITYSDK_OFFSET(0x13A480B0)
#define EFCDPPMHCFH_LIDCCEFPEPK_OFFSET UNITYSDK_OFFSET(0x13A48680)
#define EFCDPPMHCFH_NALNOKIADOB_OFFSET UNITYSDK_OFFSET(0x13A48490)
#define EFCDPPMHCFH_PODJLMDDBJB_OFFSET UNITYSDK_OFFSET(0x13A48880)

inline static constexpr unsigned int EFCDPPMHCFH_TypeDefinitionIndex = 79140;

	class EFCDPPMHCFH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCDPPMHCFH_CTOR_OFFSET))(this);
		}

		::LABEGKEFBPJ* LBOLBHEJGJE(::System::UInt32 a1)
		{
			return ((::LABEGKEFBPJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFCDPPMHCFH_LBOLBHEJGJE_OFFSET))(this, a1);
		}

		::LABEGKEFBPJ* NALNOKIADOB(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::LABEGKEFBPJ*(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + EFCDPPMHCFH_NALNOKIADOB_OFFSET))(this, a1);
		}

		::LABEGKEFBPJ* LIDCCEFPEPK(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::LABEGKEFBPJ*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EFCDPPMHCFH_LIDCCEFPEPK_OFFSET))(this, a1, a2, a3);
		}

		::LABEGKEFBPJ* PODJLMDDBJB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::LABEGKEFBPJ*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EFCDPPMHCFH_PODJLMDDBJB_OFFSET))(this, a1, a2);
		}

		static ::System::Void JHJFLCLPGNJ(::FCJKEBPNIED* a1, ::RPG::Client::ItemData* a2)
		{
			return ((::System::Void(*)(::FCJKEBPNIED*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + EFCDPPMHCFH_JHJFLCLPGNJ_OFFSET))(a1, a2);
		}

		static ::System::Void IIKPAAKCFHB(::FCJKEBPNIED* a1, ::RPG::Client::ItemData* a2)
		{
			return ((::System::Void(*)(::FCJKEBPNIED*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + EFCDPPMHCFH_IIKPAAKCFHB_OFFSET))(a1, a2);
		}

	};
