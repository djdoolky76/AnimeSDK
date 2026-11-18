#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLockTargets; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEFNKALACAL_KIOHEMMOMKN__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAED60)

inline static constexpr unsigned int GEFNKALACAL_KIOHEMMOMKN_TypeDefinitionIndex = 53700;

class GEFNKALACAL_KIOHEMMOMKN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLockTargets*>* DJLKIKEOFHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFNKALACAL_KIOHEMMOMKN__CTOR_OFFSET))(this);
	}
};
