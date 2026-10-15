#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PICHIFNMBNO;
namespace System { class Object; }

#define PICHIFNMBNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF15D90)
#define PICHIFNMBNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF15DD0)
#define PICHIFNMBNO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF15DE0)

inline static constexpr unsigned int PICHIFNMBNO___c_TypeDefinitionIndex = 27154;

	class PICHIFNMBNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x346F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICHIFNMBNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO___C_CTOR_OFFSET))(this);
		}

		::PICHIFNMBNO* __cctor_b__33_0()
		{
			return ((::PICHIFNMBNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
