#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFKKOMBKJIP;
namespace System { class Object; }

#define LFKKOMBKJIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC627E0)
#define LFKKOMBKJIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC62820)
#define LFKKOMBKJIP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC62830)

inline static constexpr unsigned int LFKKOMBKJIP___c_TypeDefinitionIndex = 25796;

	class LFKKOMBKJIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFKKOMBKJIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP___C_CTOR_OFFSET))(this);
		}

		::LFKKOMBKJIP* __cctor_b__28_0()
		{
			return ((::LFKKOMBKJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
