#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMGJDEHNAI;
namespace System { class Object; }

#define FPMGJDEHNAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0520)
#define FPMGJDEHNAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0560)
#define FPMGJDEHNAI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3E0570)

inline static constexpr unsigned int FPMGJDEHNAI___c_TypeDefinitionIndex = 28154;

	class FPMGJDEHNAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMGJDEHNAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGJDEHNAI___C_CTOR_OFFSET))(this);
		}

		::FPMGJDEHNAI* __cctor_b__23_0()
		{
			return ((::FPMGJDEHNAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGJDEHNAI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
