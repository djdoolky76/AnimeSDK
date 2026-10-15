#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoNPCDirectionDissolve_DissolveSpace.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_AIKEKIGPNHM_OFFSET UNITYSDK_OFFSET(0xD84EAC0)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD84F730)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD84F720)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_HDFKAKEOIOI_OFFSET UNITYSDK_OFFSET(0xD84EB30)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_HNJCLJMEAJJ_OFFSET UNITYSDK_OFFSET(0xD84EE20)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_HPLICBEPHAD_OFFSET UNITYSDK_OFFSET(0xD84E990)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_NECNKDDOHCG_OFFSET UNITYSDK_OFFSET(0xD84E830)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD84F510)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD84DE20)
#define RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD84E7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNPCDirectionDissolve_TypeDefinitionIndex = 70156;

	class MonoNPCDirectionDissolve : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single ONJLDCPDKFD; // 0x18
		::System::Boolean EnableDissolve; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::Client::MonoNPCDirectionDissolve_DissolveSpace _DissolveSpace; // 0x20
		::System::Boolean DissolveInited; // 0x24
		::System::Byte _padding1[0x3];
		::UnityEngine::Transform* Root_M; // 0x28
		::System::Single Root_MCenterAdjustment; // 0x30
		::UnityEngine::Vector3 LocalDissolveDirection; // 0x34
		::UnityEngine::Transform* DissolveTargetPlanet; // 0x40
		::System::Boolean UpdateAlways; // 0x48
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* PMAFPFMBANE; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GBMCCNEFHDH; // 0x58
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* KDBLOEPJABN; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* CHIOGGEOPGH; // 0x68
		::System::Collections::Generic::List_1<::System::Boolean>* NJHNNGPOPKB; // 0x70
		::UnityEngine::Vector3 FGNLPKCCAND; // 0x78
		::UnityEngine::Vector3 KABELIELBKC; // 0x84
		::UnityEngine::Bounds BMKHMEDKICK; // 0x90
		static ::System::Int32* StaticGet_GOMOOAMCEKI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoNPCDirectionDissolve")->GetStaticField(0x14F80);
		}

		static ::System::Int32* StaticGet_FKFMIGBKIBH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoNPCDirectionDissolve")->GetStaticField(0x14F84);
		}

		static ::System::Int32* StaticGet_GHGPBLGILBL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoNPCDirectionDissolve")->GetStaticField(0x14F88);
		}

		static ::System::Int32* StaticGet_JAKACKPFAFN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoNPCDirectionDissolve")->GetStaticField(0x14F8C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_ONENABLE_OFFSET))(this);
		}

		::System::Void NECNKDDOHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_NECNKDDOHCG_OFFSET))(this);
		}

		::System::Void HPLICBEPHAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_HPLICBEPHAD_OFFSET))(this);
		}

		::System::Boolean AIKEKIGPNHM(::UnityEngine::Camera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_AIKEKIGPNHM_OFFSET))(this, a1);
		}

		::System::Boolean HDFKAKEOIOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_HDFKAKEOIOI_OFFSET))(this);
		}

		::System::Void HNJCLJMEAJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_HNJCLJMEAJJ_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCDIRECTIONDISSOLVE_ONDISABLE_OFFSET))(this);
		}

	};
}
