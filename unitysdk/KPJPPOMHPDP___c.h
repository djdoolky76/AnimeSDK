#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHPOKIKCOFO;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KPJPPOMHPDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8DE070)
#define KPJPPOMHPDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DE0B0)
#define KPJPPOMHPDP___C__CLEANUP_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C8DE0C0)

inline static constexpr unsigned int KPJPPOMHPDP___c_TypeDefinitionIndex = 42090;

	class KPJPPOMHPDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E160);
		}

		static ::System::Action_1<::KHPOKIKCOFO*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::KHPOKIKCOFO*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPJPPOMHPDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJPPOMHPDP___C_CTOR_OFFSET))(this);
		}

		::System::Void _Cleanup_b__3_0(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + KPJPPOMHPDP___C__CLEANUP_B__3_0_OFFSET))(this, a1);
		}

	};
