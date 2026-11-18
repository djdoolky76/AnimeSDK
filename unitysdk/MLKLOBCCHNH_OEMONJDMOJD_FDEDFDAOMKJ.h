#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSubSystemSettingBase; }

#define MLKLOBCCHNH_OEMONJDMOJD_FDEDFDAOMKJ_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x151EB480)
#define MLKLOBCCHNH_OEMONJDMOJD_FDEDFDAOMKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x151EB470)

inline static constexpr unsigned int MLKLOBCCHNH_OEMONJDMOJD_FDEDFDAOMKJ_TypeDefinitionIndex = 55567;

class MLKLOBCCHNH_OEMONJDMOJD_FDEDFDAOMKJ : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_OEMONJDMOJD_FDEDFDAOMKJ__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigSubSystemSettingBase* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSubSystemSettingBase*))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_OEMONJDMOJD_FDEDFDAOMKJ_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
