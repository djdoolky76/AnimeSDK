#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIDDODLHDLE;
namespace System { class Object; }

#define AIDDODLHDLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24CC50)
#define AIDDODLHDLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24CC90)
#define AIDDODLHDLE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E24CCA0)

inline static constexpr unsigned int AIDDODLHDLE___c_TypeDefinitionIndex = 29616;

	class AIDDODLHDLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AD30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIDDODLHDLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDDODLHDLE___C_CTOR_OFFSET))(this);
		}

		::AIDDODLHDLE* __cctor_b__23_0()
		{
			return ((::AIDDODLHDLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDDODLHDLE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
