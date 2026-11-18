#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigInLevelCustomized; }
namespace System { class Action; }

#define AEIFCGEOOKJ_HNGDGLKHONL_NLNGKDPDEFN_OFFSET UNITYSDK_OFFSET(0x12648980)
#define AEIFCGEOOKJ_HNGDGLKHONL__CTOR_OFFSET UNITYSDK_OFFSET(0x12648970)

inline static constexpr unsigned int AEIFCGEOOKJ_HNGDGLKHONL_TypeDefinitionIndex = 60406;

class AEIFCGEOOKJ_HNGDGLKHONL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIFCGEOOKJ_HNGDGLKHONL__CTOR_OFFSET))(this);
	}

	::System::Void NLNGKDPDEFN(::MoleMole::ConfigInLevelCustomized* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigInLevelCustomized*))((::PBYTE)hIl2Cpp + AEIFCGEOOKJ_HNGDGLKHONL_NLNGKDPDEFN_OFFSET))(this, DFMKILICPFB);
	}
};
