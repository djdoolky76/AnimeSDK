#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RPGProfilerMarker; }

#define MLGEAFKKJFN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9ADE00)

inline static constexpr unsigned int MLGEAFKKJFN_TypeDefinitionIndex = 50016;

	class MLGEAFKKJFN : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_OFBKLIODDCP()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MLGEAFKKJFN")->GetStaticField(0xAC70);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_GOCKNOPAEAN()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MLGEAFKKJFN")->GetStaticField(0xAC78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLGEAFKKJFN_CCTOR_OFFSET))();
		}

	};
