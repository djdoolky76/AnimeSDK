#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGKJMBBJCNC;
namespace System { class Object; }

#define AGKJMBBJCNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12DF90)
#define AGKJMBBJCNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12DFD0)
#define AGKJMBBJCNC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E12DFE0)

inline static constexpr unsigned int AGKJMBBJCNC___c_TypeDefinitionIndex = 32543;

	class AGKJMBBJCNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x309A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGKJMBBJCNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC___C_CTOR_OFFSET))(this);
		}

		::AGKJMBBJCNC* __cctor_b__28_0()
		{
			return ((::AGKJMBBJCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKJMBBJCNC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
