#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGGPKPPBGFP;
namespace System { class Object; }

#define HGGPKPPBGFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57A880)
#define HGGPKPPBGFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57A8B0)
#define HGGPKPPBGFP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E57A8C0)

inline static constexpr unsigned int HGGPKPPBGFP___c_TypeDefinitionIndex = 33650;

	class HGGPKPPBGFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGGPKPPBGFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGPKPPBGFP___C_CTOR_OFFSET))(this);
		}

		::HGGPKPPBGFP* __cctor_b__23_0()
		{
			return ((::HGGPKPPBGFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGPKPPBGFP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
