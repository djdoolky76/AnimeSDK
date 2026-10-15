#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKPCDHCKHKP;
namespace System { class Object; }

#define LKPCDHCKHKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E995680)
#define LKPCDHCKHKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9956B0)
#define LKPCDHCKHKP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E9956C0)

	class LKPCDHCKHKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B2D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKPCDHCKHKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPCDHCKHKP___C_CTOR_OFFSET))(this);
		}

		::LKPCDHCKHKP* __cctor_b__48_0()
		{
			return ((::LKPCDHCKHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPCDHCKHKP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
