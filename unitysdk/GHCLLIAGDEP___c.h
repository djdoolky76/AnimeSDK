#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCLLIAGDEP;
namespace System { class Object; }

#define GHCLLIAGDEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20273ED0)
#define GHCLLIAGDEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20273F10)
#define GHCLLIAGDEP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20273F20)

inline static constexpr unsigned int GHCLLIAGDEP___c_TypeDefinitionIndex = 29060;

	class GHCLLIAGDEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHCLLIAGDEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCLLIAGDEP___C_CTOR_OFFSET))(this);
		}

		::GHCLLIAGDEP* __cctor_b__23_0()
		{
			return ((::GHCLLIAGDEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCLLIAGDEP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
