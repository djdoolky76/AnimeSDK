#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFEPCAOAMML;
namespace System { class Object; }

#define KFEPCAOAMML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E817910)
#define KFEPCAOAMML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E817950)
#define KFEPCAOAMML___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E817960)

inline static constexpr unsigned int KFEPCAOAMML___c_TypeDefinitionIndex = 32195;

	class KFEPCAOAMML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFEPCAOAMML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML___C_CTOR_OFFSET))(this);
		}

		::KFEPCAOAMML* __cctor_b__28_0()
		{
			return ((::KFEPCAOAMML*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
