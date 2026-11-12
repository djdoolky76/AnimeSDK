#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define JMAEIEGICHJ_OFFSETTEXTUREDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA84540)

inline static constexpr unsigned int JMAEIEGICHJ_OffsetTextureData_TypeDefinitionIndex = 52931;

	class JMAEIEGICHJ_OffsetTextureData : public ::System::Object
	{
	public:
		::System::Int32 dataTableSize; // 0x10
		::System::Int32 offsetTableSize; // 0x14
		::System::Object* offsets; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_OFFSETTEXTUREDATA_CTOR_OFFSET))(this);
		}

	};
