#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMLFGDFLIBP;
namespace System { class Object; }

#define HMLFGDFLIBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A4C90)
#define HMLFGDFLIBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A4CD0)
#define HMLFGDFLIBP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5A4CE0)

inline static constexpr unsigned int HMLFGDFLIBP___c_TypeDefinitionIndex = 30726;

	class HMLFGDFLIBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLFGDFLIBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP___C_CTOR_OFFSET))(this);
		}

		::HMLFGDFLIBP* __cctor_b__23_0()
		{
			return ((::HMLFGDFLIBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
