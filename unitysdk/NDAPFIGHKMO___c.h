#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDAPFIGHKMO;
namespace System { class Object; }

#define NDAPFIGHKMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202F9BD0)
#define NDAPFIGHKMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202F9C10)
#define NDAPFIGHKMO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x202F9C20)

inline static constexpr unsigned int NDAPFIGHKMO___c_TypeDefinitionIndex = 30559;

	class NDAPFIGHKMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDAPFIGHKMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAPFIGHKMO___C_CTOR_OFFSET))(this);
		}

		::NDAPFIGHKMO* __cctor_b__18_0()
		{
			return ((::NDAPFIGHKMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAPFIGHKMO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
