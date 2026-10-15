#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAENHKENJHK;
namespace System { class Object; }

#define DAENHKENJHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14E550)
#define DAENHKENJHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14E590)
#define DAENHKENJHK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E14E5A0)

inline static constexpr unsigned int DAENHKENJHK___c_TypeDefinitionIndex = 32969;

	class DAENHKENJHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x243E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAENHKENJHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK___C_CTOR_OFFSET))(this);
		}

		::DAENHKENJHK* __cctor_b__23_0()
		{
			return ((::DAENHKENJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
