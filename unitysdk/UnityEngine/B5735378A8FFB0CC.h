#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_B5735378A8FFB0CC_B7CD1D461F0ACFBB_OFFSET UNITYSDK_OFFSET(0x416A8E0)
#define UNITYENGINE_B5735378A8FFB0CC_FD5640EBFF06E04F_OFFSET UNITYSDK_OFFSET(0x416A8D0)
#define UNITYENGINE_B5735378A8FFB0CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int B5735378A8FFB0CC_TypeDefinitionIndex = 17498;

	class B5735378A8FFB0CC : public ::System::Object
	{
	public:
		::System::Boolean FD5640EBFF06E04F(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_B5735378A8FFB0CC_FD5640EBFF06E04F_OFFSET))(this, EFF983A80A48BB2A);
		}

		::System::String* B7CD1D461F0ACFBB(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_B5735378A8FFB0CC_B7CD1D461F0ACFBB_OFFSET))(this, EFF983A80A48BB2A);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B5735378A8FFB0CC__CTOR_OFFSET))(this);
		}
	};
}
