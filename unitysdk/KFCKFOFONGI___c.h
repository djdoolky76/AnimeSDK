#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFCKFOFONGI;
namespace System { class Object; }

#define KFCKFOFONGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E816D40)
#define KFCKFOFONGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E816D80)
#define KFCKFOFONGI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E816D90)

inline static constexpr unsigned int KFCKFOFONGI___c_TypeDefinitionIndex = 28075;

	class KFCKFOFONGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x134B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFCKFOFONGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI___C_CTOR_OFFSET))(this);
		}

		::KFCKFOFONGI* __cctor_b__38_0()
		{
			return ((::KFCKFOFONGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
