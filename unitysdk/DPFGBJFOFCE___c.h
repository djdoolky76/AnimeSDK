#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPFGBJFOFCE;
namespace System { class Object; }

#define DPFGBJFOFCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0750)
#define DPFGBJFOFCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0790)
#define DPFGBJFOFCE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1E07A0)

inline static constexpr unsigned int DPFGBJFOFCE___c_TypeDefinitionIndex = 26231;

	class DPFGBJFOFCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPFGBJFOFCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFGBJFOFCE___C_CTOR_OFFSET))(this);
		}

		::DPFGBJFOFCE* __cctor_b__23_0()
		{
			return ((::DPFGBJFOFCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFGBJFOFCE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
