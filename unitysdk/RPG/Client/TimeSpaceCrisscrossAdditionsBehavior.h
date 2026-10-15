#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IDEFMHBFDKL;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsMonoPlugin; }
namespace RPG::Client { class WorldSpaceTileParticlesMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_AAEJLJCHHDG_OFFSET UNITYSDK_OFFSET(0xE289150)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_AAHGABGAKGG_OFFSET UNITYSDK_OFFSET(0xE28B460)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_ADHFOKHAIJN_OFFSET UNITYSDK_OFFSET(0xE2899C0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_BBJHMEIANMH_OFFSET UNITYSDK_OFFSET(0xE28B5B0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_BDJAFOLPHCG_OFFSET UNITYSDK_OFFSET(0xE28A190)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE28CFD0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE28D630)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_EENDEOAHFJP_OFFSET UNITYSDK_OFFSET(0xE28C740)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_EKILOLBBHIC_OFFSET UNITYSDK_OFFSET(0xE28C810)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_FEOFIDLFMFM_OFFSET UNITYSDK_OFFSET(0xE28D580)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_GCBKENOMFMI_OFFSET UNITYSDK_OFFSET(0xE28C030)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE28A110)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_HLOFLONHFBG_OFFSET UNITYSDK_OFFSET(0xE28C940)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE28D4C0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_KEGEOCHMIDP_OFFSET UNITYSDK_OFFSET(0xE289CA0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE28CD20)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_MCMJDIJAPGA_OFFSET UNITYSDK_OFFSET(0xE28CC60)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE28CF80)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE28D410)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE28D520)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_PBFPFFBFJEF_OFFSET UNITYSDK_OFFSET(0xE28C9A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE28CF10)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_PELICLCOHDJ_OFFSET UNITYSDK_OFFSET(0xE28C8E0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_PNNCEJKGDJM_OFFSET UNITYSDK_OFFSET(0xE28A8A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE28D3D0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE28CDD0)

namespace RPG::Client
{
	class TimeSpaceCrisscrossAdditionsBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _IsRegisted; // 0x38
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::IDEFMHBFDKL*>* _TSCRendererA; // 0x40
		::System::Collections::Generic::List_1<::IDEFMHBFDKL*>* _TSCRendererB; // 0x48
		::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>* _CollectorAllRenderersA; // 0x50
		::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>* _CollectorAllRenderersB; // 0x58
		::RPG::Client::WorldSpaceTileParticlesMonoPlugin* _WorldParticleA; // 0x60
		::RPG::Client::WorldSpaceTileParticlesMonoPlugin* _WorldParticleB; // 0x68
		::UnityEngine::GameObject* _WaterFillGOA; // 0x70
		::UnityEngine::Material* _WaterFillerMatA; // 0x78
		::UnityEngine::GameObject* _WaterFillGOB; // 0x80
		::UnityEngine::Material* _WaterFillerMatB; // 0x88
		::UnityEngine::GameObject* _WaterFillGOC; // 0x90
		::UnityEngine::Material* _WaterFillerMatC; // 0x98
		static ::UnityEngine::Mesh** StaticGet__ConeMesh()
		{
			return (::UnityEngine::Mesh**)UnitySDK::FromName("RPG.Client", "TimeSpaceCrisscrossAdditionsBehavior")->GetStaticField(0x1B2F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* AAEJLJCHHDG(::System::Boolean a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_AAEJLJCHHDG_OFFSET))(this, a1);
		}

		::System::Void ADHFOKHAIJN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_ADHFOKHAIJN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KEGEOCHMIDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_KEGEOCHMIDP_OFFSET))(this);
		}

		::System::Void BDJAFOLPHCG(::UnityEngine::GameObject* a1, ::UnityEngine::Material* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_BDJAFOLPHCG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void PNNCEJKGDJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_PNNCEJKGDJM_OFFSET))(this);
		}

		::System::Void AAHGABGAKGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_AAHGABGAKGG_OFFSET))(this);
		}

		::System::Void BBJHMEIANMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_BBJHMEIANMH_OFFSET))(this);
		}

		::System::Void GCBKENOMFMI(::UnityEngine::Transform* a1, ::RPG::Client::TSCRendererType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_GCBKENOMFMI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EENDEOAHFJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_EENDEOAHFJP_OFFSET))(this);
		}

		::System::Void EKILOLBBHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_EKILOLBBHIC_OFFSET))(this);
		}

		::System::Void PELICLCOHDJ(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_PELICLCOHDJ_OFFSET))(this, a1, a2);
		}

		::System::Void HLOFLONHFBG(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_HLOFLONHFBG_OFFSET))(this, a1, a2);
		}

		::System::Void PBFPFFBFJEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_PBFPFFBFJEF_OFFSET))(this);
		}

		::System::Void MCMJDIJAPGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_MCMJDIJAPGA_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean FEOFIDLFMFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_FEOFIDLFMFM_OFFSET))(this);
		}

		::RPG::Client::TimeSpaceCrisscrossAdditionsMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TimeSpaceCrisscrossAdditionsMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
