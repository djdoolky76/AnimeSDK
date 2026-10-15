#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGDLIAMDLA;
namespace System { class Object; }

#define HCGDLIAMDLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53D340)
#define HCGDLIAMDLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53D380)
#define HCGDLIAMDLA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E53D390)

inline static constexpr unsigned int HCGDLIAMDLA___c_TypeDefinitionIndex = 31866;

	class HCGDLIAMDLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCGDLIAMDLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA___C_CTOR_OFFSET))(this);
		}

		::HCGDLIAMDLA* __cctor_b__33_0()
		{
			return ((::HCGDLIAMDLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
