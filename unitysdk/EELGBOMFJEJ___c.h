#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EELGBOMFJEJ;
namespace System { class Object; }

#define EELGBOMFJEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E288890)
#define EELGBOMFJEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2888C0)
#define EELGBOMFJEJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2888D0)

inline static constexpr unsigned int EELGBOMFJEJ___c_TypeDefinitionIndex = 26307;

	class EELGBOMFJEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x441F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EELGBOMFJEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ___C_CTOR_OFFSET))(this);
		}

		::EELGBOMFJEJ* __cctor_b__28_0()
		{
			return ((::EELGBOMFJEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
