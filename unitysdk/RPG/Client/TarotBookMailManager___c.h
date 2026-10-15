#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TarotMailData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TAROTBOOKMAILMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1B0C50)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE1B0C90)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER___C__MARKSEENANDGETALLDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0xE1B0CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookMailManager___c_TypeDefinitionIndex = 68048;

	class TarotBookMailManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE340);
		}

		static ::System::Comparison_1<::RPG::Client::TarotMailData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::TarotMailData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE348);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _MarkSeenAndGetAllData_b__9_0(::RPG::Client::TarotMailData* a1, ::RPG::Client::TarotMailData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotMailData*, ::RPG::Client::TarotMailData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER___C__MARKSEENANDGETALLDATA_B__9_0_OFFSET))(this, a1, a2);
		}

	};
}
