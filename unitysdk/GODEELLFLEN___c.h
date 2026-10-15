#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GODEELLFLEN;
namespace System { class Object; }

#define GODEELLFLEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0750)
#define GODEELLFLEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0790)
#define GODEELLFLEN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4C07A0)

inline static constexpr unsigned int GODEELLFLEN___c_TypeDefinitionIndex = 28753;

	class GODEELLFLEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GODEELLFLEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN___C_CTOR_OFFSET))(this);
		}

		::GODEELLFLEN* __cctor_b__28_0()
		{
			return ((::GODEELLFLEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
