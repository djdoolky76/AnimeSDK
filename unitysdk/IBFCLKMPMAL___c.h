#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBFCLKMPMAL;
namespace System { class Object; }

#define IBFCLKMPMAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E7150)
#define IBFCLKMPMAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E7180)
#define IBFCLKMPMAL___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1E5E7190)

inline static constexpr unsigned int IBFCLKMPMAL___c_TypeDefinitionIndex = 34108;

	class IBFCLKMPMAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFCLKMPMAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL___C_CTOR_OFFSET))(this);
		}

		::IBFCLKMPMAL* __cctor_b__36_0()
		{
			return ((::IBFCLKMPMAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFCLKMPMAL___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
