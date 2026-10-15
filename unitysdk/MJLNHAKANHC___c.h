#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJLNHAKANHC;
namespace System { class Object; }

#define MJLNHAKANHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4C910)
#define MJLNHAKANHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4C950)
#define MJLNHAKANHC___C___CCTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x1EA4C960)

inline static constexpr unsigned int MJLNHAKANHC___c_TypeDefinitionIndex = 26849;

	class MJLNHAKANHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJLNHAKANHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLNHAKANHC___C_CTOR_OFFSET))(this);
		}

		::MJLNHAKANHC* __cctor_b__51_0()
		{
			return ((::MJLNHAKANHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLNHAKANHC___C___CCTOR_B__51_0_OFFSET))(this);
		}

	};
