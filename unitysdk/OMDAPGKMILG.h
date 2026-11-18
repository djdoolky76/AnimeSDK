#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBDEMPDPCEA;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define OMDAPGKMILG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF19CF60)
#define OMDAPGKMILG_JFHOBAOPKLE_OFFSET UNITYSDK_OFFSET(0xF19D020)
#define OMDAPGKMILG__CTOR_OFFSET UNITYSDK_OFFSET(0xF19CF50)

inline static constexpr unsigned int OMDAPGKMILG_TypeDefinitionIndex = 56201;

class OMDAPGKMILG : public ::System::Object
{
public:
	::System::String* CPCLCEDGLOP; // 0x10
	::MoleMole::Battle::Entity* KMCDOPDBGEB; // 0x18
	::MBDEMPDPCEA* JCLGFJHDEAE; // 0x20
	::System::String* LEPGPGCLGKF; // 0x28
	::System::Int32 KHFIBHFMOAG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDAPGKMILG__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDAPGKMILG_DISPOSE_OFFSET))(this);
	}

	::System::Void JFHOBAOPKLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDAPGKMILG_JFHOBAOPKLE_OFFSET))(this);
	}
};
