#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGLOGMBKLF;
namespace System { class Object; }

#define BMGLOGMBKLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC75C40)
#define BMGLOGMBKLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC75C80)
#define BMGLOGMBKLF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC75C90)

inline static constexpr unsigned int BMGLOGMBKLF___c_TypeDefinitionIndex = 31868;

	class BMGLOGMBKLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x592D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGLOGMBKLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF___C_CTOR_OFFSET))(this);
		}

		::BMGLOGMBKLF* __cctor_b__28_0()
		{
			return ((::BMGLOGMBKLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGLOGMBKLF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
