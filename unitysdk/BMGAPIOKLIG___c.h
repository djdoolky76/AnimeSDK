#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGAPIOKLIG;
namespace System { class Object; }

#define BMGAPIOKLIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC747B0)
#define BMGAPIOKLIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC747F0)
#define BMGAPIOKLIG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC74800)

inline static constexpr unsigned int BMGAPIOKLIG___c_TypeDefinitionIndex = 27369;

	class BMGAPIOKLIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGAPIOKLIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG___C_CTOR_OFFSET))(this);
		}

		::BMGAPIOKLIG* __cctor_b__28_0()
		{
			return ((::BMGAPIOKLIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
