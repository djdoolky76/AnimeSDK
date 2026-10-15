#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLPMFNHLBED;
namespace System { class Object; }

#define JLPMFNHLBED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E787440)
#define JLPMFNHLBED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E787480)
#define JLPMFNHLBED___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E787490)

	class JLPMFNHLBED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLPMFNHLBED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPMFNHLBED___C_CTOR_OFFSET))(this);
		}

		::JLPMFNHLBED* __cctor_b__48_0()
		{
			return ((::JLPMFNHLBED*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPMFNHLBED___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
