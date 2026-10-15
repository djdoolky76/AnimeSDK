#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFMLKENMBGP;
namespace System { class Object; }

#define GFMLKENMBGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E472D50)
#define GFMLKENMBGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E472D90)
#define GFMLKENMBGP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E472DA0)

inline static constexpr unsigned int GFMLKENMBGP___c_TypeDefinitionIndex = 30389;

	class GFMLKENMBGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMLKENMBGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLKENMBGP___C_CTOR_OFFSET))(this);
		}

		::GFMLKENMBGP* __cctor_b__23_0()
		{
			return ((::GFMLKENMBGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMLKENMBGP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
