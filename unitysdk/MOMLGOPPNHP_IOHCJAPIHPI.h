#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class EIMHGJELHGN;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOMLGOPPNHP_IOHCJAPIHPI_BMOOCPDJGKB_OFFSET UNITYSDK_OFFSET(0x18B5F630)
#define MOMLGOPPNHP_IOHCJAPIHPI__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5F620)

inline static constexpr unsigned int MOMLGOPPNHP_IOHCJAPIHPI_TypeDefinitionIndex = 50859;

class MOMLGOPPNHP_IOHCJAPIHPI : public ::System::Object
{
public:
	::System::Action_2<::System::UInt32, ::System::Boolean>* AALDMFFADIO; // 0x10
	::EIMHGJELHGN* GFPINKJPPBC; // 0x18
	::MoleMole::EntityHandle HPADNAEINPK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_IOHCJAPIHPI__CTOR_OFFSET))(this);
	}

	::System::Void BMOOCPDJGKB(::System::UInt32 JCPNDFAEOLI, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_IOHCJAPIHPI_BMOOCPDJGKB_OFFSET))(this, JCPNDFAEOLI, EBFCACIEKBC);
	}
};
