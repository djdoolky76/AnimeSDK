#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPNDOBPMNED;
namespace System { class Object; }

#define FPNDOBPMNED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40F5E0)
#define FPNDOBPMNED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40F620)
#define FPNDOBPMNED___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E40F630)

	class FPNDOBPMNED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPNDOBPMNED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED___C_CTOR_OFFSET))(this);
		}

		::FPNDOBPMNED* __cctor_b__23_0()
		{
			return ((::FPNDOBPMNED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNDOBPMNED___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
