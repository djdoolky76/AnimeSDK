#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCOKLOGEKEL;
namespace System { class Object; }

#define LCOKLOGEKEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C27D0)
#define LCOKLOGEKEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C2810)
#define LCOKLOGEKEL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E8C2820)

inline static constexpr unsigned int LCOKLOGEKEL___c_TypeDefinitionIndex = 33833;

	class LCOKLOGEKEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCOKLOGEKEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOKLOGEKEL___C_CTOR_OFFSET))(this);
		}

		::LCOKLOGEKEL* __cctor_b__48_0()
		{
			return ((::LCOKLOGEKEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOKLOGEKEL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
