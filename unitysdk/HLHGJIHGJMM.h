#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HLHGJIHGJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAECBF0)

	class HLHGJIHGJMM : public ::System::Object
	{
	public:
		::System::Int32 NMOKIHDMMNG; // 0x10
		::System::UInt32 BHDDBJBGENI; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHGJIHGJMM_CTOR_OFFSET))(this);
		}

	};
