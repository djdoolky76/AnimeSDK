#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
class DENDPLEJIPM;
namespace RPG::Client { class Effect_DynamicWavesManager; }
namespace RPG::Client { class MonoSurfaceInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture2D; }

#define DENDPLEJIPM_ALDLLICFOAG_OFFSET UNITYSDK_OFFSET(0xE51E410)
#define DENDPLEJIPM_APLGLEGFKOH_OFFSET UNITYSDK_OFFSET(0xE51D9D0)
#define DENDPLEJIPM_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xE51CDA0)
#define DENDPLEJIPM_BLLOCKFIECN_OFFSET UNITYSDK_OFFSET(0xE51D250)
#define DENDPLEJIPM_CPLIEDLFHJH_OFFSET UNITYSDK_OFFSET(0xE51CF80)
#define DENDPLEJIPM_CTOR_OFFSET UNITYSDK_OFFSET(0xE51BB50)
#define DENDPLEJIPM_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xE51C7C0)
#define DENDPLEJIPM_DKHGDFLPHBC_OFFSET UNITYSDK_OFFSET(0xE51E0E0)
#define DENDPLEJIPM_EEADOKAMKJA_OFFSET UNITYSDK_OFFSET(0xE51E540)
#define DENDPLEJIPM_EEFLBJIPBMO_OFFSET UNITYSDK_OFFSET(0xE51DE30)
#define DENDPLEJIPM_EGNJMGGBBOL_OFFSET UNITYSDK_OFFSET(0xE51CDF0)
#define DENDPLEJIPM_EHPJFPFAJEG_OFFSET UNITYSDK_OFFSET(0xE51BEA0)
#define DENDPLEJIPM_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xE51BD40)
#define DENDPLEJIPM_GIANFLHEIMC_OFFSET UNITYSDK_OFFSET(0xE51D920)
#define DENDPLEJIPM_INAFDEPDBBJ_OFFSET UNITYSDK_OFFSET(0xE51E360)
#define DENDPLEJIPM_KAJGIDEKPDI_OFFSET UNITYSDK_OFFSET(0xE51CC20)
#define DENDPLEJIPM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE51BE40)
#define DENDPLEJIPM_LANDAMADFLB_OFFSET UNITYSDK_OFFSET(0xE51D730)
#define DENDPLEJIPM_MJNOOAGLABJ_OFFSET UNITYSDK_OFFSET(0xE51DA50)
#define DENDPLEJIPM_NAKMPIOEMMG_OFFSET UNITYSDK_OFFSET(0xE51DB20)
#define DENDPLEJIPM_NLCENPCHPBG_OFFSET UNITYSDK_OFFSET(0xE51CCE0)
#define DENDPLEJIPM_OBLFCAJIJBH_OFFSET UNITYSDK_OFFSET(0xE51E480)
#define DENDPLEJIPM_PNBJPMENAIH_OFFSET UNITYSDK_OFFSET(0xE51E250)
#define DENDPLEJIPM_PPEFHHCAEDB_OFFSET UNITYSDK_OFFSET(0xE51BDC0)

inline static constexpr unsigned int DENDPLEJIPM_TypeDefinitionIndex = 69512;

	class DENDPLEJIPM : public ::System::Object
	{
	public:
		::UnityEngine::ComputeShader* GMIAMAPBIEH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* BFPKJAJCALI; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::MonoSurfaceInfo*>* GBMLJEOOMAM; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SurfaceType, ::System::String*>* LIBFAHMAMFL; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager*>* CHFEJGOMNFD; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SurfaceType, ::System::String*>* BBEKMIJHEGA; // 0x38
		::System::Boolean IAKEBNJDMEG; // 0x40
		static ::DENDPLEJIPM** StaticGet_EMLNOINPICJ()
		{
			return (::DENDPLEJIPM**)UnitySDK::FromName("", "DENDPLEJIPM")->GetStaticField(0x603B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDPLEJIPM_CTOR_OFFSET))(this);
		}

		static ::DENDPLEJIPM* GGBLHEHJBDO()
		{
			return ((::DENDPLEJIPM*(*)())((::PBYTE)hIl2Cpp + DENDPLEJIPM_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void PPEFHHCAEDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDPLEJIPM_PPEFHHCAEDB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDPLEJIPM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDPLEJIPM_DFFCHNLKELO_OFFSET))(this);
		}

		::System::String* KAJGIDEKPDI(::RPG::GameCore::SurfaceType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + DENDPLEJIPM_KAJGIDEKPDI_OFFSET))(this, a1);
		}

		::System::String* NLCENPCHPBG(::RPG::GameCore::SurfaceType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + DENDPLEJIPM_NLCENPCHPBG_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DENDPLEJIPM_BJMNKLGEMPM_OFFSET))(this, a1);
		}

		::System::Void EHPJFPFAJEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDPLEJIPM_EHPJFPFAJEG_OFFSET))(this);
		}

		::System::Void CPLIEDLFHJH(::System::Int32 a1, ::System::Int32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + DENDPLEJIPM_CPLIEDLFHJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BLLOCKFIECN(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + DENDPLEJIPM_BLLOCKFIECN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 LANDAMADFLB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DENDPLEJIPM_LANDAMADFLB_OFFSET))(this, a1, a2);
		}

		::System::Void GIANFLHEIMC(::System::Int32 a1, ::RPG::Client::MonoSurfaceInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MonoSurfaceInfo*))((::PBYTE)hIl2Cpp + DENDPLEJIPM_GIANFLHEIMC_OFFSET))(this, a1, a2);
		}

		::System::Void APLGLEGFKOH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DENDPLEJIPM_APLGLEGFKOH_OFFSET))(this, a1);
		}

		::RPG::GameCore::SurfaceType MJNOOAGLABJ(::System::Int32 a1)
		{
			return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DENDPLEJIPM_MJNOOAGLABJ_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> NAKMPIOEMMG(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::RPG::GameCore::SurfaceType a3)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + DENDPLEJIPM_NAKMPIOEMMG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::SurfaceType EEFLBJIPBMO(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::SurfaceType a3)
		{
			return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + DENDPLEJIPM_EEFLBJIPBMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EGNJMGGBBOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DENDPLEJIPM_EGNJMGGBBOL_OFFSET))(this, a1);
		}

		::System::Boolean DKHGDFLPHBC(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DENDPLEJIPM_DKHGDFLPHBC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color PNBJPMENAIH(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DENDPLEJIPM_PNBJPMENAIH_OFFSET))(this, a1);
		}

		::System::Void INAFDEPDBBJ(::RPG::Client::Effect_DynamicWavesManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_DynamicWavesManager*))((::PBYTE)hIl2Cpp + DENDPLEJIPM_INAFDEPDBBJ_OFFSET))(this, a1);
		}

		::System::Void ALDLLICFOAG(::RPG::Client::Effect_DynamicWavesManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_DynamicWavesManager*))((::PBYTE)hIl2Cpp + DENDPLEJIPM_ALDLLICFOAG_OFFSET))(this, a1);
		}

		::System::Void OBLFCAJIJBH(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DENDPLEJIPM_OBLFCAJIJBH_OFFSET))(this, a1);
		}

		::System::Void EEADOKAMKJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDPLEJIPM_EEADOKAMKJA_OFFSET))(this);
		}

	};
