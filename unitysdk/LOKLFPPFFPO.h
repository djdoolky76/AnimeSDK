#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFNAFKBHBN.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"

class JKPCKCFIMLD;
namespace System { class String; }

#define LOKLFPPFFPO_AFFOGOKNNEP_OFFSET UNITYSDK_OFFSET(0x6C94F0)
#define LOKLFPPFFPO_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define LOKLFPPFFPO_ICCNFLNILGE_OFFSET UNITYSDK_OFFSET(0x6C93D0)
#define LOKLFPPFFPO_OAHPPGCJFMJ_OFFSET UNITYSDK_OFFSET(0x6C9540)
#define LOKLFPPFFPO_OMGANDFCCFG_OFFSET UNITYSDK_OFFSET(0x6C9350)
#define LOKLFPPFFPO_PCKFLDDKBCM_OFFSET UNITYSDK_OFFSET(0x6C93E0)
#define LOKLFPPFFPO__CTOR_OFFSET UNITYSDK_OFFSET(0x6C9300)

inline static constexpr unsigned int LOKLFPPFFPO_TypeDefinitionIndex = 41681;

struct alignas(8) LOKLFPPFFPO
{
	::System::Int32 OBABMNIHJHM; // 0x10
	::System::Byte _padding0[0x4];
	::JKPCKCFIMLD* PPEBGAODMIB; // 0x18

	::System::Void _ctor(::System::Int32 JIAEKEBCEKJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOKLFPPFFPO__CTOR_OFFSET))(this, JIAEKEBCEKJ);
	}

	::BNFNAFKBHBN get_IconType()
	{
		return ((::BNFNAFKBHBN(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKLFPPFFPO_GET_ICONTYPE_OFFSET))(this);
	}

	::Foundation::AssetPath OMGANDFCCFG()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKLFPPFFPO_OMGANDFCCFG_OFFSET))(this);
	}

	::System::String* ICCNFLNILGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKLFPPFFPO_ICCNFLNILGE_OFFSET))(this);
	}

	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> PCKFLDDKBCM()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKLFPPFFPO_PCKFLDDKBCM_OFFSET))(this);
	}

	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> AFFOGOKNNEP()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKLFPPFFPO_AFFOGOKNNEP_OFFSET))(this);
	}

	::System::Int32 OAHPPGCJFMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKLFPPFFPO_OAHPPGCJFMJ_OFFSET))(this);
	}
};
