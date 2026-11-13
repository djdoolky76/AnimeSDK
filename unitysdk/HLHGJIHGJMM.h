#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HLHGJIHGJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB2D90)

inline static constexpr unsigned int HLHGJIHGJMM_TypeDefinitionIndex = 44833;

	class HLHGJIHGJMM : public ::System::Object
	{
	public:
		::System::UInt32 BHDDBJBGENI; // 0x10
		::System::Int32 NMOKIHDMMNG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHGJIHGJMM_CTOR_OFFSET))(this);
		}

	};
