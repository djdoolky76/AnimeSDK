#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCPNGFOCOGA;
namespace System { class Object; }

#define PCPNGFOCOGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC00C70)
#define PCPNGFOCOGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC00CB0)
#define PCPNGFOCOGA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC00CC0)

inline static constexpr unsigned int PCPNGFOCOGA___c_TypeDefinitionIndex = 29578;

	class PCPNGFOCOGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCPNGFOCOGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA___C_CTOR_OFFSET))(this);
		}

		::PCPNGFOCOGA* __cctor_b__33_0()
		{
			return ((::PCPNGFOCOGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
