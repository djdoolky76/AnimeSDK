#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define BHHPHPGCODJ_LCKIEFNMIBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB48B890)
#define BHHPHPGCODJ_LCKIEFNMIBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB48B8D0)
#define BHHPHPGCODJ_LCKIEFNMIBJ___C__CREATESORTED_B__4_0_OFFSET UNITYSDK_OFFSET(0xB48B8E0)

	class BHHPHPGCODJ_LCKIEFNMIBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6EF70);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6EF78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHHPHPGCODJ_LCKIEFNMIBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_LCKIEFNMIBJ___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* _CreateSorted_b__4_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_LCKIEFNMIBJ___C__CREATESORTED_B__4_0_OFFSET))(this, a1);
		}

	};
