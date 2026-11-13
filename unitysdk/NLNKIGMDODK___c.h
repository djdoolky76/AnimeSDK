#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLNKIGMDODK;
namespace System { class Object; }

#define NLNKIGMDODK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEC6150)
#define NLNKIGMDODK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEC6190)
#define NLNKIGMDODK___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1FEC61A0)

inline static constexpr unsigned int NLNKIGMDODK___c_TypeDefinitionIndex = 32982;

	class NLNKIGMDODK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLNKIGMDODK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK___C_CTOR_OFFSET))(this);
		}

		::NLNKIGMDODK* __cctor_b__58_0()
		{
			return ((::NLNKIGMDODK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
