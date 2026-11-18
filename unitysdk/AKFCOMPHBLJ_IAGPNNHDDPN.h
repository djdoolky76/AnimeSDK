#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFCOMPHBLJ_GEKFIHCMGFL.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKFCOMPHBLJ_IAGPNNHDDPN_AOIMAPBDCKJ_OFFSET UNITYSDK_OFFSET(0x143B2750)
#define AKFCOMPHBLJ_IAGPNNHDDPN_BGDJENDBAOG_OFFSET UNITYSDK_OFFSET(0x143B2240)
#define AKFCOMPHBLJ_IAGPNNHDDPN_CJAMMAMBECO_OFFSET UNITYSDK_OFFSET(0x143B2760)
#define AKFCOMPHBLJ_IAGPNNHDDPN_HBEKFFANELE_OFFSET UNITYSDK_OFFSET(0x143B2180)
#define AKFCOMPHBLJ_IAGPNNHDDPN_HKLAJMDCADO_OFFSET UNITYSDK_OFFSET(0x143B25D0)
#define AKFCOMPHBLJ_IAGPNNHDDPN_JCCIBMCAGJC_OFFSET UNITYSDK_OFFSET(0x143B2730)
#define AKFCOMPHBLJ_IAGPNNHDDPN_LMJCELALLFE_OFFSET UNITYSDK_OFFSET(0x143B2740)
#define AKFCOMPHBLJ_IAGPNNHDDPN_NHKHIAGBEFH_OFFSET UNITYSDK_OFFSET(0x143B2470)
#define AKFCOMPHBLJ_IAGPNNHDDPN__CTOR_OFFSET UNITYSDK_OFFSET(0x143B2170)

inline static constexpr unsigned int AKFCOMPHBLJ_IAGPNNHDDPN_TypeDefinitionIndex = 77056;

class AKFCOMPHBLJ_IAGPNNHDDPN : public ::System::Object
{
public:
	// static const ::System::String* OKNDIEOEHJC; // 0x0
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* INKHGCNFCNI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Action_1<::System::Object*>*>* KEOAHLHJANO; // 0x18
	::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap* OKIGGACOLNC; // 0x20
	::System::Threading::CancellationToken EHOGJONFLKH; // 0x28
	::System::String* JGIKDDCPKCA; // 0x30
	::System::Boolean _BGKMLLHMFOF_k__BackingField; // 0x38
	::System::Boolean FLLIOGHGHON; // 0x39
	::System::Boolean HIAOJGMNIHH; // 0x3A
	::System::Boolean PJBPKKKLOOD; // 0x3B
	::System::Boolean FDFMLAIOGNH; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAGPNNHDDPN__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HBEKFFANELE(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAGPNNHDDPN_HBEKFFANELE_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void BGDJENDBAOG(::AKFCOMPHBLJ_GEKFIHCMGFL JLHHJFNLJDG)
	{
		return ((::System::Void(*)(::PVOID, ::AKFCOMPHBLJ_GEKFIHCMGFL))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAGPNNHDDPN_BGDJENDBAOG_OFFSET))(this, JLHHJFNLJDG);
	}

	::System::Void NHKHIAGBEFH(::System::Boolean JKLJHKIMCLD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAGPNNHDDPN_NHKHIAGBEFH_OFFSET))(this, JKLJHKIMCLD);
	}

	::AKFCOMPHBLJ_IAGPNNHDDPN* HKLAJMDCADO(::AKFCOMPHBLJ_GEKFIHCMGFL MCOHLHMKLIP, ::System::Action_1<::System::Object*>* DMPEOJCCCLO)
	{
		return ((::AKFCOMPHBLJ_IAGPNNHDDPN*(*)(::PVOID, ::AKFCOMPHBLJ_GEKFIHCMGFL, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAGPNNHDDPN_HKLAJMDCADO_OFFSET))(this, MCOHLHMKLIP, DMPEOJCCCLO);
	}

	::System::Boolean JCCIBMCAGJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAGPNNHDDPN_JCCIBMCAGJC_OFFSET))(this);
	}

	::System::Void LMJCELALLFE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAGPNNHDDPN_LMJCELALLFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AOIMAPBDCKJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAGPNNHDDPN_AOIMAPBDCKJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean CJAMMAMBECO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAGPNNHDDPN_CJAMMAMBECO_OFFSET))(this);
	}
};
