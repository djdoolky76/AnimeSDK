#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKICGMEHNGD;
namespace System { class Object; }

#define EKICGMEHNGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E295E20)
#define EKICGMEHNGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E295E60)
#define EKICGMEHNGD___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1E295E70)

inline static constexpr unsigned int EKICGMEHNGD___c_TypeDefinitionIndex = 27618;

	class EKICGMEHNGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKICGMEHNGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKICGMEHNGD___C_CTOR_OFFSET))(this);
		}

		::EKICGMEHNGD* __cctor_b__42_0()
		{
			return ((::EKICGMEHNGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKICGMEHNGD___C___CCTOR_B__42_0_OFFSET))(this);
		}

	};
