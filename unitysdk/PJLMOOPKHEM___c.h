#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJLMOOPKHEM;
namespace System { class Object; }

#define PJLMOOPKHEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2300D0)
#define PJLMOOPKHEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F230110)
#define PJLMOOPKHEM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F230120)

inline static constexpr unsigned int PJLMOOPKHEM___c_TypeDefinitionIndex = 25682;

	class PJLMOOPKHEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLMOOPKHEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM___C_CTOR_OFFSET))(this);
		}

		::PJLMOOPKHEM* __cctor_b__28_0()
		{
			return ((::PJLMOOPKHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLMOOPKHEM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
