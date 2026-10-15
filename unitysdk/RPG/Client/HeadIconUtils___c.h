#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class HeadIconDisplayData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HEADICONUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2FE970)
#define RPG_CLIENT_HEADICONUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2FE9B0)
#define RPG_CLIENT_HEADICONUTILS___C__SORTHEADICONDISPLAYDATALIST_B__4_0_OFFSET UNITYSDK_OFFSET(0xD2FE9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadIconUtils___c_TypeDefinitionIndex = 65651;

	class HeadIconUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::HeadIconDisplayData*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::HeadIconDisplayData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11010);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SortHeadIconDisplayDataList_b__4_0(::RPG::Client::HeadIconDisplayData* a1, ::RPG::Client::HeadIconDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HeadIconDisplayData*, ::RPG::Client::HeadIconDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS___C__SORTHEADICONDISPLAYDATALIST_B__4_0_OFFSET))(this, a1, a2);
		}

	};
}
