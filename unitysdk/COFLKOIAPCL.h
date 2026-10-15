#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGLJNOJMKBF;
namespace RPG::GameCore { class FiveDimSuiyangConfig; }

#define COFLKOIAPCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E4E60)

inline static constexpr unsigned int COFLKOIAPCL_TypeDefinitionIndex = 43408;

	class COFLKOIAPCL : public ::System::Object
	{
	public:
		::OGLJNOJMKBF* MEPFOEEGBEA; // 0x10
		::RPG::GameCore::FiveDimSuiyangConfig* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFLKOIAPCL_CTOR_OFFSET))(this);
		}

	};
