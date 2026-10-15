#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDPDEJAAED;
namespace System { class Object; }

#define GIDPDEJAAED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E467800)
#define GIDPDEJAAED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E467840)
#define GIDPDEJAAED___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E467850)

inline static constexpr unsigned int GIDPDEJAAED___c_TypeDefinitionIndex = 26463;

	class GIDPDEJAAED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIDPDEJAAED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED___C_CTOR_OFFSET))(this);
		}

		::GIDPDEJAAED* __cctor_b__43_0()
		{
			return ((::GIDPDEJAAED*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPDEJAAED___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
