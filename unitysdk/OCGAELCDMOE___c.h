#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCGAELCDMOE;
namespace System { class Object; }

#define OCGAELCDMOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDAE330)
#define OCGAELCDMOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDAE370)
#define OCGAELCDMOE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDAE380)

inline static constexpr unsigned int OCGAELCDMOE___c_TypeDefinitionIndex = 33399;

	class OCGAELCDMOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCGAELCDMOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGAELCDMOE___C_CTOR_OFFSET))(this);
		}

		::OCGAELCDMOE* __cctor_b__23_0()
		{
			return ((::OCGAELCDMOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGAELCDMOE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
