#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KICPDGKGGHO;
namespace System { class Object; }

#define KICPDGKGGHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E829030)
#define KICPDGKGGHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E829070)
#define KICPDGKGGHO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E829080)

inline static constexpr unsigned int KICPDGKGGHO___c_TypeDefinitionIndex = 31760;

	class KICPDGKGGHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KICPDGKGGHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO___C_CTOR_OFFSET))(this);
		}

		::KICPDGKGGHO* __cctor_b__38_0()
		{
			return ((::KICPDGKGGHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPDGKGGHO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
