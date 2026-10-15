#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }

#define MIEJMBIHIMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB952AA0)
#define MIEJMBIHIMF_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0xB9529A0)
#define MIEJMBIHIMF_MMOFFFCEOIC_OFFSET UNITYSDK_OFFSET(0xB952A20)

	class MIEJMBIHIMF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEJMBIHIMF_CTOR_OFFSET))(this);
		}

		::System::Boolean MJEGFOMAOFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEJMBIHIMF_MJEGFOMAOFH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MMOFFFCEOIC()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEJMBIHIMF_MMOFFFCEOIC_OFFSET))(this);
		}

	};
