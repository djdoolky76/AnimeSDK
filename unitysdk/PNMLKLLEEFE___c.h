#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNMLKLLEEFE;
namespace System { class Object; }

#define PNMLKLLEEFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF918B0)
#define PNMLKLLEEFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF918E0)
#define PNMLKLLEEFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF918F0)

inline static constexpr unsigned int PNMLKLLEEFE___c_TypeDefinitionIndex = 34610;

	class PNMLKLLEEFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNMLKLLEEFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE___C_CTOR_OFFSET))(this);
		}

		::PNMLKLLEEFE* __cctor_b__28_0()
		{
			return ((::PNMLKLLEEFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
