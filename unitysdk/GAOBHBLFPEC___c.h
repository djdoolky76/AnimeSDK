#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAOBHBLFPEC;
namespace System { class Object; }

#define GAOBHBLFPEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC46110)
#define GAOBHBLFPEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC46150)
#define GAOBHBLFPEC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FC46160)

inline static constexpr unsigned int GAOBHBLFPEC___c_TypeDefinitionIndex = 33570;

	class GAOBHBLFPEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x567F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAOBHBLFPEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC___C_CTOR_OFFSET))(this);
		}

		::GAOBHBLFPEC* __cctor_b__38_0()
		{
			return ((::GAOBHBLFPEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBHBLFPEC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
