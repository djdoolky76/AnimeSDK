#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPMJNCECOFE;
namespace System { class Object; }

#define LPMJNCECOFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A6BA0)
#define LPMJNCECOFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A6BE0)
#define LPMJNCECOFE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9A6BF0)

inline static constexpr unsigned int LPMJNCECOFE___c_TypeDefinitionIndex = 33494;

	class LPMJNCECOFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPMJNCECOFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMJNCECOFE___C_CTOR_OFFSET))(this);
		}

		::LPMJNCECOFE* __cctor_b__38_0()
		{
			return ((::LPMJNCECOFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMJNCECOFE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
