#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client::Prop { class ChimeraDuelChimeraModelView; }
namespace RPG::Client::Prop { class ChimeraDuelChimeraOutlineDrawer; }
namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView_VfxConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_BPIAGGKDFDA_OFFSET UNITYSDK_OFFSET(0xDC686D0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDC68780)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_DBFIEIPFDPH_OFFSET UNITYSDK_OFFSET(0xDC67920)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_FGGCHMDGAMB_OFFSET UNITYSDK_OFFSET(0xDC67CF0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_KHKPHCCMJPB_OFFSET UNITYSDK_OFFSET(0xDC684C0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_LJINMLEMHIP_OFFSET UNITYSDK_OFFSET(0xDC67B70)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_LJLFBNFAANP_OFFSET UNITYSDK_OFFSET(0xDC68620)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xDC67F70)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_OBBCCBEJEPP_OFFSET UNITYSDK_OFFSET(0xDC67970)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_OOIPADEAFDE_OFFSET UNITYSDK_OFFSET(0xDC68040)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopChimeraInstanceView_TypeDefinitionIndex = 78341;

	class ChimeraDuelShopChimeraInstanceView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraDuelChimeraModelView* Model; // 0x18
		::UnityEngine::Transform* InfoBillboardAnchor; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* _DitherEffects; // 0x28
		::System::Single _DitherAlpha; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* _VfxPlayer; // 0x38
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView_VfxConfig* _LevelUpVfx; // 0x40
		::RPG::Client::AttachPointMapping* _AttachPointMapping; // 0x48
		::UnityEngine::Material* _HollowMaterial; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _HiddenInHollow; // 0x58
		::RPG::Client::Prop::ChimeraDuelChimeraOutlineDrawer* _OutlineDrawer; // 0x60
		::System::Boolean KOHBNKJNKNH; // 0x68
		::System::Boolean AMKJCLBMNOP; // 0x69
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void KHKPHCCMJPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_KHKPHCCMJPB_OFFSET))(this);
		}

		::System::Void OBBCCBEJEPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_OBBCCBEJEPP_OFFSET))(this, a1);
		}

		::System::Void FGGCHMDGAMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_FGGCHMDGAMB_OFFSET))(this);
		}

		::System::Void OOIPADEAFDE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_OOIPADEAFDE_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void LJINMLEMHIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_LJINMLEMHIP_OFFSET))(this);
		}

		::System::Void DBFIEIPFDPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_DBFIEIPFDPH_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>* BPIAGGKDFDA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_BPIAGGKDFDA_OFFSET))(this);
		}

		::System::Void LJLFBNFAANP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_LJLFBNFAANP_OFFSET))(this);
		}

	};
}
