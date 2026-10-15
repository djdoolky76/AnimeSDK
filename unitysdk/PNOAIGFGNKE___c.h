#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNOAIGFGNKE;
namespace System { class Object; }

#define PNOAIGFGNKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF91E80)
#define PNOAIGFGNKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF91EB0)
#define PNOAIGFGNKE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF91EC0)

inline static constexpr unsigned int PNOAIGFGNKE___c_TypeDefinitionIndex = 30282;

	class PNOAIGFGNKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOAIGFGNKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOAIGFGNKE___C_CTOR_OFFSET))(this);
		}

		::PNOAIGFGNKE* __cctor_b__18_0()
		{
			return ((::PNOAIGFGNKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOAIGFGNKE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
