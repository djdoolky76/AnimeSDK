#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEAJJFGMAPG;
namespace System { class Object; }

#define MEAJJFGMAPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DA5E0)
#define MEAJJFGMAPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DA610)
#define MEAJJFGMAPG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9DA620)

inline static constexpr unsigned int MEAJJFGMAPG___c_TypeDefinitionIndex = 27677;

	class MEAJJFGMAPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEAJJFGMAPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG___C_CTOR_OFFSET))(this);
		}

		::MEAJJFGMAPG* __cctor_b__28_0()
		{
			return ((::MEAJJFGMAPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
