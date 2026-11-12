#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCKGBFJJFFC;
namespace System { class Object; }

#define JCKGBFJJFFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA108A0)
#define JCKGBFJJFFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA108E0)
#define JCKGBFJJFFC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA108F0)

inline static constexpr unsigned int JCKGBFJJFFC___c_TypeDefinitionIndex = 27491;

	class JCKGBFJJFFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCKGBFJJFFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC___C_CTOR_OFFSET))(this);
		}

		::JCKGBFJJFFC* __cctor_b__33_0()
		{
			return ((::JCKGBFJJFFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
