#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float3.h"

#define FC63FD2C3BD859AF_F7FA2496E826DC58_OFFSET UNITYSDK_OFFSET(0x404A520)

inline static constexpr unsigned int FC63FD2C3BD859AF_TypeDefinitionIndex = 20639;

class FC63FD2C3BD859AF : public ::System::Object
{
public:
	static ::Unity::Mathematics::float3 F7FA2496E826DC58(::Unity::Mathematics::float3 B5459FABA90E20BD, ::Unity::Mathematics::float3 B35BBBE7E39341A2, ::Unity::Mathematics::float3 AE40CAA6BBFEAD2C, ::System::Single& EDC45201ED4A6582)
	{
		return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::System::Single&))((::PBYTE)hIl2Cpp + FC63FD2C3BD859AF_F7FA2496E826DC58_OFFSET))(B5459FABA90E20BD, B35BBBE7E39341A2, AE40CAA6BBFEAD2C, EDC45201ED4A6582);
	}
};
