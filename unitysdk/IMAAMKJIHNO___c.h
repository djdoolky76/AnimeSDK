#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMAAMKJIHNO;
namespace System { class Object; }

#define IMAAMKJIHNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B3670)
#define IMAAMKJIHNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B36B0)
#define IMAAMKJIHNO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6B36C0)

inline static constexpr unsigned int IMAAMKJIHNO___c_TypeDefinitionIndex = 31359;

	class IMAAMKJIHNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMAAMKJIHNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAAMKJIHNO___C_CTOR_OFFSET))(this);
		}

		::IMAAMKJIHNO* __cctor_b__23_0()
		{
			return ((::IMAAMKJIHNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAAMKJIHNO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
