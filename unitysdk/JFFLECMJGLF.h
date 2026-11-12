#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFFLECMJGLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD56C50)

inline static constexpr unsigned int JFFLECMJGLF_TypeDefinitionIndex = 44863;

	class JFFLECMJGLF : public ::System::Object
	{
	public:
		::System::Int32 MEPFOEEGBEA; // 0x10
		::System::Boolean KHGIKBFDLFB; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single FIJLEDEKBJP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFLECMJGLF_CTOR_OFFSET))(this);
		}

	};
