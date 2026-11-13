#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGIELNDDHPA;
namespace System { class Object; }

#define HGIELNDDHPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAFC5A0)
#define HGIELNDDHPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAFC5E0)
#define HGIELNDDHPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FAFC5F0)

inline static constexpr unsigned int HGIELNDDHPA___c_TypeDefinitionIndex = 26232;

	class HGIELNDDHPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGIELNDDHPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA___C_CTOR_OFFSET))(this);
		}

		::HGIELNDDHPA* __cctor_b__28_0()
		{
			return ((::HGIELNDDHPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
