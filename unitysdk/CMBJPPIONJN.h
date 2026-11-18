#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class IKKDCFLLIOF;
class LJEHNJKMIIF;
namespace System { class String; }

#define CMBJPPIONJN_HKPEJMCHPPI_OFFSET UNITYSDK_OFFSET(0x1326CD80)
#define CMBJPPIONJN_OKMLHGLGPJO_OFFSET UNITYSDK_OFFSET(0x1326CBB0)

inline static constexpr unsigned int CMBJPPIONJN_TypeDefinitionIndex = 82275;

class CMBJPPIONJN : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_CHJOJBADDCG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CMBJPPIONJN_TypeDefinitionIndex)->GetStaticField(0xD7D0);
	}
	// static const ::System::Int32 ICDDGOPDFEE = 0x1; // 0x0
	// static const ::System::Single CPFEAMDFMAP; // 0x0

	static ::System::Boolean OKMLHGLGPJO(::IKKDCFLLIOF* JPJMJPDLNBD, ::System::Single NHLCCIEKEPD, ::System::String* LHLLIBNIKFM)
	{
		return ((::System::Boolean(*)(::IKKDCFLLIOF*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CMBJPPIONJN_OKMLHGLGPJO_OFFSET))(JPJMJPDLNBD, NHLCCIEKEPD, LHLLIBNIKFM);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid HKPEJMCHPPI(::IKKDCFLLIOF* JPJMJPDLNBD, ::System::Single NHLCCIEKEPD, ::System::String* LHLLIBNIKFM, ::LJEHNJKMIIF* DNOHELNGGLJ)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::IKKDCFLLIOF*, ::System::Single, ::System::String*, ::LJEHNJKMIIF*))((::PBYTE)hIl2Cpp + CMBJPPIONJN_HKPEJMCHPPI_OFFSET))(JPJMJPDLNBD, NHLCCIEKEPD, LHLLIBNIKFM, DNOHELNGGLJ);
	}
};
