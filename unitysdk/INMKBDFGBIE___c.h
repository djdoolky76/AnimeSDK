#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class INMKBDFGBIE;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define INMKBDFGBIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5F7C80)
#define INMKBDFGBIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F7CB0)
#define INMKBDFGBIE___C___CREATETRIGGER_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A5F7CC0)

inline static constexpr unsigned int INMKBDFGBIE___c_TypeDefinitionIndex = 79403;

	class INMKBDFGBIE___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::INMKBDFGBIE*, ::HIOEAKHGILF*>** StaticGet___9__2_0()
		{
			return (::System::Action_2<::INMKBDFGBIE*, ::HIOEAKHGILF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56A80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INMKBDFGBIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMKBDFGBIE___C_CTOR_OFFSET))(this);
		}

		::System::Void __CreateTrigger_b__2_0(::INMKBDFGBIE* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMKBDFGBIE*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + INMKBDFGBIE___C___CREATETRIGGER_B__2_0_OFFSET))(this, a1, a2);
		}

	};
