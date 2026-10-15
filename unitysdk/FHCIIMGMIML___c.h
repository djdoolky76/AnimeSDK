#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHCIIMGMIML;
namespace System { class Object; }

#define FHCIIMGMIML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3894E0)
#define FHCIIMGMIML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E389520)
#define FHCIIMGMIML___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E389530)

inline static constexpr unsigned int FHCIIMGMIML___c_TypeDefinitionIndex = 27998;

	class FHCIIMGMIML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHCIIMGMIML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML___C_CTOR_OFFSET))(this);
		}

		::FHCIIMGMIML* __cctor_b__28_0()
		{
			return ((::FHCIIMGMIML*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
