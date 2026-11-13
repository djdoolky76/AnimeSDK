#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMOEGOMDNAA;
namespace System { class Object; }

#define HMOEGOMDNAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE24100)
#define HMOEGOMDNAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE24140)
#define HMOEGOMDNAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE24150)

inline static constexpr unsigned int HMOEGOMDNAA___c_TypeDefinitionIndex = 32508;

	class HMOEGOMDNAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ADB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMOEGOMDNAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA___C_CTOR_OFFSET))(this);
		}

		::HMOEGOMDNAA* __cctor_b__23_0()
		{
			return ((::HMOEGOMDNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
