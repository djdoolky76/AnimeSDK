#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHILLJECMN;
namespace System { class Object; }

#define GAHILLJECMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41C950)
#define GAHILLJECMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41C990)
#define GAHILLJECMN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E41C9A0)

inline static constexpr unsigned int GAHILLJECMN___c_TypeDefinitionIndex = 28043;

	class GAHILLJECMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAHILLJECMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHILLJECMN___C_CTOR_OFFSET))(this);
		}

		::GAHILLJECMN* __cctor_b__23_0()
		{
			return ((::GAHILLJECMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHILLJECMN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
