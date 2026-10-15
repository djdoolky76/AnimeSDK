#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFMLOABEEIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD30350)

inline static constexpr unsigned int GFMLOABEEIP_TypeDefinitionIndex = 6548;

	class GFMLOABEEIP : public ::System::Object
	{
	public:
		static ::System::UInt64* StaticGet_KHDMOIOCMDP()
		{
			return (::System::UInt64*)UnitySDK::FromName("", "GFMLOABEEIP")->GetStaticField(0x660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLOABEEIP_CTOR_OFFSET))(this);
		}

	};
