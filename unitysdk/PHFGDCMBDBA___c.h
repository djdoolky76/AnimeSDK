#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHFGDCMBDBA;
namespace System { class Object; }

#define PHFGDCMBDBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0B890)
#define PHFGDCMBDBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0B8D0)
#define PHFGDCMBDBA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF0B8E0)

inline static constexpr unsigned int PHFGDCMBDBA___c_TypeDefinitionIndex = 31823;

	class PHFGDCMBDBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x337C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHFGDCMBDBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA___C_CTOR_OFFSET))(this);
		}

		::PHFGDCMBDBA* __cctor_b__28_0()
		{
			return ((::PHFGDCMBDBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
