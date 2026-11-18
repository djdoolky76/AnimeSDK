#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

class GHLDLOHAOGM;
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKDMMHJJGOJ_COLLBMJIOKC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1ACB7090)
#define IKDMMHJJGOJ_COLLBMJIOKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB7080)

inline static constexpr unsigned int IKDMMHJJGOJ_COLLBMJIOKC_TypeDefinitionIndex = 61452;

class IKDMMHJJGOJ_COLLBMJIOKC : public ::System::Object
{
public:
	::System::String* MIGFLJIFALC; // 0x10
	::MoleMole::Config::ConfigEntityAttackProperty* LDMGKJACHAG; // 0x18
	::System::String* POJPNEAAIOI; // 0x20
	::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC; // 0x28
	::System::Int32 LJDHEKKAGFG; // 0x30
	::System::Int32 MJNHHOHGHJC; // 0x34
	::System::Int32 LALHMLLBDDG; // 0x38
	::MoleMole::Config::DamageElementType EJIIEMIHPFF; // 0x3C
	::System::UInt32 FJHKFEJAKMD; // 0x40
	::System::Int32 HIKMEBGAHHC; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDMMHJJGOJ_COLLBMJIOKC__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDMMHJJGOJ_COLLBMJIOKC_NPOLNFDBOOD_OFFSET))(this);
	}
};
