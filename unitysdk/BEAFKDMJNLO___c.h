#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEAFKDMJNLO;
namespace System { class Object; }

#define BEAFKDMJNLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E921130)
#define BEAFKDMJNLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E921170)
#define BEAFKDMJNLO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E921180)

	class BEAFKDMJNLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEAFKDMJNLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO___C_CTOR_OFFSET))(this);
		}

		::BEAFKDMJNLO* __cctor_b__28_0()
		{
			return ((::BEAFKDMJNLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAFKDMJNLO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
