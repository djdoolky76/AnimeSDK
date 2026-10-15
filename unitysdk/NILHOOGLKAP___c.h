#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NILHOOGLKAP;
namespace System { class Object; }

#define NILHOOGLKAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB090E0)
#define NILHOOGLKAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB09120)
#define NILHOOGLKAP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB09130)

inline static constexpr unsigned int NILHOOGLKAP___c_TypeDefinitionIndex = 32800;

	class NILHOOGLKAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILHOOGLKAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHOOGLKAP___C_CTOR_OFFSET))(this);
		}

		::NILHOOGLKAP* __cctor_b__18_0()
		{
			return ((::NILHOOGLKAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILHOOGLKAP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
