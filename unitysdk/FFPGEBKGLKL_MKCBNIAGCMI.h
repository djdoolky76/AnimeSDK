#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class FFPGEBKGLKL;
namespace MoleMole::Config { class ConfigAraTrails; }

#define FFPGEBKGLKL_MKCBNIAGCMI_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x142946E0)
#define FFPGEBKGLKL_MKCBNIAGCMI__CTOR_OFFSET UNITYSDK_OFFSET(0x142946D0)

inline static constexpr unsigned int FFPGEBKGLKL_MKCBNIAGCMI_TypeDefinitionIndex = 83010;

class FFPGEBKGLKL_MKCBNIAGCMI : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::FFPGEBKGLKL* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPGEBKGLKL_MKCBNIAGCMI__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigAraTrails* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAraTrails*))((::PBYTE)hIl2Cpp + FFPGEBKGLKL_MKCBNIAGCMI_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
