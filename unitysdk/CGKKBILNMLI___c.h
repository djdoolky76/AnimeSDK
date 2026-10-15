#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGKKBILNMLI;
namespace System { class Object; }

#define CGKKBILNMLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B1290)
#define CGKKBILNMLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B12D0)
#define CGKKBILNMLI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E0B12E0)

	class CGKKBILNMLI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGKKBILNMLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI___C_CTOR_OFFSET))(this);
		}

		::CGKKBILNMLI* __cctor_b__43_0()
		{
			return ((::CGKKBILNMLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKKBILNMLI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
