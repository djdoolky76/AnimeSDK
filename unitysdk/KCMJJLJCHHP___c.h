#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCMJJLJCHHP;
namespace System { class Object; }

#define KCMJJLJCHHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C4A70)
#define KCMJJLJCHHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203C4AB0)
#define KCMJJLJCHHP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x203C4AC0)

inline static constexpr unsigned int KCMJJLJCHHP___c_TypeDefinitionIndex = 32808;

	class KCMJJLJCHHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6AB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCMJJLJCHHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP___C_CTOR_OFFSET))(this);
		}

		::KCMJJLJCHHP* __cctor_b__48_0()
		{
			return ((::KCMJJLJCHHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMJJLJCHHP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
