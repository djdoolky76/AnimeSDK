#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraCutscenes; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIKCIDFFNMM_BHKPAPCFIHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60D560)

inline static constexpr unsigned int LIKCIDFFNMM_BHKPAPCFIHG_TypeDefinitionIndex = 43009;

class LIKCIDFFNMM_BHKPAPCFIHG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutscenes*>* JCPCGNHBOCF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BHKPAPCFIHG__CTOR_OFFSET))(this);
	}
};
