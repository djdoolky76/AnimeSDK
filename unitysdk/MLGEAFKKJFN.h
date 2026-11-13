#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RPGProfilerMarker; }

#define MLGEAFKKJFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B91D600)

inline static constexpr unsigned int MLGEAFKKJFN_TypeDefinitionIndex = 51064;

	class MLGEAFKKJFN : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_GOCKNOPAEAN()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MLGEAFKKJFN")->GetStaticField(0x73B50);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_OFBKLIODDCP()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MLGEAFKKJFN")->GetStaticField(0x73B58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLGEAFKKJFN_CCTOR_OFFSET))();
		}

	};
