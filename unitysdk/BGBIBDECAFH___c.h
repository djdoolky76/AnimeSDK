#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGBIBDECAFH;
namespace System { class Object; }

#define BGBIBDECAFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA70830)
#define BGBIBDECAFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA70860)
#define BGBIBDECAFH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA70870)

	class BGBIBDECAFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGBIBDECAFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBIBDECAFH___C_CTOR_OFFSET))(this);
		}

		::BGBIBDECAFH* __cctor_b__38_0()
		{
			return ((::BGBIBDECAFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBIBDECAFH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
