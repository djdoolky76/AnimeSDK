#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFOFPDMELCL;
namespace System { class Object; }

#define GFOFPDMELCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20089290)
#define GFOFPDMELCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200892D0)
#define GFOFPDMELCL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x200892E0)

inline static constexpr unsigned int GFOFPDMELCL___c_TypeDefinitionIndex = 33449;

	class GFOFPDMELCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFOFPDMELCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFPDMELCL___C_CTOR_OFFSET))(this);
		}

		::GFOFPDMELCL* __cctor_b__23_0()
		{
			return ((::GFOFPDMELCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOFPDMELCL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
