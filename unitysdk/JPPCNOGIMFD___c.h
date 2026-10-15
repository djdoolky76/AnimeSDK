#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPPCNOGIMFD;
namespace System { class Object; }

#define JPPCNOGIMFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DC030)
#define JPPCNOGIMFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DC070)
#define JPPCNOGIMFD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7DC080)

	class JPPCNOGIMFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPPCNOGIMFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCNOGIMFD___C_CTOR_OFFSET))(this);
		}

		::JPPCNOGIMFD* __cctor_b__23_0()
		{
			return ((::JPPCNOGIMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCNOGIMFD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
