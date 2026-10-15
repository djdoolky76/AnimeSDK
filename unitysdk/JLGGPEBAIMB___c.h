#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLGGPEBAIMB;
namespace System { class Object; }

#define JLGGPEBAIMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7784E0)
#define JLGGPEBAIMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E778520)
#define JLGGPEBAIMB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E778530)

	class JLGGPEBAIMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLGGPEBAIMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGGPEBAIMB___C_CTOR_OFFSET))(this);
		}

		::JLGGPEBAIMB* __cctor_b__43_0()
		{
			return ((::JLGGPEBAIMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGGPEBAIMB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
