#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDMLEELICE;
namespace System { class Object; }

#define KPDMLEELICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BB720)
#define KPDMLEELICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BB750)
#define KPDMLEELICE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8BB760)

	class KPDMLEELICE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDMLEELICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE___C_CTOR_OFFSET))(this);
		}

		::KPDMLEELICE* __cctor_b__28_0()
		{
			return ((::KPDMLEELICE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDMLEELICE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
