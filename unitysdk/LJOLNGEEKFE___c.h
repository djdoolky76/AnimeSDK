#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJOLNGEEKFE;
namespace System { class Object; }

#define LJOLNGEEKFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95C110)
#define LJOLNGEEKFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95C150)
#define LJOLNGEEKFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E95C160)

inline static constexpr unsigned int LJOLNGEEKFE___c_TypeDefinitionIndex = 28900;

	class LJOLNGEEKFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x398B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJOLNGEEKFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE___C_CTOR_OFFSET))(this);
		}

		::LJOLNGEEKFE* __cctor_b__28_0()
		{
			return ((::LJOLNGEEKFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
