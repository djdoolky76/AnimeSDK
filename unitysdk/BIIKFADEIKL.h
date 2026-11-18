#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BIIKFADEIKL__CTOR_OFFSET UNITYSDK_OFFSET(0x14C461B0)

inline static constexpr unsigned int BIIKFADEIKL_TypeDefinitionIndex = 54695;

class BIIKFADEIKL : public ::System::Object
{
public:
	::System::String* JNAJDCADOOA; // 0x10
	::Foundation::AssetPath KNJBINHJEBK; // 0x18
	::System::String* HJMOFMLMAOE; // 0x28
	::System::Boolean FBHKEDFNGLA; // 0x30
	::System::Boolean DMBNKPNFBDC; // 0x31
	::System::Boolean PNGHDEADCOI; // 0x32
	::System::Boolean EAEGAPJGMNM; // 0x33
	::System::UInt32 DGNEFGBNKHM; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIKFADEIKL__CTOR_OFFSET))(this);
	}
};
