#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDKHMNKAECP;
namespace System { class Object; }

#define MDKHMNKAECP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D87C0)
#define MDKHMNKAECP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8800)
#define MDKHMNKAECP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9D8810)

inline static constexpr unsigned int MDKHMNKAECP___c_TypeDefinitionIndex = 29381;

	class MDKHMNKAECP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDKHMNKAECP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP___C_CTOR_OFFSET))(this);
		}

		::MDKHMNKAECP* __cctor_b__23_0()
		{
			return ((::MDKHMNKAECP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
