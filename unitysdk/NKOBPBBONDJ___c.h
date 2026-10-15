#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKOBPBBONDJ;
namespace System { class Object; }

#define NKOBPBBONDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB30D90)
#define NKOBPBBONDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB30DC0)
#define NKOBPBBONDJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB30DD0)

inline static constexpr unsigned int NKOBPBBONDJ___c_TypeDefinitionIndex = 33039;

	class NKOBPBBONDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOBPBBONDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ___C_CTOR_OFFSET))(this);
		}

		::NKOBPBBONDJ* __cctor_b__28_0()
		{
			return ((::NKOBPBBONDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPBBONDJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
