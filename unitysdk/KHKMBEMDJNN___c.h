#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHKMBEMDJNN;
namespace System { class Object; }

#define KHKMBEMDJNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81B400)
#define KHKMBEMDJNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81B440)
#define KHKMBEMDJNN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E81B450)

inline static constexpr unsigned int KHKMBEMDJNN___c_TypeDefinitionIndex = 34486;

	class KHKMBEMDJNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x165C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKMBEMDJNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN___C_CTOR_OFFSET))(this);
		}

		::KHKMBEMDJNN* __cctor_b__28_0()
		{
			return ((::KHKMBEMDJNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
