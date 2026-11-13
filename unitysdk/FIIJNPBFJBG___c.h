#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIIJNPBFJBG;
namespace System { class Object; }

#define FIIJNPBFJBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2069E200)
#define FIIJNPBFJBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2069E240)
#define FIIJNPBFJBG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x2069E250)

inline static constexpr unsigned int FIIJNPBFJBG___c_TypeDefinitionIndex = 29905;

	class FIIJNPBFJBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIIJNPBFJBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG___C_CTOR_OFFSET))(this);
		}

		::FIIJNPBFJBG* __cctor_b__38_0()
		{
			return ((::FIIJNPBFJBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
