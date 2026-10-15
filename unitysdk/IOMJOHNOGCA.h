#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class MethodInfo; }

#define IOMJOHNOGCA_KGBKNGDFABK_OFFSET UNITYSDK_OFFSET(0x16512DC0)

	class IOMJOHNOGCA : public ::System::Object
	{
	public:
		static ::System::Boolean KGBKNGDFABK(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IOMJOHNOGCA_KGBKNGDFABK_OFFSET))(a1);
		}

	};
