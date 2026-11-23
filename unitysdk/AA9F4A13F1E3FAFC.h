#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AA9F4A13F1E3FAFC_AC479A93F5DCCC50_OFFSET UNITYSDK_OFFSET(0x3CE5860)
#define AA9F4A13F1E3FAFC_BEDED6D1D340DD4D_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AA9F4A13F1E3FAFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CE5870)

inline static constexpr unsigned int AA9F4A13F1E3FAFC_TypeDefinitionIndex = 10728;

class AA9F4A13F1E3FAFC : public ::System::Object
{
public:
	static ::System::String** StaticGet_EBA7C9D6D3DAA1BA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AA9F4A13F1E3FAFC_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_F5CBE7EB69A2B20C()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AA9F4A13F1E3FAFC_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_AB510A0EDD531CCE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AA9F4A13F1E3FAFC_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AA9F4A13F1E3FAFC__CCTOR_OFFSET))();
	}

	static ::System::Void BEDED6D1D340DD4D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AA9F4A13F1E3FAFC_BEDED6D1D340DD4D_OFFSET))();
	}

	static ::System::Boolean AC479A93F5DCCC50(::System::String* A62D195D50DE9CF1, ::System::Boolean& E49488F70FBF39F0)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + AA9F4A13F1E3FAFC_AC479A93F5DCCC50_OFFSET))(A62D195D50DE9CF1, E49488F70FBF39F0);
	}
};
