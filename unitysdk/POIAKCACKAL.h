#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MACDMBOEGJO.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Transform; }

#define POIAKCACKAL_CCNJCNGKMOK_OFFSET UNITYSDK_OFFSET(0x1BF35F60)
#define POIAKCACKAL_IOODLNINMNA_OFFSET UNITYSDK_OFFSET(0x1BF35CF0)
#define POIAKCACKAL_JJDDGOMOALD_OFFSET UNITYSDK_OFFSET(0x1BF35E60)
#define POIAKCACKAL_LDIJHDNDHND_OFFSET UNITYSDK_OFFSET(0x1BF35ED0)
#define POIAKCACKAL_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x1BF35DF0)
#define POIAKCACKAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF35EC0)

inline static constexpr unsigned int POIAKCACKAL_TypeDefinitionIndex = 85707;

class POIAKCACKAL : public ::MACDMBOEGJO
{
public:
	::System::String* HIAIKHDFCLN; // 0x18
	::UnityEngine::Transform* DNPCBBFCMJO; // 0x20
	::System::Threading::CancellationTokenSource* JDADGJCPPDI; // 0x28
	::MoleMole::Battle::Entity* ELIJPNFENEN; // 0x30
	::System::Single DLBFEAOALML; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIAKCACKAL__CTOR_OFFSET))(this);
	}

	::System::Void IOODLNINMNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIAKCACKAL_IOODLNINMNA_OFFSET))(this);
	}

	::System::Void JJDDGOMOALD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIAKCACKAL_JJDDGOMOALD_OFFSET))(this);
	}

	::System::Void LDIJHDNDHND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIAKCACKAL_LDIJHDNDHND_OFFSET))(this);
	}

	::System::Void CCNJCNGKMOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIAKCACKAL_CCNJCNGKMOK_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid LJPJBPCIEAF()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + POIAKCACKAL_LJPJBPCIEAF_OFFSET))(this);
	}
};
