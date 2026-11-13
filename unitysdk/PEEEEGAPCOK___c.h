#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEEEEGAPCOK;
namespace System { class Object; }

#define PEEEEGAPCOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20668340)
#define PEEEEGAPCOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20668380)
#define PEEEEGAPCOK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x20668390)

inline static constexpr unsigned int PEEEEGAPCOK___c_TypeDefinitionIndex = 26390;

	class PEEEEGAPCOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x325B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEEEEGAPCOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK___C_CTOR_OFFSET))(this);
		}

		::PEEEEGAPCOK* __cctor_b__43_0()
		{
			return ((::PEEEEGAPCOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
