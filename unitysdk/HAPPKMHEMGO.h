#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGPPAOECHHO_EEEDMPKKNHM.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class HBCHFHIEJDH;
namespace MoleMole { class UIRigidbody; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HAPPKMHEMGO_BLFOHPIHMAI_OFFSET UNITYSDK_OFFSET(0x18173BE0)
#define HAPPKMHEMGO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18170970)
#define HAPPKMHEMGO_JBEJFNNKBPD_OFFSET UNITYSDK_OFFSET(0x18173EB0)
#define HAPPKMHEMGO_JBJOKDLGPNL_OFFSET UNITYSDK_OFFSET(0x18171060)
#define HAPPKMHEMGO_JOMPCOOMIIA_OFFSET UNITYSDK_OFFSET(0x18170E50)
#define HAPPKMHEMGO_KDDBOBEPEAF_OFFSET UNITYSDK_OFFSET(0x18171720)
#define HAPPKMHEMGO_KEPOPPFDDAD_OFFSET UNITYSDK_OFFSET(0x18171340)
#define HAPPKMHEMGO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x181729C0)
#define HAPPKMHEMGO_ONCREATE_OFFSET UNITYSDK_OFFSET(0x18170800)
#define HAPPKMHEMGO__CTOR_OFFSET UNITYSDK_OFFSET(0x18170CA0)

inline static constexpr unsigned int HAPPKMHEMGO_TypeDefinitionIndex = 63319;

class HAPPKMHEMGO
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* MPDHJCIKDEJ; // 0x10
	::HBCHFHIEJDH* DCOPNAAMJGO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIRigidbody*>* FIMDPDJNGNA; // 0x20
	::AGPPAOECHHO_EEEDMPKKNHM OFAJAJOFGNC; // 0x28
	::UnityEngine::Quaternion CKLFPJOKKFC; // 0x38
	::UnityEngine::Vector2 KJLPJJPJEIE; // 0x48
	::System::Single CPHJNNDNNFE; // 0x50
	::System::Single AEIPDOADENM; // 0x54
	::System::Single HBMDKCPGAKG; // 0x58
	::System::Single JBEBIKGEAPE; // 0x5C
	::System::Single KJCOOFGGMIJ; // 0x60
	::System::Single MMDFOHGLPLC; // 0x64
	::UnityEngine::Vector2 KNNGAMNNCMO; // 0x68
	::UnityEngine::Quaternion MEHBJEDLCHK; // 0x70
	::System::Single JAOAEFCNINC; // 0x80
	::UnityEngine::Quaternion OMGHEBJDDJJ; // 0x84
	::UnityEngine::Vector2 GKEMKNKOJBJ; // 0x94
	::UnityEngine::Vector2 GBHCODBEOLB; // 0x9C
	::UnityEngine::Vector2 BHONOEFNODJ; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPPKMHEMGO__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPPKMHEMGO_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPPKMHEMGO_DISPOSE_OFFSET))(this);
	}

	::System::Void JOMPCOOMIIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPPKMHEMGO_JOMPCOOMIIA_OFFSET))(this);
	}

	::System::Void JBJOKDLGPNL(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAPPKMHEMGO_JBJOKDLGPNL_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KEPOPPFDDAD(::System::Int32 MGMDLMBEDJF, ::MoleMole::UIRigidbody* MGKPIHJJGKG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIRigidbody*))((::PBYTE)hIl2Cpp + HAPPKMHEMGO_KEPOPPFDDAD_OFFSET))(this, MGMDLMBEDJF, MGKPIHJJGKG);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAPPKMHEMGO_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JBEJFNNKBPD(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HAPPKMHEMGO_JBEJFNNKBPD_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void KDDBOBEPEAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPPKMHEMGO_KDDBOBEPEAF_OFFSET))(this);
	}

	::System::Void BLFOHPIHMAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPPKMHEMGO_BLFOHPIHMAI_OFFSET))(this);
	}
};
