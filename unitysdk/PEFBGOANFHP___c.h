#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEFBGOANFHP;
namespace System { class Object; }

#define PEFBGOANFHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1E3120)
#define PEFBGOANFHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E3160)
#define PEFBGOANFHP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F1E3170)

inline static constexpr unsigned int PEFBGOANFHP___c_TypeDefinitionIndex = 28332;

	class PEFBGOANFHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEFBGOANFHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP___C_CTOR_OFFSET))(this);
		}

		::PEFBGOANFHP* __cctor_b__33_0()
		{
			return ((::PEFBGOANFHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
