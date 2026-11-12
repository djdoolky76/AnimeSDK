#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNCEFFFGNEN;
namespace System { class Object; }

#define NNCEFFFGNEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F072520)
#define NNCEFFFGNEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F072560)
#define NNCEFFFGNEN___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F072570)

inline static constexpr unsigned int NNCEFFFGNEN___c_TypeDefinitionIndex = 33416;

	class NNCEFFFGNEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x71F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNCEFFFGNEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN___C_CTOR_OFFSET))(this);
		}

		::NNCEFFFGNEN* __cctor_b__43_0()
		{
			return ((::NNCEFFFGNEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
