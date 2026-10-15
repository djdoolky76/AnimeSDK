#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGNKIIOHBAI;
namespace System { class Object; }

#define NGNKIIOHBAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB167E0)
#define NGNKIIOHBAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB16820)
#define NGNKIIOHBAI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB16830)

	class NGNKIIOHBAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGNKIIOHBAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI___C_CTOR_OFFSET))(this);
		}

		::NGNKIIOHBAI* __cctor_b__33_0()
		{
			return ((::NGNKIIOHBAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
