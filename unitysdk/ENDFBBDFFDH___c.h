#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENDFBBDFFDH;
namespace System { class Object; }

#define ENDFBBDFFDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EA3E0)
#define ENDFBBDFFDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EA420)
#define ENDFBBDFFDH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2EA430)

inline static constexpr unsigned int ENDFBBDFFDH___c_TypeDefinitionIndex = 29459;

	class ENDFBBDFFDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x543C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENDFBBDFFDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDFBBDFFDH___C_CTOR_OFFSET))(this);
		}

		::ENDFBBDFFDH* __cctor_b__18_0()
		{
			return ((::ENDFBBDFFDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDFBBDFFDH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
