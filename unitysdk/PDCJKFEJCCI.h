#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMDMCCENAPE;

#define PDCJKFEJCCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x20938BC0)

inline static constexpr unsigned int PDCJKFEJCCI_TypeDefinitionIndex = 44948;

	class PDCJKFEJCCI : public ::System::Object
	{
	public:
		static ::KMDMCCENAPE** StaticGet_CEFJFLMFIPA()
		{
			return (::KMDMCCENAPE**)UnitySDK::FromName("", "PDCJKFEJCCI")->GetStaticField(0x10B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDCJKFEJCCI_CCTOR_OFFSET))();
		}

	};
