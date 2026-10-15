#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_AVATARGROWTHGUIDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6EE890)
#define RPG_CLIENT_AVATARGROWTHGUIDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC6EE8D0)
#define RPG_CLIENT_AVATARGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xC6EE8E0)

namespace RPG::Client
{
	class AvatarGrowthGuide___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5AF70);
		}

		static ::System::Predicate_1<::NHPAANINLPK*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::NHPAANINLPK*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5AF78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsGrowable_b__2_0(::NHPAANINLPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHPAANINLPK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET))(this, a1);
		}

	};
}
