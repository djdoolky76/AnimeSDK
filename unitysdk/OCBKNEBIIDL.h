#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimSurfaceConfig; }

#define OCBKNEBIIDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C97A090)

	class OCBKNEBIIDL : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimSurfaceConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBKNEBIIDL_CTOR_OFFSET))(this);
		}

	};
