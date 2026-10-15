#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGODFDFPEI;
namespace System { class Object; }

#define DMGODFDFPEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C0930)
#define DMGODFDFPEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C0960)
#define DMGODFDFPEI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1C0970)

inline static constexpr unsigned int DMGODFDFPEI___c_TypeDefinitionIndex = 27306;

	class DMGODFDFPEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x363E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMGODFDFPEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI___C_CTOR_OFFSET))(this);
		}

		::DMGODFDFPEI* __cctor_b__28_0()
		{
			return ((::DMGODFDFPEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
