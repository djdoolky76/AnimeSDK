#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFGHGCIMKGA;
namespace System { class Object; }

#define GFGHGCIMKGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43D170)
#define GFGHGCIMKGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43D1A0)
#define GFGHGCIMKGA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E43D1B0)

inline static constexpr unsigned int GFGHGCIMKGA___c_TypeDefinitionIndex = 32667;

	class GFGHGCIMKGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFGHGCIMKGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA___C_CTOR_OFFSET))(this);
		}

		::GFGHGCIMKGA* __cctor_b__28_0()
		{
			return ((::GFGHGCIMKGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGHGCIMKGA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
