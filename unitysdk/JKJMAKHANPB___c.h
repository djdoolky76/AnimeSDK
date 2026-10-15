#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKJMAKHANPB;
namespace System { class Object; }

#define JKJMAKHANPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76D8C0)
#define JKJMAKHANPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76D900)
#define JKJMAKHANPB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E76D910)

	class JKJMAKHANPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKJMAKHANPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJMAKHANPB___C_CTOR_OFFSET))(this);
		}

		::JKJMAKHANPB* __cctor_b__23_0()
		{
			return ((::JKJMAKHANPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJMAKHANPB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
