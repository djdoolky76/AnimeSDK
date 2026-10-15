#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHINANAPELB;
namespace RPG::GameCore { class FiveDimWindowControllerComponentConfig; }

#define DBHDMHOCNLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA14110)

inline static constexpr unsigned int DBHDMHOCNLC_TypeDefinitionIndex = 43571;

	class DBHDMHOCNLC : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimWindowControllerComponentConfig* EABKOHGCHFP; // 0x10
		::MHINANAPELB* MEPFOEEGBEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHDMHOCNLC_CTOR_OFFSET))(this);
		}

	};
