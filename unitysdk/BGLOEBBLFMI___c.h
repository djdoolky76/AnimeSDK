#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGLOEBBLFMI;
namespace System { class Object; }

#define BGLOEBBLFMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4FA80)
#define BGLOEBBLFMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4FAC0)
#define BGLOEBBLFMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA4FAD0)

inline static constexpr unsigned int BGLOEBBLFMI___c_TypeDefinitionIndex = 27364;

	class BGLOEBBLFMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLOEBBLFMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI___C_CTOR_OFFSET))(this);
		}

		::BGLOEBBLFMI* __cctor_b__28_0()
		{
			return ((::BGLOEBBLFMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLOEBBLFMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
