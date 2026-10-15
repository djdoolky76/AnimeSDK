#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLNGFBHIADA;
namespace System { class Object; }

#define KLNGFBHIADA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E892E20)
#define KLNGFBHIADA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E892E60)
#define KLNGFBHIADA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E892E70)

inline static constexpr unsigned int KLNGFBHIADA___c_TypeDefinitionIndex = 34388;

	class KLNGFBHIADA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21980);
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
