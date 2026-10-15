#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PACMGHKKGKN;
namespace System { class Object; }

#define PACMGHKKGKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBD3A0)
#define PACMGHKKGKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBD3E0)
#define PACMGHKKGKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEBD3F0)

inline static constexpr unsigned int PACMGHKKGKN___c_TypeDefinitionIndex = 30717;

	class PACMGHKKGKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PACMGHKKGKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACMGHKKGKN___C_CTOR_OFFSET))(this);
		}

		::PACMGHKKGKN* __cctor_b__23_0()
		{
			return ((::PACMGHKKGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACMGHKKGKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
