#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class BBLEOGDCHNN;
namespace MoleMole::Config { class ConfigEntityTimeSlows; }

#define BBLEOGDCHNN_BDLGBMGOLOE_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x14C2A910)
#define BBLEOGDCHNN_BDLGBMGOLOE__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2A900)

inline static constexpr unsigned int BBLEOGDCHNN_BDLGBMGOLOE_TypeDefinitionIndex = 87195;

class BBLEOGDCHNN_BDLGBMGOLOE : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::BBLEOGDCHNN* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLEOGDCHNN_BDLGBMGOLOE__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigEntityTimeSlows* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityTimeSlows*))((::PBYTE)hIl2Cpp + BBLEOGDCHNN_BDLGBMGOLOE_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
