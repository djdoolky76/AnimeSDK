#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraLockTargetDatas; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIKCIDFFNMM_GEAMAPFFDFO_GLGFFLAJAFO_OFFSET UNITYSDK_OFFSET(0x16C599D0)
#define LIKCIDFFNMM_GEAMAPFFDFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16C599C0)

inline static constexpr unsigned int LIKCIDFFNMM_GEAMAPFFDFO_TypeDefinitionIndex = 43015;

class LIKCIDFFNMM_GEAMAPFFDFO : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>* AMHGBGMOMLL; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>* DJLKIKEOFHP; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_GEAMAPFFDFO__CTOR_OFFSET))(this);
	}

	::System::Void GLGFFLAJAFO(::MoleMole::Config::ConfigCameraLockTargetDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraLockTargetDatas*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_GEAMAPFFDFO_GLGFFLAJAFO_OFFSET))(this, DFMKILICPFB);
	}
};
