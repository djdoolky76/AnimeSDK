#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APHKOFKECCK;
namespace System { class Object; }

#define APHKOFKECCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA62870)
#define APHKOFKECCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA628A0)
#define APHKOFKECCK___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FA628B0)

inline static constexpr unsigned int APHKOFKECCK___c_TypeDefinitionIndex = 28399;

	class APHKOFKECCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APHKOFKECCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHKOFKECCK___C_CTOR_OFFSET))(this);
		}

		::APHKOFKECCK* __cctor_b__53_0()
		{
			return ((::APHKOFKECCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + APHKOFKECCK___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
