#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJKAGDIBGNJ;
namespace System { class Object; }

#define IJKAGDIBGNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E696930)
#define IJKAGDIBGNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E696970)
#define IJKAGDIBGNJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E696980)

inline static constexpr unsigned int IJKAGDIBGNJ___c_TypeDefinitionIndex = 26895;

	class IJKAGDIBGNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C80);
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
