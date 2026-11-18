#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NBHIKILOKMK_GIKMLPGGDFD;
namespace MoleMole::Config { class ConfigRealtimeQTE; }

#define NBHIKILOKMK_GIKMLPGGDFD_NFBGDFGCBDA_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0xE5681B0)
#define NBHIKILOKMK_GIKMLPGGDFD_NFBGDFGCBDA__CTOR_OFFSET UNITYSDK_OFFSET(0xE5681A0)

inline static constexpr unsigned int NBHIKILOKMK_GIKMLPGGDFD_NFBGDFGCBDA_TypeDefinitionIndex = 80328;

class NBHIKILOKMK_GIKMLPGGDFD_NFBGDFGCBDA : public ::System::Object
{
public:
	::NBHIKILOKMK_GIKMLPGGDFD* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_GIKMLPGGDFD_NFBGDFGCBDA__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigRealtimeQTE* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*))((::PBYTE)hIl2Cpp + NBHIKILOKMK_GIKMLPGGDFD_NFBGDFGCBDA_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
