#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPLFHOFEEIO;
namespace System { class Object; }

#define CPLFHOFEEIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F41BA20)
#define CPLFHOFEEIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F41BA60)
#define CPLFHOFEEIO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F41BA70)

inline static constexpr unsigned int CPLFHOFEEIO___c_TypeDefinitionIndex = 32049;

	class CPLFHOFEEIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPLFHOFEEIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO___C_CTOR_OFFSET))(this);
		}

		::CPLFHOFEEIO* __cctor_b__38_0()
		{
			return ((::CPLFHOFEEIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFHOFEEIO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
