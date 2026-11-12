#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LILGFFJBNEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABB970)

inline static constexpr unsigned int LILGFFJBNEM_TypeDefinitionIndex = 44744;

	class LILGFFJBNEM : public ::System::Object
	{
	public:
		::System::UInt32 JFONDNKCCHC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LILGFFJBNEM_CTOR_OFFSET))(this);
		}

	};
