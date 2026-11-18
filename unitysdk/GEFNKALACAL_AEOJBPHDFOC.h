#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLockTargetMisc; }
namespace System { class Action; }

#define GEFNKALACAL_AEOJBPHDFOC_CKFAFJIPLNL_OFFSET UNITYSDK_OFFSET(0x189F8600)
#define GEFNKALACAL_AEOJBPHDFOC__CTOR_OFFSET UNITYSDK_OFFSET(0x189F85F0)

inline static constexpr unsigned int GEFNKALACAL_AEOJBPHDFOC_TypeDefinitionIndex = 53698;

class GEFNKALACAL_AEOJBPHDFOC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFNKALACAL_AEOJBPHDFOC__CTOR_OFFSET))(this);
	}

	::System::Void CKFAFJIPLNL(::MoleMole::Config::ConfigLockTargetMisc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLockTargetMisc*))((::PBYTE)hIl2Cpp + GEFNKALACAL_AEOJBPHDFOC_CKFAFJIPLNL_OFFSET))(this, DFMKILICPFB);
	}
};
