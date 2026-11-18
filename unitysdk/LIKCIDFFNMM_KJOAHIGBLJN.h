#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraShakes; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIKCIDFFNMM_KJOAHIGBLJN__CTOR_OFFSET UNITYSDK_OFFSET(0x16373760)

inline static constexpr unsigned int LIKCIDFFNMM_KJOAHIGBLJN_TypeDefinitionIndex = 43005;

class LIKCIDFFNMM_KJOAHIGBLJN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraShakes*>* NNGIMBAIFCF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_KJOAHIGBLJN__CTOR_OFFSET))(this);
	}
};
