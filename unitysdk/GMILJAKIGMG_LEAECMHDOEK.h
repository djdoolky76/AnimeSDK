#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCIMMDDIFBJ;
namespace System { class String; }

#define GMILJAKIGMG_LEAECMHDOEK_OFGAJKPGBON_OFFSET UNITYSDK_OFFSET(0x15F2EFF0)
#define GMILJAKIGMG_LEAECMHDOEK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2EFE0)

inline static constexpr unsigned int GMILJAKIGMG_LEAECMHDOEK_TypeDefinitionIndex = 81091;

class GMILJAKIGMG_LEAECMHDOEK : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10
	::GCIMMDDIFBJ* BKOLCDPOJAL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMILJAKIGMG_LEAECMHDOEK__CTOR_OFFSET))(this);
	}

	::System::Void OFGAJKPGBON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMILJAKIGMG_LEAECMHDOEK_OFGAJKPGBON_OFFSET))(this);
	}
};
