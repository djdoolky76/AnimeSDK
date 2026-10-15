#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJFHPHPOIHI;
namespace System { class Object; }

#define PJFHPHPOIHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4ACA0)
#define PJFHPHPOIHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4ACE0)
#define PJFHPHPOIHI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF4ACF0)

inline static constexpr unsigned int PJFHPHPOIHI___c_TypeDefinitionIndex = 27416;

	class PJFHPHPOIHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFHPHPOIHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI___C_CTOR_OFFSET))(this);
		}

		::PJFHPHPOIHI* __cctor_b__28_0()
		{
			return ((::PJFHPHPOIHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHPHPOIHI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
