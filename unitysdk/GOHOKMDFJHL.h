#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
class BFDGCNFEFBC;
class BNGHOKMIDGD;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class SphereCollider; }

#define GOHOKMDFJHL_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0x15B26720)
#define GOHOKMDFJHL_ANJPPHFAGEE_OFFSET UNITYSDK_OFFSET(0x15B27330)
#define GOHOKMDFJHL_BHKLKIFHGAA_OFFSET UNITYSDK_OFFSET(0x15B27060)
#define GOHOKMDFJHL_BLGGNACPFBF_OFFSET UNITYSDK_OFFSET(0x15B27430)
#define GOHOKMDFJHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B275C0)
#define GOHOKMDFJHL_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B26600)
#define GOHOKMDFJHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B27570)
#define GOHOKMDFJHL_EICIBKHOECO_OFFSET UNITYSDK_OFFSET(0x15B26330)
#define GOHOKMDFJHL_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x15B26EF0)
#define GOHOKMDFJHL_HOOJOPPKHHD_OFFSET UNITYSDK_OFFSET(0x15B26450)
#define GOHOKMDFJHL_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0x15B26780)
#define GOHOKMDFJHL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15B27020)
#define GOHOKMDFJHL_LGIEKLKEFBO_OFFSET UNITYSDK_OFFSET(0x15B273B0)
#define GOHOKMDFJHL_LJHIOIGKGMG_OFFSET UNITYSDK_OFFSET(0x15B26F40)
#define GOHOKMDFJHL_MFBICBMBJEM_OFFSET UNITYSDK_OFFSET(0x15B26B20)
#define GOHOKMDFJHL_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0x15B26FE0)
#define GOHOKMDFJHL_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15B26FA0)

inline static constexpr unsigned int GOHOKMDFJHL_TypeDefinitionIndex = 60795;

	class GOHOKMDFJHL : public ::System::Object
	{
	public:
		::BFDGCNFEFBC* NLAEJIIDEJC; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::System::Collections::Generic::List_1<::BFDGCNFEFBC*>* DPAFEHAOOGL; // 0x20
		::RPG::GameCore::CharacterModelComponent* OFGPBOKLGJJ; // 0x28
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x30
		::BNGHOKMIDGD* EPMPEFJBAPM; // 0x38
		::UnityEngine::SphereCollider* HKPKGJNFEDK; // 0x40
		::System::Boolean MCAPIAKDMAA; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single OIBEBCMDGPN; // 0x4C
		::System::Single HBDJCFFDGDD; // 0x50
		::RPG::GameCore::TimeRewindState MPGEHKEOCAK; // 0x54
		static ::System::String** StaticGet_PFAGLLLJLFO()
		{
			return (::System::String**)UnitySDK::FromName("", "GOHOKMDFJHL")->GetStaticField(0x6E7E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOHOKMDFJHL_CCTOR_OFFSET))();
		}

		::System::Void EICIBKHOECO(::RPG::GameCore::GameEntity* a1, ::BNGHOKMIDGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::BNGHOKMIDGD*))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_EICIBKHOECO_OFFSET))(this, a1, a2);
		}

		::System::Void HOOJOPPKHHD(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a5, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::System::Single))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_HOOJOPPKHHD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_CLEAR_OFFSET))(this);
		}

		::System::Void AJKLODBHJNC(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_AJKLODBHJNC_OFFSET))(this, a1);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_IHKPOLCCPPL_OFFSET))(this, a1, a2);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_HDOFEPFEOEB_OFFSET))(this);
		}

		::BFDGCNFEFBC* LJHIOIGKGMG(::System::Single a1)
		{
			return ((::BFDGCNFEFBC*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_LJHIOIGKGMG_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_MONODNDCLJI_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void MFBICBMBJEM(::BFDGCNFEFBC* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::BFDGCNFEFBC*, ::System::Single))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_MFBICBMBJEM_OFFSET))(this, a1, a2);
		}

		::System::Void BHKLKIFHGAA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_BHKLKIFHGAA_OFFSET))(this, a1);
		}

		::System::Void BLGGNACPFBF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_BLGGNACPFBF_OFFSET))(this, a1);
		}

		::System::Void LGIEKLKEFBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_LGIEKLKEFBO_OFFSET))(this);
		}

		::System::Void ANJPPHFAGEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHOKMDFJHL_ANJPPHFAGEE_OFFSET))(this);
		}

	};
