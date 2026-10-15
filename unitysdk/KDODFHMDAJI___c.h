#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDODFHMDAJI;
namespace System { class Object; }

#define KDODFHMDAJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DA050)
#define KDODFHMDAJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DA080)
#define KDODFHMDAJI___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E7DA090)

inline static constexpr unsigned int KDODFHMDAJI___c_TypeDefinitionIndex = 33277;

	class KDODFHMDAJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDODFHMDAJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI___C_CTOR_OFFSET))(this);
		}

		::KDODFHMDAJI* __cctor_b__48_0()
		{
			return ((::KDODFHMDAJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDODFHMDAJI___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
