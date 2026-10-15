#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DPEODBDLBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x11FFB190)

	class DPEODBDLBPP : public ::System::Object
	{
	public:
		::System::Int32 IIICODKNEAI; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPEODBDLBPP_CTOR_OFFSET))(this, a1);
		}

	};
