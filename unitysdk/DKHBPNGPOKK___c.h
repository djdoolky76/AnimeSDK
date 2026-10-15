#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKHBPNGPOKK;
namespace System { class Object; }

#define DKHBPNGPOKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9760)
#define DKHBPNGPOKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A97A0)
#define DKHBPNGPOKK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E1A97B0)

inline static constexpr unsigned int DKHBPNGPOKK___c_TypeDefinitionIndex = 26001;

	class DKHBPNGPOKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKHBPNGPOKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHBPNGPOKK___C_CTOR_OFFSET))(this);
		}

		::DKHBPNGPOKK* __cctor_b__18_0()
		{
			return ((::DKHBPNGPOKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHBPNGPOKK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
