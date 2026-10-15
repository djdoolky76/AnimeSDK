#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGDBDNGEKFP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DNLECAAMGIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C520DE0)
#define DNLECAAMGIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C520E20)
#define DNLECAAMGIC___C___REFRESHATTRIBUTES_B__17_0_OFFSET UNITYSDK_OFFSET(0x1C520E30)

inline static constexpr unsigned int DNLECAAMGIC___c_TypeDefinitionIndex = 41752;

	class DNLECAAMGIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20AE0);
		}

		static ::System::Func_2<::AGDBDNGEKFP*, ::System::Single>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::AGDBDNGEKFP*, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNLECAAMGIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLECAAMGIC___C_CTOR_OFFSET))(this);
		}

		::System::Single __RefreshAttributes_b__17_0(::AGDBDNGEKFP* a1)
		{
			return ((::System::Single(*)(::PVOID, ::AGDBDNGEKFP*))((::PBYTE)hIl2Cpp + DNLECAAMGIC___C___REFRESHATTRIBUTES_B__17_0_OFFSET))(this, a1);
		}

	};
