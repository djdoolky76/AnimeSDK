#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BODEMOLDHAA;
namespace System { class Object; }

#define BODEMOLDHAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E039820)
#define BODEMOLDHAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E039860)
#define BODEMOLDHAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E039870)

	class BODEMOLDHAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BODEMOLDHAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEMOLDHAA___C_CTOR_OFFSET))(this);
		}

		::BODEMOLDHAA* __cctor_b__23_0()
		{
			return ((::BODEMOLDHAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEMOLDHAA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
