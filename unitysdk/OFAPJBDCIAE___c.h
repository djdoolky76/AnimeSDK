#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFAPJBDCIAE;
namespace System { class Object; }

#define OFAPJBDCIAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE36F90)
#define OFAPJBDCIAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE36FD0)
#define OFAPJBDCIAE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE36FE0)

inline static constexpr unsigned int OFAPJBDCIAE___c_TypeDefinitionIndex = 30886;

	class OFAPJBDCIAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFAPJBDCIAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE___C_CTOR_OFFSET))(this);
		}

		::OFAPJBDCIAE* __cctor_b__28_0()
		{
			return ((::OFAPJBDCIAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
