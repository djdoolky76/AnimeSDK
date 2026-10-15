#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/OutlinePost/TrainPartyBuildOutlineState.h"
#include "unitysdk/System/Object.h"
class GJCFMFEAEBG_CDBDNCNBDBC;
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define GJCFMFEAEBG_AEOMOEJCPHB_OFFSET UNITYSDK_OFFSET(0x15A50DD0)
#define GJCFMFEAEBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A511F0)
#define GJCFMFEAEBG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A507D0)
#define GJCFMFEAEBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A50D50)
#define GJCFMFEAEBG_GPOOBEJLGOG_OFFSET UNITYSDK_OFFSET(0x15A50900)
#define GJCFMFEAEBG_HPNKDJDJMLN_OFFSET UNITYSDK_OFFSET(0x15A50CF0)
#define GJCFMFEAEBG_IILIABMPCNB_OFFSET UNITYSDK_OFFSET(0x15A50F50)
#define GJCFMFEAEBG_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0x15A51010)
#define GJCFMFEAEBG_NLHPBAOOMDK_OFFSET UNITYSDK_OFFSET(0x15A50E20)

inline static constexpr unsigned int GJCFMFEAEBG_TypeDefinitionIndex = 74370;

	class GJCFMFEAEBG : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GHKKPFEJLBP; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* ABAJIOEFDFB; // 0x18
		::GJCFMFEAEBG_CDBDNCNBDBC* JJBOPOPCOCH; // 0x20
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* FJECIBLPPIJ; // 0x28
		::UnityEngine::MeshRenderer* JAMDAALMOAL; // 0x30
		::UnityEngine::Material* NCNJEKDLNEN; // 0x38
		::GJCFMFEAEBG_CDBDNCNBDBC* AOKKCIPBODJ; // 0x40
		::GJCFMFEAEBG_CDBDNCNBDBC* LKGBNJEFHLB; // 0x48
		::System::Boolean AABHPGANPJG; // 0x50
		static ::Il2CppArray<::System::Int32>** StaticGet_DPOBOPKPMHI()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "GJCFMFEAEBG")->GetStaticField(0x689A0);
		}

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::MeshRenderer* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::MeshRenderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJCFMFEAEBG_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_DISPOSE_OFFSET))(this);
		}

		::System::Void JIFPPKNBGMH(::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_JIFPPKNBGMH_OFFSET))(this, a1);
		}

		::GJCFMFEAEBG_CDBDNCNBDBC* HPNKDJDJMLN(::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState a1)
		{
			return ((::GJCFMFEAEBG_CDBDNCNBDBC*(*)(::PVOID, ::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_HPNKDJDJMLN_OFFSET))(this, a1);
		}

		::System::Boolean GPOOBEJLGOG(::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_GPOOBEJLGOG_OFFSET))(this, a1);
		}

		::System::Void AEOMOEJCPHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_AEOMOEJCPHB_OFFSET))(this);
		}

		::System::Void NLHPBAOOMDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_NLHPBAOOMDK_OFFSET))(this);
		}

		::System::Void IILIABMPCNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCFMFEAEBG_IILIABMPCNB_OFFSET))(this);
		}

	};
