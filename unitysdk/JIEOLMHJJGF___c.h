#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIEOLMHJJGF;
namespace System { class Object; }

#define JIEOLMHJJGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74BFF0)
#define JIEOLMHJJGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74C030)
#define JIEOLMHJJGF___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E74C040)

	class JIEOLMHJJGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIEOLMHJJGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEOLMHJJGF___C_CTOR_OFFSET))(this);
		}

		::JIEOLMHJJGF* __cctor_b__48_0()
		{
			return ((::JIEOLMHJJGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEOLMHJJGF___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
