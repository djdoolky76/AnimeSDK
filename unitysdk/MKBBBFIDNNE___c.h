#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKBBBFIDNNE;
namespace System { class Object; }

#define MKBBBFIDNNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA50CA0)
#define MKBBBFIDNNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA50CE0)
#define MKBBBFIDNNE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA50CF0)

	class MKBBBFIDNNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKBBBFIDNNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE___C_CTOR_OFFSET))(this);
		}

		::MKBBBFIDNNE* __cctor_b__28_0()
		{
			return ((::MKBBBFIDNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBBFIDNNE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
