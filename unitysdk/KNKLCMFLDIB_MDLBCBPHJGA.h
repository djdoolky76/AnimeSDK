#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNKLCMFLDIB_MDLBCBPHJGA_CTOR_OFFSET UNITYSDK_OFFSET(0x18FAAAE0)

inline static constexpr unsigned int KNKLCMFLDIB_MDLBCBPHJGA_TypeDefinitionIndex = 81566;

	class KNKLCMFLDIB_MDLBCBPHJGA : public ::System::Object
	{
	public:
		::System::Int32 BPIALHCPOIJ; // 0x10
		::System::Int32 OLAFFLGBJEC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKLCMFLDIB_MDLBCBPHJGA_CTOR_OFFSET))(this);
		}

	};
