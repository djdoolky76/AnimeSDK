#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIFPPBCFBBC;
namespace System { class Object; }

#define IIFPPBCFBBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E689900)
#define IIFPPBCFBBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E689940)
#define IIFPPBCFBBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E689950)

	class IIFPPBCFBBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x506F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIFPPBCFBBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC___C_CTOR_OFFSET))(this);
		}

		::IIFPPBCFBBC* __cctor_b__23_0()
		{
			return ((::IIFPPBCFBBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
