#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCDHCHIECKF;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define AIFOMGNDPGA_GIGBDKHNEOC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x12CF9980)
#define AIFOMGNDPGA_GIGBDKHNEOC__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF9970)

inline static constexpr unsigned int AIFOMGNDPGA_GIGBDKHNEOC_TypeDefinitionIndex = 47269;

class AIFOMGNDPGA_GIGBDKHNEOC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::LCDHCHIECKF*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_GIGBDKHNEOC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::LCDHCHIECKF* DBMAPOKBCPO)
	{
		return ((::System::Void(*)(::PVOID, ::LCDHCHIECKF*))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_GIGBDKHNEOC_OKKMJKOAIKG_OFFSET))(this, DBMAPOKBCPO);
	}
};
