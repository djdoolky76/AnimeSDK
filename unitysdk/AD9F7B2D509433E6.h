#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/E4659A9E78F63F4F.h"

namespace System { class String; }
namespace System { class Type; }

#define AD9F7B2D509433E6_AD1C9F4BF9F34136_OFFSET UNITYSDK_OFFSET(0x3D2E370)
#define AD9F7B2D509433E6_BA0AFB830600D2A9_OFFSET UNITYSDK_OFFSET(0x3D2E400)
#define AD9F7B2D509433E6_BA2716ADA4CE0956_OFFSET UNITYSDK_OFFSET(0x3D2E2E0)
#define AD9F7B2D509433E6_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x3D2DFB0)
#define AD9F7B2D509433E6_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3D2DF80)
#define AD9F7B2D509433E6_EB0354AC58FB077D_OFFSET UNITYSDK_OFFSET(0x3D2E1C0)
#define AD9F7B2D509433E6_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x3D2DFA0)
#define AD9F7B2D509433E6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D2E190)
#define AD9F7B2D509433E6__CTOR_OFFSET UNITYSDK_OFFSET(0x3D2E110)

inline static constexpr unsigned int AD9F7B2D509433E6_TypeDefinitionIndex = 10889;

class AD9F7B2D509433E6 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* F9BBE3E2D8075A15; // 0x10
	::Il2CppArray<::System::Object*>* AE3F89DAB6E3D10A; // 0x18
	::Il2CppArray<::System::Type*>* FCA743C26F57EBA3; // 0x20
	::System::Int32 B124533D86B2FCF0; // 0x28
	::System::Int32 ED7EEF4BB705B620; // 0x2C
	::System::Boolean EDF59E574AAD5B37; // 0x30

	::System::Type* AD1C9F4BF9F34136()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + AD9F7B2D509433E6_AD1C9F4BF9F34136_OFFSET))(this);
	}

	::System::String* BA2716ADA4CE0956()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AD9F7B2D509433E6_BA2716ADA4CE0956_OFFSET))(this);
	}

	::System::Void _ctor(::Il2CppArray<::System::String*>* A6747240D75661A3, ::Il2CppArray<::System::Object*>* B29880F033C1F232, ::Il2CppArray<::System::Type*>* ABE9D78BA6AE23BF, ::System::Int32 BF7C9BBE3A8B5691)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Type*>*, ::System::Int32))((::PBYTE)hIl2Cpp + AD9F7B2D509433E6__CTOR_OFFSET))(this, A6747240D75661A3, B29880F033C1F232, ABE9D78BA6AE23BF, BF7C9BBE3A8B5691);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD9F7B2D509433E6_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::Object* BA0AFB830600D2A9()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AD9F7B2D509433E6_BA0AFB830600D2A9_OFFSET))(this);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD9F7B2D509433E6__CTOR_1_OFFSET))(this);
	}

	::E4659A9E78F63F4F EB0354AC58FB077D()
	{
		return ((::E4659A9E78F63F4F(*)(::PVOID))((::PBYTE)hIl2Cpp + AD9F7B2D509433E6_EB0354AC58FB077D_OFFSET))(this);
	}

	::System::Object* E34B6CA02139E820()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AD9F7B2D509433E6_E34B6CA02139E820_OFFSET))(this);
	}

	::System::Boolean E6CAD58306FCDCB5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AD9F7B2D509433E6_E6CAD58306FCDCB5_OFFSET))(this);
	}
};
