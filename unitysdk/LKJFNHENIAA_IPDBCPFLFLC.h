#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNpcPrototype; }
namespace System { class Action; }

#define LKJFNHENIAA_IPDBCPFLFLC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x12A64040)
#define LKJFNHENIAA_IPDBCPFLFLC__CTOR_OFFSET UNITYSDK_OFFSET(0x12A64030)

inline static constexpr unsigned int LKJFNHENIAA_IPDBCPFLFLC_TypeDefinitionIndex = 87439;

class LKJFNHENIAA_IPDBCPFLFLC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFNHENIAA_IPDBCPFLFLC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigNpcPrototype* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNpcPrototype*))((::PBYTE)hIl2Cpp + LKJFNHENIAA_IPDBCPFLFLC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
