#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Threading { class CancellationTokenSource; }

#define OKDHEIAKDNF_BCMGABCMHAJ_OFFSET UNITYSDK_OFFSET(0x1368F6F0)
#define OKDHEIAKDNF_CGPCJEJPHDK_OFFSET UNITYSDK_OFFSET(0x1368F280)
#define OKDHEIAKDNF_CLCCECOCIBN_OFFSET UNITYSDK_OFFSET(0x1368F650)
#define OKDHEIAKDNF_FOHCHEBOHIP_OFFSET UNITYSDK_OFFSET(0x1368F920)
#define OKDHEIAKDNF_HJHAHIKFALF_OFFSET UNITYSDK_OFFSET(0x1368F680)
#define OKDHEIAKDNF_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1368E880)
#define OKDHEIAKDNF_MGKHFLPACAO_OFFSET UNITYSDK_OFFSET(0x1368F010)
#define OKDHEIAKDNF_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1368F300)
#define OKDHEIAKDNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1368F640)

inline static constexpr unsigned int OKDHEIAKDNF_TypeDefinitionIndex = 77350;

class OKDHEIAKDNF : public ::System::Object
{
public:
	// static const ::System::Int32 JKNLGNGDOEH = 0x1; // 0x0
	// static const ::System::Int32 AAEKINFJJBC = 0x2; // 0x0
	// static const ::System::Int32 CFIBOPAKGMJ = 0x3; // 0x0
	// static const ::System::String* EFAIHJCEDKI; // 0x0
	// static const ::System::Int32 MIIGKAPCNLH = 0xA; // 0x0
	::MoleMole::EntityHandle FKJMFKLANPO; // 0x10
	::System::Threading::CancellationTokenSource* IBCLGFGGMLH; // 0x20
	::System::Int32 HJDPJDGMEBL; // 0x28
	::UnityEngine::Vector3 EDEFLFIKNFK; // 0x2C
	::System::Int32 NABAJJPDLOI; // 0x38
	::UnityEngine::Vector3 BPABEFPJLKO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDHEIAKDNF__CTOR_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_PGHAJOMNDDJ_OFFSET))(this);
	}

	static ::System::Void MGKHFLPACAO(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_MGKHFLPACAO_OFFSET))(JMDHBJMNBCP);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CGPCJEJPHDK(::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_CGPCJEJPHDK_OFFSET))(this, AMIDHEAIANO);
	}

	::System::Boolean CLCCECOCIBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_CLCCECOCIBN_OFFSET))(this);
	}

	::System::Int32 HJHAHIKFALF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_HJHAHIKFALF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BCMGABCMHAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_BCMGABCMHAJ_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> FOHCHEBOHIP(::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_FOHCHEBOHIP_OFFSET))(this, AMIDHEAIANO);
	}
};
