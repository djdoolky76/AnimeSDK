#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEOCEOCDEAF;

#define CNHFDCJCFLL_CLEAR_OFFSET UNITYSDK_OFFSET(0xDA4AB90)
#define CNHFDCJCFLL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4AC30)

inline static constexpr unsigned int CNHFDCJCFLL_TypeDefinitionIndex = 56906;

	class CNHFDCJCFLL : public ::System::Object
	{
	public:
		::NEOCEOCDEAF* MGGPIHGIGPB; // 0x10
		::System::Int32 DCGDPBFBCEL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHFDCJCFLL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHFDCJCFLL_CLEAR_OFFSET))(this);
		}

	};
