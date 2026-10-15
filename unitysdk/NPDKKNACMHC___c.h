#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPDKKNACMHC;
namespace System { class Object; }

#define NPDKKNACMHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB68660)
#define NPDKKNACMHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB68690)
#define NPDKKNACMHC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB686A0)

inline static constexpr unsigned int NPDKKNACMHC___c_TypeDefinitionIndex = 29739;

	class NPDKKNACMHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPDKKNACMHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC___C_CTOR_OFFSET))(this);
		}

		::NPDKKNACMHC* __cctor_b__43_0()
		{
			return ((::NPDKKNACMHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKKNACMHC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
