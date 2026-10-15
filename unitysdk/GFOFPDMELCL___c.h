#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFOFPDMELCL;
namespace System { class Object; }

#define GFOFPDMELCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E475BF0)
#define GFOFPDMELCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E475C30)
#define GFOFPDMELCL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E475C40)

inline static constexpr unsigned int GFOFPDMELCL___c_TypeDefinitionIndex = 32534;

	class GFOFPDMELCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15640);
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
