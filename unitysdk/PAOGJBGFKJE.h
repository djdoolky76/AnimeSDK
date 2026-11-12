#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFLAJBMKAAH.h"
#include "unitysdk/RPG/Client/Prop/PinballPlateState.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define PAOGJBGFKJE_CAGCHKJHMPD_OFFSET UNITYSDK_OFFSET(0xC8DCED0)
#define PAOGJBGFKJE_CEJOMKEFMHK_OFFSET UNITYSDK_OFFSET(0xC8DCA00)
#define PAOGJBGFKJE_CTOR_OFFSET UNITYSDK_OFFSET(0xC8DBDE0)
#define PAOGJBGFKJE_DDMEAKLGFCG_OFFSET UNITYSDK_OFFSET(0xC8DCFC0)
#define PAOGJBGFKJE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8DBE30)
#define PAOGJBGFKJE_EILJCLCPNDM_OFFSET UNITYSDK_OFFSET(0xC8DCF60)
#define PAOGJBGFKJE_GET_CURRENTPINBALLPLATESTATE_OFFSET UNITYSDK_OFFSET(0xC8DD020)
#define PAOGJBGFKJE_HEKBGEMOOAN_OFFSET UNITYSDK_OFFSET(0xC8DCE30)
#define PAOGJBGFKJE_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0xC8DCF20)
#define PAOGJBGFKJE_KKJDDBCOCGA_OFFSET UNITYSDK_OFFSET(0xC8DBEF0)
#define PAOGJBGFKJE_LFOMLHDHEEM_OFFSET UNITYSDK_OFFSET(0xC8DCDA0)
#define PAOGJBGFKJE_LPMCEKFGKJP_OFFSET UNITYSDK_OFFSET(0xC8DC6F0)
#define PAOGJBGFKJE_MPIHMFLCDJM_OFFSET UNITYSDK_OFFSET(0xC8DCE80)
#define PAOGJBGFKJE_NHNNADIGKNI_OFFSET UNITYSDK_OFFSET(0xC8DC470)
#define PAOGJBGFKJE_NPIAFDJCIJH_OFFSET UNITYSDK_OFFSET(0xC8DC420)
#define PAOGJBGFKJE_ODKNMNHMIEB_OFFSET UNITYSDK_OFFSET(0xC8DCBD0)
#define PAOGJBGFKJE_OOGEFEGLPAI_OFFSET UNITYSDK_OFFSET(0xC8DBE80)
#define PAOGJBGFKJE_PCLBANCLFJG_OFFSET UNITYSDK_OFFSET(0xC8DC6A0)
#define PAOGJBGFKJE_SET_CURRENTPINBALLPLATESTATE_OFFSET UNITYSDK_OFFSET(0xC8DD030)

inline static constexpr unsigned int PAOGJBGFKJE_TypeDefinitionIndex = 81498;

	class PAOGJBGFKJE : public ::EFLAJBMKAAH
	{
	public:
		::RPG::Client::Prop::PinballPlateState _CurrentPinballPlateState_k__BackingField; // 0x98
		::System::Void _ctor(::RPG::Client::Prop::PinballPuzzleItemConfig a1, ::RPG::Client::Prop::PinballPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig, ::RPG::Client::Prop::PinballPuzzleBoard*))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_DISPOSE_OFFSET))(this);
		}

		::System::Void OOGEFEGLPAI(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_OOGEFEGLPAI_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PinballPuzzleItemType NPIAFDJCIJH()
		{
			return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_NPIAFDJCIJH_OFFSET))(this);
		}

		::System::Void NHNNADIGKNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_NHNNADIGKNI_OFFSET))(this);
		}

		::System::Void CEJOMKEFMHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_CEJOMKEFMHK_OFFSET))(this);
		}

		::System::Void ODKNMNHMIEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_ODKNMNHMIEB_OFFSET))(this);
		}

		::System::Void LFOMLHDHEEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_LFOMLHDHEEM_OFFSET))(this);
		}

		::System::Void HEKBGEMOOAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_HEKBGEMOOAN_OFFSET))(this);
		}

		::System::Void MPIHMFLCDJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_MPIHMFLCDJM_OFFSET))(this);
		}

		::System::Boolean CAGCHKJHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_CAGCHKJHMPD_OFFSET))(this);
		}

		::System::Int32 PCLBANCLFJG(::RPG::Client::Prop::PinballPlateState a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_PCLBANCLFJG_OFFSET))(this, a1);
		}

		::System::Void LPMCEKFGKJP(::RPG::Client::Prop::PinballPlateState a1, ::RPG::Client::Prop::PinballPlateState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPlateState, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_LPMCEKFGKJP_OFFSET))(this, a1, a2);
		}

		::System::Void JLNIGEMKDJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_JLNIGEMKDJH_OFFSET))(this);
		}

		::System::String* EILJCLCPNDM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_EILJCLCPNDM_OFFSET))(this);
		}

		::System::Void KKJDDBCOCGA(::System::Boolean a1, ::RPG::Client::Prop::PinballPlateState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_KKJDDBCOCGA_OFFSET))(this, a1, a2);
		}

		::System::Boolean DDMEAKLGFCG(::RPG::Client::Prop::PinballPlateState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_DDMEAKLGFCG_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PinballPlateState get_CurrentPinballPlateState()
		{
			return ((::RPG::Client::Prop::PinballPlateState(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_GET_CURRENTPINBALLPLATESTATE_OFFSET))(this);
		}

		::System::Void set_CurrentPinballPlateState(::RPG::Client::Prop::PinballPlateState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPlateState))((::PBYTE)hIl2Cpp + PAOGJBGFKJE_SET_CURRENTPINBALLPLATESTATE_OFFSET))(this, a1);
		}

	};
