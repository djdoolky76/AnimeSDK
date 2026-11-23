#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }

#define UNITYENGINE_AF42AC03DEB84C3E_F211B6FB6F576038_OFFSET UNITYSDK_OFFSET(0x416ED50)
#define UNITYENGINE_AF42AC03DEB84C3E_FEC80AB8E5E34165_OFFSET UNITYSDK_OFFSET(0x416ECD0)
#define UNITYENGINE_AF42AC03DEB84C3E_FFCC9A083383EC30_OFFSET UNITYSDK_OFFSET(0x416ED10)
#define UNITYENGINE_AF42AC03DEB84C3E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int AF42AC03DEB84C3E_TypeDefinitionIndex = 17506;

	class AF42AC03DEB84C3E : public ::System::Object
	{
	public:
		static ::System::Int32 F211B6FB6F576038(::System::Array* BFC23782BAD1518D)
		{
			return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_AF42AC03DEB84C3E_F211B6FB6F576038_OFFSET))(BFC23782BAD1518D);
		}

		static ::System::Void FFCC9A083383EC30(::System::Object* B9B26B23B27A46C7, ::System::Int32 F54AF627638DE3C9)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AF42AC03DEB84C3E_FFCC9A083383EC30_OFFSET))(B9B26B23B27A46C7, F54AF627638DE3C9);
		}

		static ::System::Array* FEC80AB8E5E34165(::System::Object* B9B26B23B27A46C7)
		{
			return ((::System::Array*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AF42AC03DEB84C3E_FEC80AB8E5E34165_OFFSET))(B9B26B23B27A46C7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AF42AC03DEB84C3E__CTOR_OFFSET))(this);
		}
	};
}
