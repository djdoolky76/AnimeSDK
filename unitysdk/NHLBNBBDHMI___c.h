#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHLBNBBDHMI;
namespace System { class Object; }

#define NHLBNBBDHMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20410C80)
#define NHLBNBBDHMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20410CB0)
#define NHLBNBBDHMI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20410CC0)

inline static constexpr unsigned int NHLBNBBDHMI___c_TypeDefinitionIndex = 33824;

	class NHLBNBBDHMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHLBNBBDHMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLBNBBDHMI___C_CTOR_OFFSET))(this);
		}

		::NHLBNBBDHMI* __cctor_b__23_0()
		{
			return ((::NHLBNBBDHMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLBNBBDHMI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
