#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFFDMPOCAIP;
namespace System { class Object; }

#define GFFDMPOCAIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4680C0)
#define GFFDMPOCAIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E468100)
#define GFFDMPOCAIP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E468110)

inline static constexpr unsigned int GFFDMPOCAIP___c_TypeDefinitionIndex = 25117;

	class GFFDMPOCAIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFDMPOCAIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP___C_CTOR_OFFSET))(this);
		}

		::GFFDMPOCAIP* __cctor_b__33_0()
		{
			return ((::GFFDMPOCAIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
