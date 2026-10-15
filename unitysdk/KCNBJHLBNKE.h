#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEJPHKGCNBA.h"
#include "unitysdk/System/Object.h"

#define KCNBJHLBNKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB832E0)

inline static constexpr unsigned int KCNBJHLBNKE_TypeDefinitionIndex = 43046;

	class KCNBJHLBNKE : public ::System::Object
	{
	public:
		::System::UInt32 EECPBDFDNMO; // 0x10
		::System::Int32 OAADOEAOCDA; // 0x14
		::System::UInt32 FDKPCNBCGEG; // 0x18
		::System::Boolean OJFFGOICKMI; // 0x1C
		::System::Boolean JGEKAHHCCNK; // 0x1D
		::System::Byte _padding0[0x2];
		::HEJPHKGCNBA MEPFOEEGBEA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNBJHLBNKE_CTOR_OFFSET))(this);
		}

	};
