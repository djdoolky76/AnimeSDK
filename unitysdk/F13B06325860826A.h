#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F13B06325860826A_AB8EC58AE1D7437F_OFFSET UNITYSDK_OFFSET(0x249F820)
#define F13B06325860826A_AFE3521E2A74D756_OFFSET UNITYSDK_OFFSET(0x249F9A0)
#define F13B06325860826A_B2E0B58CFD95FF6F_OFFSET UNITYSDK_OFFSET(0x249F8F0)
#define F13B06325860826A_F0D0A45FBC352BE5_OFFSET UNITYSDK_OFFSET(0x249F970)
#define F13B06325860826A_F2A667BD52274C7F_OFFSET UNITYSDK_OFFSET(0x249FA30)

inline static constexpr unsigned int F13B06325860826A_TypeDefinitionIndex = 4647;

class F13B06325860826A : public ::System::Object
{
public:
	static ::System::String* F2A667BD52274C7F(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + F13B06325860826A_F2A667BD52274C7F_OFFSET))(EFF983A80A48BB2A);
	}

	static ::System::Boolean F0D0A45FBC352BE5(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + F13B06325860826A_F0D0A45FBC352BE5_OFFSET))(EFF983A80A48BB2A);
	}

	static ::System::Void B2E0B58CFD95FF6F(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + F13B06325860826A_B2E0B58CFD95FF6F_OFFSET))(EFF983A80A48BB2A);
	}

	static ::System::String* AFE3521E2A74D756(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + F13B06325860826A_AFE3521E2A74D756_OFFSET))(EFF983A80A48BB2A);
	}

	static ::System::String* AB8EC58AE1D7437F(::System::String* B35BBBE7E39341A2, ::System::String* AE40CAA6BBFEAD2C)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + F13B06325860826A_AB8EC58AE1D7437F_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}
};
