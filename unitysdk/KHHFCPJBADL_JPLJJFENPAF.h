#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUILight; }
namespace System { class Action; }

#define KHHFCPJBADL_JPLJJFENPAF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1A2CB320)
#define KHHFCPJBADL_JPLJJFENPAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CB310)

inline static constexpr unsigned int KHHFCPJBADL_JPLJJFENPAF_TypeDefinitionIndex = 81983;

class KHHFCPJBADL_JPLJJFENPAF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHFCPJBADL_JPLJJFENPAF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUILight* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUILight*))((::PBYTE)hIl2Cpp + KHHFCPJBADL_JPLJJFENPAF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
