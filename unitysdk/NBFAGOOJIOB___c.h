#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBFAGOOJIOB;
namespace System { class Object; }

#define NBFAGOOJIOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20158FD0)
#define NBFAGOOJIOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20159010)
#define NBFAGOOJIOB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20159020)

inline static constexpr unsigned int NBFAGOOJIOB___c_TypeDefinitionIndex = 34019;

	class NBFAGOOJIOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58840);
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
