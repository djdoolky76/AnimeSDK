#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFJKOCDOAEH;
namespace System { class Object; }

#define HFJKOCDOAEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56D7B0)
#define HFJKOCDOAEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56D7F0)
#define HFJKOCDOAEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E56D800)

	class HFJKOCDOAEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJKOCDOAEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH___C_CTOR_OFFSET))(this);
		}

		::HFJKOCDOAEH* __cctor_b__28_0()
		{
			return ((::HFJKOCDOAEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKOCDOAEH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
