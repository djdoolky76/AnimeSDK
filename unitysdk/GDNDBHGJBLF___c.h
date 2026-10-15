#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDNDBHGJBLF;
namespace System { class Object; }

#define GDNDBHGJBLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44FFD0)
#define GDNDBHGJBLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E450010)
#define GDNDBHGJBLF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E450020)

inline static constexpr unsigned int GDNDBHGJBLF___c_TypeDefinitionIndex = 31715;

	class GDNDBHGJBLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDNDBHGJBLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF___C_CTOR_OFFSET))(this);
		}

		::GDNDBHGJBLF* __cctor_b__23_0()
		{
			return ((::GDNDBHGJBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
