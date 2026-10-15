#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCLPBMPOHLI;
namespace System { class Object; }

#define GCLPBMPOHLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E414620)
#define GCLPBMPOHLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E414650)
#define GCLPBMPOHLI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E414660)

inline static constexpr unsigned int GCLPBMPOHLI___c_TypeDefinitionIndex = 31320;

	class GCLPBMPOHLI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF0E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCLPBMPOHLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI___C_CTOR_OFFSET))(this);
		}

		::GCLPBMPOHLI* __cctor_b__38_0()
		{
			return ((::GCLPBMPOHLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
