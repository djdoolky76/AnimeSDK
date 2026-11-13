#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLHPJCKDEDI;
namespace System { class Object; }

#define PLHPJCKDEDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4AEE00)
#define PLHPJCKDEDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4AEE40)
#define PLHPJCKDEDI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F4AEE50)

inline static constexpr unsigned int PLHPJCKDEDI___c_TypeDefinitionIndex = 29335;

	class PLHPJCKDEDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHPJCKDEDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI___C_CTOR_OFFSET))(this);
		}

		::PLHPJCKDEDI* __cctor_b__18_0()
		{
			return ((::PLHPJCKDEDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
