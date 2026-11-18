#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class LCDHCHIECKF;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }

#define AIFOMGNDPGA_BHGLNKMBGKG_DCGHKMCPCOG_OFFSET UNITYSDK_OFFSET(0x1647D6A0)
#define AIFOMGNDPGA_BHGLNKMBGKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1647D690)

inline static constexpr unsigned int AIFOMGNDPGA_BHGLNKMBGKG_TypeDefinitionIndex = 47267;

class AIFOMGNDPGA_BHGLNKMBGKG : public ::System::Object
{
public:
	::LCDHCHIECKF* DBMAPOKBCPO; // 0x10
	::System::Action_2<::Foundation::AssetRequestHandle, ::LCDHCHIECKF*>* IBNICCGMILF; // 0x18
	::System::Boolean KOMBBDHBNCA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_BHGLNKMBGKG__CTOR_OFFSET))(this);
	}

	::System::Void DCGHKMCPCOG(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_BHGLNKMBGKG_DCGHKMCPCOG_OFFSET))(this, NGLKIKLLLFL, FCEIKAIDHPM);
	}
};
