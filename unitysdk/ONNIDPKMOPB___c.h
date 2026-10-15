#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONNIDPKMOPB;
namespace System { class Object; }

#define ONNIDPKMOPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED1FD0)
#define ONNIDPKMOPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED2010)
#define ONNIDPKMOPB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DED2020)

	class ONNIDPKMOPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E2B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNIDPKMOPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB___C_CTOR_OFFSET))(this);
		}

		::ONNIDPKMOPB* __cctor_b__28_0()
		{
			return ((::ONNIDPKMOPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
