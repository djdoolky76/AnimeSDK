#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFGMKBICKJ;
namespace System { class Object; }

#define BNFGMKBICKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E033850)
#define BNFGMKBICKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E033880)
#define BNFGMKBICKJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E033890)

	class BNFGMKBICKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFGMKBICKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ___C_CTOR_OFFSET))(this);
		}

		::BNFGMKBICKJ* __cctor_b__38_0()
		{
			return ((::BNFGMKBICKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
