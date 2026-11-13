#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLNGFBHIADA;
namespace System { class Object; }

#define KLNGFBHIADA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC1D90)
#define KLNGFBHIADA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC1DD0)
#define KLNGFBHIADA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDC1DE0)

inline static constexpr unsigned int KLNGFBHIADA___c_TypeDefinitionIndex = 35316;

	class KLNGFBHIADA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLNGFBHIADA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNGFBHIADA___C_CTOR_OFFSET))(this);
		}

		::KLNGFBHIADA* __cctor_b__23_0()
		{
			return ((::KLNGFBHIADA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNGFBHIADA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
