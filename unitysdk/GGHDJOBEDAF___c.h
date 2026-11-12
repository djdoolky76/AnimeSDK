#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHDJOBEDAF;
namespace System { class Object; }

#define GGHDJOBEDAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F76B750)
#define GGHDJOBEDAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F76B790)
#define GGHDJOBEDAF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F76B7A0)

inline static constexpr unsigned int GGHDJOBEDAF___c_TypeDefinitionIndex = 31852;

	class GGHDJOBEDAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHDJOBEDAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF___C_CTOR_OFFSET))(this);
		}

		::GGHDJOBEDAF* __cctor_b__28_0()
		{
			return ((::GGHDJOBEDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDJOBEDAF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
