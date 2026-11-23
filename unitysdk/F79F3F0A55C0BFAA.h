#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F79F3F0A55C0BFAA_E3D17824AB1D819C_OFFSET UNITYSDK_OFFSET(0x3E7B1E0)
#define F79F3F0A55C0BFAA_EC10B35C2E5F2C31_OFFSET UNITYSDK_OFFSET(0x3E7B410)
#define F79F3F0A55C0BFAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F79F3F0A55C0BFAA_TypeDefinitionIndex = 14957;

class F79F3F0A55C0BFAA : public ::System::Object
{
public:
	static ::System::Boolean E3D17824AB1D819C(::PVOID F79B4D487F303AB2, ::System::UInt16 BC37316376A565D9, ::System::Int32& BA248C11A9E30057, ::System::Boolean A3C7D3632CF9D2C5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + F79F3F0A55C0BFAA_E3D17824AB1D819C_OFFSET))(F79B4D487F303AB2, BC37316376A565D9, BA248C11A9E30057, A3C7D3632CF9D2C5);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F79F3F0A55C0BFAA__CTOR_OFFSET))(this);
	}

	static ::System::String* EC10B35C2E5F2C31(::System::String* BB83557721B5F386, ::System::Int32 BC37316376A565D9, ::System::Int32 F53169E3300C680F, ::System::Boolean& A023AF7A634976EB)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + F79F3F0A55C0BFAA_EC10B35C2E5F2C31_OFFSET))(BB83557721B5F386, BC37316376A565D9, F53169E3300C680F, A023AF7A634976EB);
	}
};
