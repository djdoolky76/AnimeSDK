#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKFAEEILGA;
namespace System { class Object; }

#define AAKFAEEILGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD8FC90)
#define AAKFAEEILGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8FCD0)
#define AAKFAEEILGA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DD8FCE0)

inline static constexpr unsigned int AAKFAEEILGA___c_TypeDefinitionIndex = 28228;

	class AAKFAEEILGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKFAEEILGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFAEEILGA___C_CTOR_OFFSET))(this);
		}

		::AAKFAEEILGA* __cctor_b__23_0()
		{
			return ((::AAKFAEEILGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFAEEILGA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
