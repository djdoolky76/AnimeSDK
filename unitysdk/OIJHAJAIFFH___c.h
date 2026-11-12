#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIJHAJAIFFH;
namespace System { class Object; }

#define OIJHAJAIFFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1198A0)
#define OIJHAJAIFFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1198E0)
#define OIJHAJAIFFH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F1198F0)

inline static constexpr unsigned int OIJHAJAIFFH___c_TypeDefinitionIndex = 26159;

	class OIJHAJAIFFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x173E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIJHAJAIFFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH___C_CTOR_OFFSET))(this);
		}

		::OIJHAJAIFFH* __cctor_b__43_0()
		{
			return ((::OIJHAJAIFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
