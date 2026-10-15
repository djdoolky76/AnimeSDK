#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNPGLCGNICI;
namespace System { class Object; }

#define NNPGLCGNICI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB59100)
#define NNPGLCGNICI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB59130)
#define NNPGLCGNICI___C___CCTOR_B__113_0_OFFSET UNITYSDK_OFFSET(0x1EB59140)

inline static constexpr unsigned int NNPGLCGNICI___c_TypeDefinitionIndex = 27820;

	class NNPGLCGNICI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNPGLCGNICI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPGLCGNICI___C_CTOR_OFFSET))(this);
		}

		::NNPGLCGNICI* __cctor_b__113_0()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPGLCGNICI___C___CCTOR_B__113_0_OFFSET))(this);
		}

	};
