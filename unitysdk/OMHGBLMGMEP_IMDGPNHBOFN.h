#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHitDatas; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMHGBLMGMEP_IMDGPNHBOFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1294C990)

inline static constexpr unsigned int OMHGBLMGMEP_IMDGPNHBOFN_TypeDefinitionIndex = 52052;

class OMHGBLMGMEP_IMDGPNHBOFN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHitDatas*>* OONFKHDDCCI; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHGBLMGMEP_IMDGPNHBOFN__CTOR_OFFSET))(this);
	}
};
