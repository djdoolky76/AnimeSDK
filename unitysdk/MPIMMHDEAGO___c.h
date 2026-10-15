#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPIMMHDEAGO;
namespace System { class Object; }

#define MPIMMHDEAGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB99B0)
#define MPIMMHDEAGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB99F0)
#define MPIMMHDEAGO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAB9A00)

inline static constexpr unsigned int MPIMMHDEAGO___c_TypeDefinitionIndex = 31124;

	class MPIMMHDEAGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPIMMHDEAGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMMHDEAGO___C_CTOR_OFFSET))(this);
		}

		::MPIMMHDEAGO* __cctor_b__18_0()
		{
			return ((::MPIMMHDEAGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMMHDEAGO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
