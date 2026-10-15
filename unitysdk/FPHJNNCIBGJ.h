#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define FPHJNNCIBGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15919940)
#define FPHJNNCIBGJ_HDOPNKLJLBO_OFFSET UNITYSDK_OFFSET(0x15919950)

inline static constexpr unsigned int FPHJNNCIBGJ_TypeDefinitionIndex = 49517;

	class FPHJNNCIBGJ : public ::System::Attribute
	{
	public:
		::System::Type* JIPILKCKFBL; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FPHJNNCIBGJ_CTOR_OFFSET))(this, a1);
		}

		::System::Type* HDOPNKLJLBO()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHJNNCIBGJ_HDOPNKLJLBO_OFFSET))(this);
		}

	};
