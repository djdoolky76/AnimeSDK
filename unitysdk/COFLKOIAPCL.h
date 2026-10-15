#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGLJNOJMKBF;
namespace RPG::GameCore { class FiveDimSuiyangConfig; }

#define COFLKOIAPCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13490)

	class COFLKOIAPCL : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimSuiyangConfig* EABKOHGCHFP; // 0x10
		::OGLJNOJMKBF* MEPFOEEGBEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFLKOIAPCL_CTOR_OFFSET))(this);
		}

	};
