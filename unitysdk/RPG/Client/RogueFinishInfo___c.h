#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALBLEFHHJIC;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEFINISHINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDEF54A0)
#define RPG_CLIENT_ROGUEFINISHINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDEF54E0)
#define RPG_CLIENT_ROGUEFINISHINFO___C__GET_RECORDAVATARS_B__62_0_OFFSET UNITYSDK_OFFSET(0xDEF54F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFinishInfo___c_TypeDefinitionIndex = 67457;

	class RogueFinishInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::ALBLEFHHJIC*>** StaticGet___9__62_0()
		{
			return (::System::Comparison_1<::ALBLEFHHJIC*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63300);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63308);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _get_RecordAvatars_b__62_0(::ALBLEFHHJIC* a1, ::ALBLEFHHJIC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::ALBLEFHHJIC*, ::ALBLEFHHJIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO___C__GET_RECORDAVATARS_B__62_0_OFFSET))(this, a1, a2);
		}

	};
}
