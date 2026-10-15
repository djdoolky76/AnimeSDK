#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PELGFJHAPJM;

#define LBMMPJAJFBH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90C810)
#define LBMMPJAJFBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90C880)
#define LBMMPJAJFBH_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C90C780)
#define LBMMPJAJFBH_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C90C7D0)

inline static constexpr unsigned int LBMMPJAJFBH_TypeDefinitionIndex = 43264;

	class LBMMPJAJFBH : public ::System::Object
	{
	public:
		::PELGFJHAPJM* MJIKMIOPCCM; // 0x10
		::UnityEngine::Vector3 DEFPBKMIAAJ; // 0x18
		::System::Boolean CMNINAHLHIK; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single IBKFEHNBIFF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMMPJAJFBH_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMMPJAJFBH_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMMPJAJFBH_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMMPJAJFBH_CLEAR_OFFSET))(this);
		}

	};
