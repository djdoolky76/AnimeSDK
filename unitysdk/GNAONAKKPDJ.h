#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJLKOFIFOBG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class HPCKCJDCNFM;
namespace System { class Nullable; }
namespace UnityEngine { class Transform; }

#define GNAONAKKPDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB4E80)

	class GNAONAKKPDJ : public ::System::Object
	{
	public:
		::HPCKCJDCNFM* FNPCCACIFBF; // 0x10
		::System::Nullable* FJGJDPKCKLK; // 0x18
		::System::Byte _padding0[0x10];
		::UnityEngine::Transform* HPKFMJOMHFI; // 0x30
		::UnityEngine::Vector3Int IGDPLGAGAHF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAONAKKPDJ_CTOR_OFFSET))(this);
		}

	};
