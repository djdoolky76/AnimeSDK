#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBKIJNOFIAH;
namespace System { class Object; }

#define FBKIJNOFIAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30AAF0)
#define FBKIJNOFIAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30AB30)
#define FBKIJNOFIAH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E30AB40)

inline static constexpr unsigned int FBKIJNOFIAH___c_TypeDefinitionIndex = 34418;

	class FBKIJNOFIAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4EC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBKIJNOFIAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH___C_CTOR_OFFSET))(this);
		}

		::FBKIJNOFIAH* __cctor_b__28_0()
		{
			return ((::FBKIJNOFIAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
