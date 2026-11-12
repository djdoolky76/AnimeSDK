#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGCPHKDKNGP.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CMICAJFDMPG_CTOR_OFFSET UNITYSDK_OFFSET(0xE373BD0)

inline static constexpr unsigned int CMICAJFDMPG_TypeDefinitionIndex = 79834;

	class CMICAJFDMPG : public ::System::Object
	{
	public:
		::System::String* JDLFLDDEKNN; // 0x10
		::System::UInt32 MIOBMOCCOHF; // 0x18
		::System::Int32 NAJNLIGMBGO; // 0x1C
		::EGCPHKDKNGP FFIBGFMPGBL; // 0x20
		::System::Int32 KFBIODICKGC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMICAJFDMPG_CTOR_OFFSET))(this);
		}

	};
