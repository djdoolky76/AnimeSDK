#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MACDMBOEGJO.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Transform; }

#define CAKLNODCAEP_CCNJCNGKMOK_OFFSET UNITYSDK_OFFSET(0x199EF810)
#define CAKLNODCAEP_IOODLNINMNA_OFFSET UNITYSDK_OFFSET(0x199EF5A0)
#define CAKLNODCAEP_JJDDGOMOALD_OFFSET UNITYSDK_OFFSET(0x199EF710)
#define CAKLNODCAEP_LDIJHDNDHND_OFFSET UNITYSDK_OFFSET(0x199EF780)
#define CAKLNODCAEP_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x199EF6A0)
#define CAKLNODCAEP__CTOR_OFFSET UNITYSDK_OFFSET(0x199EF770)

inline static constexpr unsigned int CAKLNODCAEP_TypeDefinitionIndex = 61627;

class CAKLNODCAEP : public ::MACDMBOEGJO
{
public:
	::MoleMole::Battle::Entity* ELIJPNFENEN; // 0x18
	::System::String* HIAIKHDFCLN; // 0x20
	::System::Threading::CancellationTokenSource* JDADGJCPPDI; // 0x28
	::UnityEngine::Transform* DNPCBBFCMJO; // 0x30
	::System::Single DLBFEAOALML; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKLNODCAEP__CTOR_OFFSET))(this);
	}

	::System::Void IOODLNINMNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKLNODCAEP_IOODLNINMNA_OFFSET))(this);
	}

	::System::Void JJDDGOMOALD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKLNODCAEP_JJDDGOMOALD_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid LJPJBPCIEAF()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKLNODCAEP_LJPJBPCIEAF_OFFSET))(this);
	}

	::System::Void LDIJHDNDHND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKLNODCAEP_LDIJHDNDHND_OFFSET))(this);
	}

	::System::Void CCNJCNGKMOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKLNODCAEP_CCNJCNGKMOK_OFFSET))(this);
	}
};
