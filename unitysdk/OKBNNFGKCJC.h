#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKBNNFGKCJC_OELADBPLLEM_OFFSET UNITYSDK_OFFSET(0x11B39120)
#define OKBNNFGKCJC_PFAAKOBCPJL_OFFSET UNITYSDK_OFFSET(0x11B38F80)
#define OKBNNFGKCJC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11B391D0)
#define OKBNNFGKCJC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B38F70)

inline static constexpr unsigned int OKBNNFGKCJC_TypeDefinitionIndex = 83399;

class OKBNNFGKCJC : public ::System::Object
{
public:
	static ::OKBNNFGKCJC** StaticGet_PMKINFHDLFD()
	{
		return (::OKBNNFGKCJC**)Il2CppClass::FromTypeDefinitionIndex(OKBNNFGKCJC_TypeDefinitionIndex)->GetStaticField(0x51010);
	}
	// static const ::System::UInt16 CGICCOBHACH = 0x0; // 0x0
	// static const ::System::UInt16 ONHPCOBCDLF = 0x1; // 0x0
	// static const ::System::UInt16 JCAKELFBKBI = 0x2; // 0x0
	// static const ::System::UInt16 NAGFFMMPNPO = 0x3E9; // 0x0
	// static const ::System::UInt16 MIOGOKCKFNJ = 0x3EA; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>* PPHPFJIOJPI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Type*>* GMLNEMFFMLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBNNFGKCJC__CTOR_OFFSET))(this);
	}

	::System::Void PFAAKOBCPJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBNNFGKCJC_PFAAKOBCPJL_OFFSET))(this);
	}

	static ::OKBNNFGKCJC* OELADBPLLEM()
	{
		return ((::OKBNNFGKCJC*(*)())((::PBYTE)hIl2Cpp + OKBNNFGKCJC_OELADBPLLEM_OFFSET))();
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBNNFGKCJC_PHOADBJGFBE_OFFSET))(this);
	}
};
