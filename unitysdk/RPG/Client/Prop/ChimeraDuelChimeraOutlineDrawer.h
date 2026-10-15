#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::Prop { class ChimeraDuelChimeraOutlineDrawer_OutlineConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC53380)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC532C0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_DBFIEIPFDPH_OFFSET UNITYSDK_OFFSET(0xDC4FBF0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_LJINMLEMHIP_OFFSET UNITYSDK_OFFSET(0xDC4F4B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelChimeraOutlineDrawer_TypeDefinitionIndex = 78328;

	class ChimeraDuelChimeraOutlineDrawer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Object*>* NLINFMLODMN; // 0x18
		::RPG::Client::Prop::ChimeraDuelChimeraOutlineDrawer_OutlineConfig* _HighlightOutlineConfig; // 0x20
		static ::System::Int32* StaticGet_AHDCEJGBNNO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelChimeraOutlineDrawer")->GetStaticField(0xB2E0);
		}

		static ::System::Int32* StaticGet_HBEFIMAAJHD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelChimeraOutlineDrawer")->GetStaticField(0xB2E4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_CCTOR_OFFSET))();
		}

		::System::Void LJINMLEMHIP(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_LJINMLEMHIP_OFFSET))(this, a1);
		}

		::System::Void DBFIEIPFDPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAOUTLINEDRAWER_DBFIEIPFDPH_OFFSET))(this);
		}

	};
}
