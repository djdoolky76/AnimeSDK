#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class ABJMPKENACD;
class BFIJBKIECJF;
namespace System::Threading { class CancellationTokenSource; }

#define ABJMPKENACD_JILOILOBIDN_ANAJHCHCICB_OFFSET UNITYSDK_OFFSET(0x11B8B2E0)
#define ABJMPKENACD_JILOILOBIDN__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8B2D0)

inline static constexpr unsigned int ABJMPKENACD_JILOILOBIDN_TypeDefinitionIndex = 88614;

class ABJMPKENACD_JILOILOBIDN : public ::System::Object
{
public:
	::ABJMPKENACD* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationTokenSource* KHGFAKJKDGG; // 0x18
	::System::Int32 NPAKMAGBOCH; // 0x20
	::System::UInt32 DEFAKCIAKLG; // 0x24
	::System::Boolean NELCEOFGEFI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JILOILOBIDN__CTOR_OFFSET))(this);
	}

	::System::Void ANAJHCHCICB(::System::ValueTuple_2<::System::Boolean, ::BFIJBKIECJF*> DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::BFIJBKIECJF*>))((::PBYTE)hIl2Cpp + ABJMPKENACD_JILOILOBIDN_ANAJHCHCICB_OFFSET))(this, DJCNCELJPOM);
	}
};
