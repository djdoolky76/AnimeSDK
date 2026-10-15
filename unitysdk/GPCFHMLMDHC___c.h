#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPCFHMLMDHC;
namespace System { class Object; }

#define GPCFHMLMDHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F5840)
#define GPCFHMLMDHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F5880)
#define GPCFHMLMDHC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4F5890)

inline static constexpr unsigned int GPCFHMLMDHC___c_TypeDefinitionIndex = 29583;

	class GPCFHMLMDHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPCFHMLMDHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFHMLMDHC___C_CTOR_OFFSET))(this);
		}

		::GPCFHMLMDHC* __cctor_b__23_0()
		{
			return ((::GPCFHMLMDHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCFHMLMDHC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
