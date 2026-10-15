#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAEMGBIAIK;
namespace System { class Object; }

#define JGAEMGBIAIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E706470)
#define JGAEMGBIAIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7064B0)
#define JGAEMGBIAIK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7064C0)

inline static constexpr unsigned int JGAEMGBIAIK___c_TypeDefinitionIndex = 29406;

	class JGAEMGBIAIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAEMGBIAIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAEMGBIAIK___C_CTOR_OFFSET))(this);
		}

		::JGAEMGBIAIK* __cctor_b__23_0()
		{
			return ((::JGAEMGBIAIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAEMGBIAIK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
