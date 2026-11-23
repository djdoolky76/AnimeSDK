#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B2E969227C390F44_A2D4924157FEAC88_OFFSET UNITYSDK_OFFSET(0x3D621F0)
#define B2E969227C390F44_AA41588074A88E20_OFFSET UNITYSDK_OFFSET(0x3D62320)
#define B2E969227C390F44_BEFE9ABE8A9C785A_OFFSET UNITYSDK_OFFSET(0x3D621E0)
#define B2E969227C390F44_E0EBD3A56B3179EB_OFFSET UNITYSDK_OFFSET(0x3D62240)
#define B2E969227C390F44_E109375EFB10FD3C_OFFSET UNITYSDK_OFFSET(0x3D62290)
#define B2E969227C390F44_FCD0E53150114774_OFFSET UNITYSDK_OFFSET(0x3D62140)
#define B2E969227C390F44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D62450)
#define B2E969227C390F44__CTOR_OFFSET UNITYSDK_OFFSET(0x3D624D0)

inline static constexpr unsigned int B2E969227C390F44_TypeDefinitionIndex = 11008;

class B2E969227C390F44 : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* E3F10B066DCA0196; // 0x10
	::System::String* F9B243282DA46E23; // 0x18
	::System::Int32 AC93E9A65B51AFA1; // 0x20

	::System::Void AA41588074A88E20(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + B2E969227C390F44_AA41588074A88E20_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2E969227C390F44__CTOR_OFFSET))(this);
	}

	::System::Void FCD0E53150114774()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2E969227C390F44_FCD0E53150114774_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* F9B243282DA46E23)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B2E969227C390F44__CTOR_1_OFFSET))(this, F9B243282DA46E23);
	}

	::System::Object* E109375EFB10FD3C()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + B2E969227C390F44_E109375EFB10FD3C_OFFSET))(this);
	}

	::System::Object* E0EBD3A56B3179EB()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + B2E969227C390F44_E0EBD3A56B3179EB_OFFSET))(this);
	}

	::System::Boolean BEFE9ABE8A9C785A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B2E969227C390F44_BEFE9ABE8A9C785A_OFFSET))(this);
	}

	::System::Object* A2D4924157FEAC88()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + B2E969227C390F44_A2D4924157FEAC88_OFFSET))(this);
	}
};
