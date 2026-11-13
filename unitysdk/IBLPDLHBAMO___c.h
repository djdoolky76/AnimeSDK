#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBLPDLHBAMO;
namespace System { class Object; }

#define IBLPDLHBAMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20125090)
#define IBLPDLHBAMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201250D0)
#define IBLPDLHBAMO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201250E0)

inline static constexpr unsigned int IBLPDLHBAMO___c_TypeDefinitionIndex = 30316;

	class IBLPDLHBAMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBLPDLHBAMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLPDLHBAMO___C_CTOR_OFFSET))(this);
		}

		::IBLPDLHBAMO* __cctor_b__23_0()
		{
			return ((::IBLPDLHBAMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLPDLHBAMO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
