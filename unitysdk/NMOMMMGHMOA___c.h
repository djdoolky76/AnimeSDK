#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMOMMMGHMOA;
namespace System { class Object; }

#define NMOMMMGHMOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F06DFB0)
#define NMOMMMGHMOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F06DFE0)
#define NMOMMMGHMOA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F06DFF0)

inline static constexpr unsigned int NMOMMMGHMOA___c_TypeDefinitionIndex = 34463;

	class NMOMMMGHMOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x71B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMOMMMGHMOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA___C_CTOR_OFFSET))(this);
		}

		::NMOMMMGHMOA* __cctor_b__28_0()
		{
			return ((::NMOMMMGHMOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMMMGHMOA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
