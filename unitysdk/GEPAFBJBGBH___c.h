#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEPAFBJBGBH;
namespace System { class Object; }

#define GEPAFBJBGBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45EC90)
#define GEPAFBJBGBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45ECD0)
#define GEPAFBJBGBH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E45ECE0)

	class GEPAFBJBGBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEPAFBJBGBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH___C_CTOR_OFFSET))(this);
		}

		::GEPAFBJBGBH* __cctor_b__28_0()
		{
			return ((::GEPAFBJBGBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAFBJBGBH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
