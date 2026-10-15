#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define PFCCMMPECFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AC2A0)

inline static constexpr unsigned int PFCCMMPECFF_TypeDefinitionIndex = 25018;

	class PFCCMMPECFF : public ::System::Attribute
	{
	public:
		::System::String* HFKCLICHCCL; // 0x10
		::System::String* FNBEKBHNPLB; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PFCCMMPECFF_CTOR_OFFSET))(this, a1, a2);
		}

	};
