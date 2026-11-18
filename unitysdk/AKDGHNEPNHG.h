#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKDGHNEPNHG_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x17CDB590)
#define AKDGHNEPNHG_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x17CDB600)
#define AKDGHNEPNHG_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x17CDB5A0)
#define AKDGHNEPNHG_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x17CDB580)
#define AKDGHNEPNHG_ONATTACH_OFFSET UNITYSDK_OFFSET(0x17CDB140)
#define AKDGHNEPNHG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17CDB180)
#define AKDGHNEPNHG_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17CDB4E0)
#define AKDGHNEPNHG_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x17CDB2B0)
#define AKDGHNEPNHG__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDAFA0)

inline static constexpr unsigned int AKDGHNEPNHG_TypeDefinitionIndex = 61568;

class AKDGHNEPNHG
{
public:
	::System::String* IPNBKLADHKE; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* KKFKOHDKBII; // 0x30
	::System::String* GJMAFCDPMEO; // 0x38
	::System::String* CFPNIEFOCAL; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* BIKMGJMJBMC; // 0x48
	::System::Boolean NFDIFDHJKGB; // 0x50
	::System::Boolean INFMGACCFJD; // 0x51
	::System::Byte _padding0[0x2];
	::System::Single AHFJCKFHNAM; // 0x54
	::UnityEngine::Vector3 BEINNNJIAED; // 0x58
	::System::Boolean GFAONDDPCBC; // 0x64
	::System::Boolean PDJCMKCNAAH; // 0x65
	::System::Boolean JLFDDIPLGCM; // 0x66
	::System::Boolean NNIKAMLDKPE; // 0x67
	::System::Int32 KGDOFHCMCAE; // 0x68
	::System::Int32 CFLPOHEBEID; // 0x6C
	::System::Int32 KAKNJBCBPPD; // 0x70
	::System::Int32 EGHJDILJMAO; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDGHNEPNHG__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDGHNEPNHG_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDGHNEPNHG_ONDISABLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + AKDGHNEPNHG_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDGHNEPNHG_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDGHNEPNHG_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDGHNEPNHG_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + AKDGHNEPNHG_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDGHNEPNHG_ANEOCOIFDDJ_OFFSET))(this);
	}
};
