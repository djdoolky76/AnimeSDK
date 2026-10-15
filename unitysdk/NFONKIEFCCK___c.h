#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFONKIEFCCK;
namespace System { class Object; }

#define NFONKIEFCCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB08D30)
#define NFONKIEFCCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB08D70)
#define NFONKIEFCCK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB08D80)

inline static constexpr unsigned int NFONKIEFCCK___c_TypeDefinitionIndex = 30163;

	class NFONKIEFCCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EDE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFONKIEFCCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFONKIEFCCK___C_CTOR_OFFSET))(this);
		}

		::NFONKIEFCCK* __cctor_b__23_0()
		{
			return ((::NFONKIEFCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFONKIEFCCK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
