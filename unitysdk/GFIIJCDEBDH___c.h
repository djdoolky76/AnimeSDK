#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFIIJCDEBDH;
namespace System { class Object; }

#define GFIIJCDEBDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4422F0)
#define GFIIJCDEBDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E442320)
#define GFIIJCDEBDH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E442330)

inline static constexpr unsigned int GFIIJCDEBDH___c_TypeDefinitionIndex = 32433;

	class GFIIJCDEBDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFIIJCDEBDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJCDEBDH___C_CTOR_OFFSET))(this);
		}

		::GFIIJCDEBDH* __cctor_b__18_0()
		{
			return ((::GFIIJCDEBDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIIJCDEBDH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
