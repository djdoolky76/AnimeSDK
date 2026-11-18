#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IJAHMEOOKHA_BKHPLLOHFCI_OFFSET UNITYSDK_OFFSET(0x141EFAD0)
#define IJAHMEOOKHA__CTOR_OFFSET UNITYSDK_OFFSET(0x141EFAC0)

inline static constexpr unsigned int IJAHMEOOKHA_TypeDefinitionIndex = 70239;

class IJAHMEOOKHA : public ::System::Object
{
public:
	// static const ::System::String* AIPMHFEMDIJ; // 0x0
	// static const ::System::Int32 NOCMOBEIGIB = 0x7; // 0x0
	// static const ::System::Int32 FOBJCOEDHGP = 0x8; // 0x0
	// static const ::System::Int32 JMAMNKECHEJ = 0x1; // 0x0
	// static const ::System::Int32 OBNIOHDPCGF = 0x2; // 0x0
	// static const ::System::Int32 HMLGCGNCFPB = 0x3; // 0x0
	// static const ::System::Int32 MEEDINLCPCO = 0x1; // 0x0
	// static const ::System::Single EPCIHPECNEK; // 0x0
	// static const ::System::Int32 DECLGPIGCMC = 0xC488; // 0x0
	// static const ::System::Int32 LJGABABNLJM = 0x1053C3; // 0x0
	// static const ::System::Int32 FCGAPMFAMMK = 0xC49A; // 0x0
	// static const ::System::Single AKGLPMGOMMH; // 0x0
	// static const ::System::Int32 AFMOKAKGJAI = 0x7; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAHMEOOKHA__CTOR_OFFSET))(this);
	}

	static ::System::Single BKHPLLOHFCI(::System::Single IECIIKCEAIE)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + IJAHMEOOKHA_BKHPLLOHFCI_OFFSET))(IECIIKCEAIE);
	}
};
