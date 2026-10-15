#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGEFEAPPGKN;
namespace System { class Object; }

#define BGEFEAPPGKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA45A30)
#define BGEFEAPPGKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA45A70)
#define BGEFEAPPGKN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA45A80)

inline static constexpr unsigned int BGEFEAPPGKN___c_TypeDefinitionIndex = 25975;

	class BGEFEAPPGKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGEFEAPPGKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN___C_CTOR_OFFSET))(this);
		}

		::BGEFEAPPGKN* __cctor_b__33_0()
		{
			return ((::BGEFEAPPGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
