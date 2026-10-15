#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPDILLMEAKN;
namespace System { class Object; }

#define DPDILLMEAKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DED60)
#define DPDILLMEAKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DEDA0)
#define DPDILLMEAKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1DEDB0)

inline static constexpr unsigned int DPDILLMEAKN___c_TypeDefinitionIndex = 31924;

	class DPDILLMEAKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPDILLMEAKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN___C_CTOR_OFFSET))(this);
		}

		::DPDILLMEAKN* __cctor_b__28_0()
		{
			return ((::DPDILLMEAKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
