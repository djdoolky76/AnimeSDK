#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Animator; }

#define FEDPEIGDAGH_BCMGABCMHAJ_OFFSET UNITYSDK_OFFSET(0x169CC6C0)
#define FEDPEIGDAGH_CGPCJEJPHDK_OFFSET UNITYSDK_OFFSET(0x169CC2D0)
#define FEDPEIGDAGH_FOHCHEBOHIP_OFFSET UNITYSDK_OFFSET(0x169CC600)
#define FEDPEIGDAGH_KJDKFEIHEDM_OFFSET UNITYSDK_OFFSET(0x169CC8F0)
#define FEDPEIGDAGH_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x169CB710)
#define FEDPEIGDAGH_MGKHFLPACAO_OFFSET UNITYSDK_OFFSET(0x169CBE90)
#define FEDPEIGDAGH_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x169CC350)
#define FEDPEIGDAGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x169CC5B0)
#define FEDPEIGDAGH__CTOR_OFFSET UNITYSDK_OFFSET(0x169CC5A0)

inline static constexpr unsigned int FEDPEIGDAGH_TypeDefinitionIndex = 72707;

class FEDPEIGDAGH : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_GPPGLIGDPMK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FEDPEIGDAGH_TypeDefinitionIndex)->GetStaticField(0x11870);
	}
	static ::System::Int32* StaticGet_EMBBKFNJAFE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FEDPEIGDAGH_TypeDefinitionIndex)->GetStaticField(0x11874);
	}
	// static const ::System::Int32 JKNLGNGDOEH = 0x1; // 0x0
	// static const ::System::Int32 AAEKINFJJBC = 0x2; // 0x0
	// static const ::System::Int32 CFIBOPAKGMJ = 0x3; // 0x0
	// static const ::System::String* EFAIHJCEDKI; // 0x0
	// static const ::System::Int32 MIIGKAPCNLH = 0xA; // 0x0
	::MoleMole::EntityHandle FKJMFKLANPO; // 0x10
	::System::Threading::CancellationTokenSource* IBCLGFGGMLH; // 0x20
	::UnityEngine::Animator* PDPCKDIMLIL; // 0x28
	::System::Int32 NABAJJPDLOI; // 0x30
	::System::Boolean DAPAIBHIJDF; // 0x34
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 BPABEFPJLKO; // 0x38
	::UnityEngine::Vector3 EDEFLFIKNFK; // 0x44
	::System::Int32 HJDPJDGMEBL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEIGDAGH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEDPEIGDAGH__CCTOR_OFFSET))();
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEIGDAGH_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEIGDAGH_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void MGKHFLPACAO(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FEDPEIGDAGH_MGKHFLPACAO_OFFSET))(this, JMDHBJMNBCP);
	}

	::System::Boolean FOHCHEBOHIP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEIGDAGH_FOHCHEBOHIP_OFFSET))(this);
	}

	::System::Int32 BCMGABCMHAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEIGDAGH_BCMGABCMHAJ_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CGPCJEJPHDK(::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FEDPEIGDAGH_CGPCJEJPHDK_OFFSET))(this, AMIDHEAIANO);
	}

	::System::Boolean KJDKFEIHEDM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEIGDAGH_KJDKFEIHEDM_OFFSET))(this);
	}
};
