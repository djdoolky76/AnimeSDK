#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABEBEOKFKFF;
namespace System { class Object; }

#define ABEBEOKFKFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC98C0)
#define ABEBEOKFKFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC9900)
#define ABEBEOKFKFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDC9910)

	class ABEBEOKFKFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABEBEOKFKFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF___C_CTOR_OFFSET))(this);
		}

		::ABEBEOKFKFF* __cctor_b__28_0()
		{
			return ((::ABEBEOKFKFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBEOKFKFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
