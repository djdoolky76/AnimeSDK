#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJFHPHPOIHI;
namespace System { class Object; }

#define PJFHPHPOIHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2055F750)
#define PJFHPHPOIHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2055F790)
#define PJFHPHPOIHI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2055F7A0)

inline static constexpr unsigned int PJFHPHPOIHI___c_TypeDefinitionIndex = 27947;

	class PJFHPHPOIHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EF20);
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
