#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJKAGDIBGNJ;
namespace System { class Object; }

#define IJKAGDIBGNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F99C5F0)
#define IJKAGDIBGNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F99C630)
#define IJKAGDIBGNJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F99C640)

inline static constexpr unsigned int IJKAGDIBGNJ___c_TypeDefinitionIndex = 27426;

	class IJKAGDIBGNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKAGDIBGNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ___C_CTOR_OFFSET))(this);
		}

		::IJKAGDIBGNJ* __cctor_b__18_0()
		{
			return ((::IJKAGDIBGNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKAGDIBGNJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
