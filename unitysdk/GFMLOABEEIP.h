#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFMLOABEEIP_CTOR_OFFSET UNITYSDK_OFFSET(0x16F659D0)

inline static constexpr unsigned int GFMLOABEEIP_TypeDefinitionIndex = 6555;

	class GFMLOABEEIP : public ::System::Object
	{
	public:
		static ::System::UInt64* StaticGet_KHDMOIOCMDP()
		{
			return (::System::UInt64*)UnitySDK::FromName("", "GFMLOABEEIP")->GetStaticField(0x690);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLOABEEIP_CTOR_OFFSET))(this);
		}

	};
