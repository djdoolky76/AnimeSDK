#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntitySkills; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIILFPLEBHA_JBPMOAAEBPC__CTOR_OFFSET UNITYSDK_OFFSET(0xE09E0B0)

inline static constexpr unsigned int NIILFPLEBHA_JBPMOAAEBPC_TypeDefinitionIndex = 79070;

class NIILFPLEBHA_JBPMOAAEBPC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySkills*>* LDNNIPEPBNC; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIILFPLEBHA_JBPMOAAEBPC__CTOR_OFFSET))(this);
	}
};
