#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKEKCKDIHLA;
namespace System { class Object; }

#define AKEKCKDIHLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F687640)
#define AKEKCKDIHLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F687670)
#define AKEKCKDIHLA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F687680)

inline static constexpr unsigned int AKEKCKDIHLA___c_TypeDefinitionIndex = 35025;

	class AKEKCKDIHLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKEKCKDIHLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEKCKDIHLA___C_CTOR_OFFSET))(this);
		}

		::AKEKCKDIHLA* __cctor_b__33_0()
		{
			return ((::AKEKCKDIHLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEKCKDIHLA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
