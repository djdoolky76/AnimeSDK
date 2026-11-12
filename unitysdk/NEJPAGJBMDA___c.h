#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJPAGJBMDA;
namespace System { class Object; }

#define NEJPAGJBMDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE3AF50)
#define NEJPAGJBMDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE3AF80)
#define NEJPAGJBMDA___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1FE3AF90)

inline static constexpr unsigned int NEJPAGJBMDA___c_TypeDefinitionIndex = 34357;

	class NEJPAGJBMDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x692A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEJPAGJBMDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJPAGJBMDA___C_CTOR_OFFSET))(this);
		}

		::NEJPAGJBMDA* __cctor_b__42_0()
		{
			return ((::NEJPAGJBMDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJPAGJBMDA___C___CCTOR_B__42_0_OFFSET))(this);
		}

	};
