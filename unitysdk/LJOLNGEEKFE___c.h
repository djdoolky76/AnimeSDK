#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJOLNGEEKFE;
namespace System { class Object; }

#define LJOLNGEEKFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCAB0C0)
#define LJOLNGEEKFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCAB100)
#define LJOLNGEEKFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FCAB110)

inline static constexpr unsigned int LJOLNGEEKFE___c_TypeDefinitionIndex = 29490;

	class LJOLNGEEKFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A190);
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
