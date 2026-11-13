#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define MIEJMBIHIMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A38C590)
#define MIEJMBIHIMF_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0x1A38C490)
#define MIEJMBIHIMF_MMOFFFCEOIC_OFFSET UNITYSDK_OFFSET(0x1A38C510)

inline static constexpr unsigned int MIEJMBIHIMF_TypeDefinitionIndex = 64923;

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

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* MMOFFFCEOIC()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEJMBIHIMF_MMOFFFCEOIC_OFFSET))(this);
		}

	};
