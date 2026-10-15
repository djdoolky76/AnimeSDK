#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEKIPIJNJBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE517620)

	class DEKIPIJNJBJ : public ::System::Object
	{
	public:
		::System::Int32 IHOPFAFJPHF; // 0x10
		::System::Int32 HHFLIPIGJPB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKIPIJNJBJ_CTOR_OFFSET))(this);
		}

	};
