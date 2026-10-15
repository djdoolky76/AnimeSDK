#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBFAGOOJIOB;
namespace System { class Object; }

#define NBFAGOOJIOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0250)
#define NBFAGOOJIOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0290)
#define NBFAGOOJIOB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAD02A0)

inline static constexpr unsigned int NBFAGOOJIOB___c_TypeDefinitionIndex = 33104;

	class NBFAGOOJIOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBFAGOOJIOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFAGOOJIOB___C_CTOR_OFFSET))(this);
		}

		::NBFAGOOJIOB* __cctor_b__23_0()
		{
			return ((::NBFAGOOJIOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFAGOOJIOB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
