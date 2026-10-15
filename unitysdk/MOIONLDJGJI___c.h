#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOIONLDJGJI;
namespace System { class Object; }

#define MOIONLDJGJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAACDB0)
#define MOIONLDJGJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAACDF0)
#define MOIONLDJGJI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAACE00)

	class MOIONLDJGJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOIONLDJGJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI___C_CTOR_OFFSET))(this);
		}

		::MOIONLDJGJI* __cctor_b__33_0()
		{
			return ((::MOIONLDJGJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
