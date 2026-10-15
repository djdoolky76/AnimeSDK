#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBAEGHHHDNH;
namespace System { class Object; }

#define JBAEGHHHDNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C45F0)
#define JBAEGHHHDNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C4630)
#define JBAEGHHHDNH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6C4640)

inline static constexpr unsigned int JBAEGHHHDNH___c_TypeDefinitionIndex = 35091;

	class JBAEGHHHDNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBAEGHHHDNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH___C_CTOR_OFFSET))(this);
		}

		::JBAEGHHHDNH* __cctor_b__18_0()
		{
			return ((::JBAEGHHHDNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
