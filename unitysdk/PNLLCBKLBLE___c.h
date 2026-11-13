#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNLLCBKLBLE;
namespace System { class Object; }

#define PNLLCBKLBLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202094E0)
#define PNLLCBKLBLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20209520)
#define PNLLCBKLBLE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20209530)

inline static constexpr unsigned int PNLLCBKLBLE___c_TypeDefinitionIndex = 35635;

	class PNLLCBKLBLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNLLCBKLBLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE___C_CTOR_OFFSET))(this);
		}

		::PNLLCBKLBLE* __cctor_b__33_0()
		{
			return ((::PNLLCBKLBLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
