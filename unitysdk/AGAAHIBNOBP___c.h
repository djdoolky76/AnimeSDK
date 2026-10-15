#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGAAHIBNOBP;
namespace System { class Object; }

#define AGAAHIBNOBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F8770)
#define AGAAHIBNOBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F87A0)
#define AGAAHIBNOBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0F87B0)

inline static constexpr unsigned int AGAAHIBNOBP___c_TypeDefinitionIndex = 34001;

	class AGAAHIBNOBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGAAHIBNOBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP___C_CTOR_OFFSET))(this);
		}

		::AGAAHIBNOBP* __cctor_b__28_0()
		{
			return ((::AGAAHIBNOBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
