#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraStoryDatas; }
namespace System { class Action; }

#define LIKCIDFFNMM_COOFNAEFNBM_JAHJKPLPENH_OFFSET UNITYSDK_OFFSET(0x16C59800)
#define LIKCIDFFNMM_COOFNAEFNBM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C597F0)

inline static constexpr unsigned int LIKCIDFFNMM_COOFNAEFNBM_TypeDefinitionIndex = 43006;

class LIKCIDFFNMM_COOFNAEFNBM : public ::System::Object
{
public:
	::Foundation::AssetPath JKJLFEBLCOC; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_COOFNAEFNBM__CTOR_OFFSET))(this);
	}

	::System::Void JAHJKPLPENH(::MoleMole::Config::ConfigCameraStoryDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_COOFNAEFNBM_JAHJKPLPENH_OFFSET))(this, DFMKILICPFB);
	}
};
