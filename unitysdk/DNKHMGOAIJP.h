#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DNKHMGOAIJP_CTOR_OFFSET UNITYSDK_OFFSET(0x12DCD070)
#define DNKHMGOAIJP_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x12DCD090)

inline static constexpr unsigned int DNKHMGOAIJP_TypeDefinitionIndex = 60549;

	class DNKHMGOAIJP : public ::System::Object
	{
	public:
		::System::Int32 CCKPDMAHLNJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKHMGOAIJP_CTOR_OFFSET))(this);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKHMGOAIJP_KEOKEELBKHI_OFFSET))(this);
		}

	};
