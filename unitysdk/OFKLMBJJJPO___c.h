#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFKLMBJJJPO;
namespace System { class Object; }

#define OFKLMBJJJPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE49C40)
#define OFKLMBJJJPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE49C80)
#define OFKLMBJJJPO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DE49C90)

	class OFKLMBJJJPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFKLMBJJJPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO___C_CTOR_OFFSET))(this);
		}

		::OFKLMBJJJPO* __cctor_b__48_0()
		{
			return ((::OFKLMBJJJPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
