#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIBNHPAGDOL;
namespace System { class Object; }

#define AIBNHPAGDOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205065C0)
#define AIBNHPAGDOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20506600)
#define AIBNHPAGDOL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20506610)

inline static constexpr unsigned int AIBNHPAGDOL___c_TypeDefinitionIndex = 34512;

	class AIBNHPAGDOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIBNHPAGDOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL___C_CTOR_OFFSET))(this);
		}

		::AIBNHPAGDOL* __cctor_b__28_0()
		{
			return ((::AIBNHPAGDOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
