#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHMNLHLADJO;
namespace System { class Object; }

#define FHMNLHLADJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E390C80)
#define FHMNLHLADJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E390CC0)
#define FHMNLHLADJO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E390CD0)

	class FHMNLHLADJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHMNLHLADJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO___C_CTOR_OFFSET))(this);
		}

		::FHMNLHLADJO* __cctor_b__28_0()
		{
			return ((::FHMNLHLADJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
