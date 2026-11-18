#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOPLBDBEMNC.h"

class OFLPOCHHHLC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCIBHBEGIEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB11F50)
#define JCIBHBEGIEH_FCAFFLMEDBF_OFFSET UNITYSDK_OFFSET(0x1FB124B0)
#define JCIBHBEGIEH_FGMEMOPMEML_1_OFFSET UNITYSDK_OFFSET(0x1FB121A0)
#define JCIBHBEGIEH_FGMEMOPMEML_OFFSET UNITYSDK_OFFSET(0x1FB120A0)
#define JCIBHBEGIEH_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x1FB12020)
#define JCIBHBEGIEH_PJPFFGFNALD_OFFSET UNITYSDK_OFFSET(0x1FB122D0)
#define JCIBHBEGIEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB12000)

inline static constexpr unsigned int JCIBHBEGIEH_TypeDefinitionIndex = 29108;

class JCIBHBEGIEH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::OFLPOCHHHLC*>* INGILNKBHHK; // 0x10
	::OFLPOCHHHLC* GHLLMDNMJGC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIBHBEGIEH__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIBHBEGIEH_DISPOSE_OFFSET))(this);
	}

	::OFLPOCHHHLC* HMMOPDIPIOJ(::System::UInt64 FALJABIBPNH)
	{
		return ((::OFLPOCHHHLC*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JCIBHBEGIEH_HMMOPDIPIOJ_OFFSET))(this, FALJABIBPNH);
	}

	::System::Void FGMEMOPMEML(::System::UInt64 FALJABIBPNH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JCIBHBEGIEH_FGMEMOPMEML_OFFSET))(this, FALJABIBPNH);
	}

	::System::UInt64 PJPFFGFNALD(::KOPLBDBEMNC OBNIAHNMHPF, ::System::Int16 EOGLMAEPALE)
	{
		return ((::System::UInt64(*)(::PVOID, ::KOPLBDBEMNC, ::System::Int16))((::PBYTE)hIl2Cpp + JCIBHBEGIEH_PJPFFGFNALD_OFFSET))(this, OBNIAHNMHPF, EOGLMAEPALE);
	}

	::System::Void FCAFFLMEDBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIBHBEGIEH_FCAFFLMEDBF_OFFSET))(this);
	}

	::System::Void FGMEMOPMEML_1(::OFLPOCHHHLC* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + JCIBHBEGIEH_FGMEMOPMEML_1_OFFSET))(this, GEEHGDABNJF);
	}
};
