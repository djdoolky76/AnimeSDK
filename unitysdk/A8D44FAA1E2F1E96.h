#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B78B7B52011909F4/E74714A5745D452C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRFeatureDescriptor.h"

class EFDFD8D59E1B8215;
namespace E7F9C9491EE9F059 { class E497C885EE8CCBB1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem::XR { class XRDeviceDescriptor; }

#define A8D44FAA1E2F1E96_B60635BB56AD5787_OFFSET UNITYSDK_OFFSET(0x3FDBA20)
#define A8D44FAA1E2F1E96_BC35714C74B0EC0C_OFFSET UNITYSDK_OFFSET(0x3FDC210)
#define A8D44FAA1E2F1E96_E6C46E41A7141A9D_OFFSET UNITYSDK_OFFSET(0x3FDBC80)
#define A8D44FAA1E2F1E96_E7843131868BF39F_OFFSET UNITYSDK_OFFSET(0x3FDBC50)
#define A8D44FAA1E2F1E96_E967A759CE88E3C4_OFFSET UNITYSDK_OFFSET(0x3FDBAE0)
#define A8D44FAA1E2F1E96_F75915BFEAA33331_OFFSET UNITYSDK_OFFSET(0x3FDA5B0)
#define A8D44FAA1E2F1E96_FBCCD2E5F124BECF_OFFSET UNITYSDK_OFFSET(0x3FDB7F0)
#define A8D44FAA1E2F1E96_FDD9A7F271C07C44_OFFSET UNITYSDK_OFFSET(0x3FDB9E0)
#define A8D44FAA1E2F1E96__CCTOR_OFFSET UNITYSDK_OFFSET(0x3FDC380)
#define A8D44FAA1E2F1E96__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8D44FAA1E2F1E96_TypeDefinitionIndex = 14414;

class A8D44FAA1E2F1E96 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_A841C8DAFF0DFDE2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A8D44FAA1E2F1E96_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::B78B7B52011909F4::E74714A5745D452C>** StaticGet_B10160F1D199B91A()
	{
		return (::Il2CppArray<::B78B7B52011909F4::E74714A5745D452C>**)Il2CppClass::FromTypeDefinitionIndex(A8D44FAA1E2F1E96_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::String* EDE3E299E0C6E290; // 0x10
	::System::String* E474DA38AF99F86C; // 0x18
	::UnityEngine::InputSystem::XR::XRDeviceDescriptor* E3E06922737CCF04; // 0x20

	static ::System::String* BC35714C74B0EC0C(::System::String* F04B0AB19820A7CA, ::System::Boolean E1660EC4804B5AA1)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96_BC35714C74B0EC0C_OFFSET))(F04B0AB19820A7CA, E1660EC4804B5AA1);
	}

	::System::Boolean E967A759CE88E3C4(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* A43ADE7B7E275637, ::System::Int32 B11388950C465AE2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*, ::System::Int32))((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96_E967A759CE88E3C4_OFFSET))(this, A43ADE7B7E275637, B11388950C465AE2);
	}

	::System::Boolean E7843131868BF39F(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96_E7843131868BF39F_OFFSET))(this, F79B4D487F303AB2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96__CCTOR_OFFSET))();
	}

	static ::System::String* E6C46E41A7141A9D(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& A90E48A7BCFA135B, ::System::String* ABCD5D394A792652, ::E7F9C9491EE9F059::E497C885EE8CCBB1* BFF5D359B061ABA2)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::System::String*, ::E7F9C9491EE9F059::E497C885EE8CCBB1*))((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96_E6C46E41A7141A9D_OFFSET))(A90E48A7BCFA135B, ABCD5D394A792652, BFF5D359B061ABA2);
	}

	::EFDFD8D59E1B8215* F75915BFEAA33331()
	{
		return ((::EFDFD8D59E1B8215*(*)(::PVOID))((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96_F75915BFEAA33331_OFFSET))(this);
	}

	static ::System::UInt32 B60635BB56AD5787(::UnityEngine::InputSystem::XR::XRFeatureDescriptor E3BD9EF4FC1B77D4)
	{
		return ((::System::UInt32(*)(::UnityEngine::InputSystem::XR::XRFeatureDescriptor))((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96_B60635BB56AD5787_OFFSET))(E3BD9EF4FC1B77D4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96__CTOR_OFFSET))(this);
	}

	static ::System::String* FBCCD2E5F124BECF(::EFDFD8D59E1B8215* E85EF8FE2FFE77D8, ::System::String* ACB9B66507D83C5D)
	{
		return ((::System::String*(*)(::EFDFD8D59E1B8215*, ::System::String*))((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96_FBCCD2E5F124BECF_OFFSET))(E85EF8FE2FFE77D8, ACB9B66507D83C5D);
	}

	::System::String* FDD9A7F271C07C44(::System::String* F79B4D487F303AB2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A8D44FAA1E2F1E96_FDD9A7F271C07C44_OFFSET))(this, F79B4D487F303AB2);
	}
};
