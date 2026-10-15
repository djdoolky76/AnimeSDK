#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOLEHHMMIC;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB0A480)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB0A4C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__STARTTRACKPHOTO_B__14_0_OFFSET UNITYSDK_OFFSET(0xDB0A4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphSystem___c_TypeDefinitionIndex = 60918;

	class PhotoGraphSystem___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::HPOLEHHMMIC*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::HPOLEHHMMIC*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19FB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _StartTrackPhoto_b__14_0(::HPOLEHHMMIC* a1, ::HPOLEHHMMIC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HPOLEHHMMIC*, ::HPOLEHHMMIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__STARTTRACKPHOTO_B__14_0_OFFSET))(this, a1, a2);
		}

	};
}
