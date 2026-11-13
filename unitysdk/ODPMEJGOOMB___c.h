#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODPMEJGOOMB;
namespace System { class Object; }

#define ODPMEJGOOMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB53C60)
#define ODPMEJGOOMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB53CA0)
#define ODPMEJGOOMB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB53CB0)

inline static constexpr unsigned int ODPMEJGOOMB___c_TypeDefinitionIndex = 30389;

	class ODPMEJGOOMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODPMEJGOOMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPMEJGOOMB___C_CTOR_OFFSET))(this);
		}

		::ODPMEJGOOMB* __cctor_b__23_0()
		{
			return ((::ODPMEJGOOMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPMEJGOOMB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
