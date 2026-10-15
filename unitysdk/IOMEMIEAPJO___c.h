#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOMEMIEAPJO;
namespace System { class Object; }

#define IOMEMIEAPJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AC2B0)
#define IOMEMIEAPJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AC2E0)
#define IOMEMIEAPJO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6AC2F0)

inline static constexpr unsigned int IOMEMIEAPJO___c_TypeDefinitionIndex = 32861;

	class IOMEMIEAPJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOMEMIEAPJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMEMIEAPJO___C_CTOR_OFFSET))(this);
		}

		::IOMEMIEAPJO* __cctor_b__23_0()
		{
			return ((::IOMEMIEAPJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMEMIEAPJO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
