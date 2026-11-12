#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKNEGBCMFBE;

#define IOJNOCLDBAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD50A40)

inline static constexpr unsigned int IOJNOCLDBAK_TypeDefinitionIndex = 43523;

	class IOJNOCLDBAK : public ::System::Object
	{
	public:
		::NKNEGBCMFBE* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJNOCLDBAK_CTOR_OFFSET))(this);
		}

	};
