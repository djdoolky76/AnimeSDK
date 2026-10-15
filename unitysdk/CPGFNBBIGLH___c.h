#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPGFNBBIGLH;
namespace System { class Object; }

#define CPGFNBBIGLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13DFC0)
#define CPGFNBBIGLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13E000)
#define CPGFNBBIGLH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E13E010)

	class CPGFNBBIGLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPGFNBBIGLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH___C_CTOR_OFFSET))(this);
		}

		::CPGFNBBIGLH* __cctor_b__33_0()
		{
			return ((::CPGFNBBIGLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
