#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MACGIEKOBNM;
namespace System { class Object; }

#define MACGIEKOBNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A9360)
#define MACGIEKOBNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A93A0)
#define MACGIEKOBNM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9A93B0)

inline static constexpr unsigned int MACGIEKOBNM___c_TypeDefinitionIndex = 31578;

	class MACGIEKOBNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x455A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MACGIEKOBNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM___C_CTOR_OFFSET))(this);
		}

		::MACGIEKOBNM* __cctor_b__28_0()
		{
			return ((::MACGIEKOBNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGIEKOBNM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
