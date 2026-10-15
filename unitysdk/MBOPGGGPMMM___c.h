#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBOPGGGPMMM;
namespace System { class Object; }

#define MBOPGGGPMMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EEBC0)
#define MBOPGGGPMMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EEC00)
#define MBOPGGGPMMM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9EEC10)

inline static constexpr unsigned int MBOPGGGPMMM___c_TypeDefinitionIndex = 31116;

	class MBOPGGGPMMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBOPGGGPMMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOPGGGPMMM___C_CTOR_OFFSET))(this);
		}

		::MBOPGGGPMMM* __cctor_b__33_0()
		{
			return ((::MBOPGGGPMMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOPGGGPMMM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
