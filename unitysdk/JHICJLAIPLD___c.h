#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHICJLAIPLD;
namespace System { class Object; }

#define JHICJLAIPLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E719690)
#define JHICJLAIPLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7196D0)
#define JHICJLAIPLD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7196E0)

inline static constexpr unsigned int JHICJLAIPLD___c_TypeDefinitionIndex = 30409;

	class JHICJLAIPLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHICJLAIPLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD___C_CTOR_OFFSET))(this);
		}

		::JHICJLAIPLD* __cctor_b__28_0()
		{
			return ((::JHICJLAIPLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICJLAIPLD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
