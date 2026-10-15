#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHOHCAIFHNA;
namespace System { class Object; }

#define FHOHCAIFHNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E366D20)
#define FHOHCAIFHNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E366D50)
#define FHOHCAIFHNA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E366D60)

inline static constexpr unsigned int FHOHCAIFHNA___c_TypeDefinitionIndex = 25564;

	class FHOHCAIFHNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x574F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHOHCAIFHNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOHCAIFHNA___C_CTOR_OFFSET))(this);
		}

		::FHOHCAIFHNA* __cctor_b__43_0()
		{
			return ((::FHOHCAIFHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOHCAIFHNA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
