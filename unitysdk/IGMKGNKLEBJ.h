#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class INMMPMDELKE;
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define IGMKGNKLEBJ_AJJGFDNGIMF_OFFSET UNITYSDK_OFFSET(0x16414050)
#define IGMKGNKLEBJ_AOCKLBFENAE_OFFSET UNITYSDK_OFFSET(0x16413840)
#define IGMKGNKLEBJ_APLFGJABIJN_OFFSET UNITYSDK_OFFSET(0x16413F90)
#define IGMKGNKLEBJ_BADJIOCPFCN_OFFSET UNITYSDK_OFFSET(0x16411F10)
#define IGMKGNKLEBJ_BFGOLGGEKOD_OFFSET UNITYSDK_OFFSET(0x16411EC0)
#define IGMKGNKLEBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x16414400)
#define IGMKGNKLEBJ_CKGBDOLJMAE_OFFSET UNITYSDK_OFFSET(0x16413C40)
#define IGMKGNKLEBJ_DAELJFFEDAD_OFFSET UNITYSDK_OFFSET(0x16411940)
#define IGMKGNKLEBJ_EDMCHJFGMNL_OFFSET UNITYSDK_OFFSET(0x16413480)
#define IGMKGNKLEBJ_EJPFHOMDPLJ_OFFSET UNITYSDK_OFFSET(0x16411FD0)
#define IGMKGNKLEBJ_HHKHFHDJLHM_OFFSET UNITYSDK_OFFSET(0x16413650)
#define IGMKGNKLEBJ_HIHNCNCPPIH_OFFSET UNITYSDK_OFFSET(0x16413E90)
#define IGMKGNKLEBJ_KDGEKFILBGK_OFFSET UNITYSDK_OFFSET(0x16413D90)
#define IGMKGNKLEBJ_NAMPHMJPHJP_OFFSET UNITYSDK_OFFSET(0x16412A00)
#define IGMKGNKLEBJ_OJPIMDMEHCI_OFFSET UNITYSDK_OFFSET(0x164137E0)

inline static constexpr unsigned int IGMKGNKLEBJ_TypeDefinitionIndex = 76699;

	class IGMKGNKLEBJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_LKGJEKKDLPL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)UnitySDK::FromName("", "IGMKGNKLEBJ")->GetStaticField(0x5DE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_CCTOR_OFFSET))();
		}

		static ::System::Void DAELJFFEDAD(::INMMPMDELKE* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::INMMPMDELKE*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_DAELJFFEDAD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EJPFHOMDPLJ(::INMMPMDELKE* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::INMMPMDELKE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_EJPFHOMDPLJ_OFFSET))(a1, a2);
		}

		static ::System::Void NAMPHMJPHJP(::INMMPMDELKE* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::INMMPMDELKE*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_NAMPHMJPHJP_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* EDMCHJFGMNL(::INMMPMDELKE* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::INMMPMDELKE*))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_EDMCHJFGMNL_OFFSET))(a1);
		}

		static ::System::Int32 BFGOLGGEKOD(::Entitas::IEntity* a1)
		{
			return ((::System::Int32(*)(::Entitas::IEntity*))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_BFGOLGGEKOD_OFFSET))(a1);
		}

		static ::System::Void HHKHFHDJLHM(::INMMPMDELKE* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::INMMPMDELKE*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_HHKHFHDJLHM_OFFSET))(a1, a2);
		}

		static ::System::UInt32 BADJIOCPFCN(::INMMPMDELKE* a1)
		{
			return ((::System::UInt32(*)(::INMMPMDELKE*))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_BADJIOCPFCN_OFFSET))(a1);
		}

		static ::System::Void OJPIMDMEHCI(::INMMPMDELKE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::INMMPMDELKE*, ::System::UInt32))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_OJPIMDMEHCI_OFFSET))(a1, a2);
		}

		static ::System::Void AOCKLBFENAE(::INMMPMDELKE* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::INMMPMDELKE*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_AOCKLBFENAE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CKGBDOLJMAE(::INMMPMDELKE* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::INMMPMDELKE*, ::System::Int32))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_CKGBDOLJMAE_OFFSET))(a1, a2);
		}

		static ::System::Void KDGEKFILBGK(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::INMMPMDELKE*))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_KDGEKFILBGK_OFFSET))(a1);
		}

		static ::System::Void HIHNCNCPPIH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_HIHNCNCPPIH_OFFSET))();
		}

		static ::System::Boolean APLFGJABIJN(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::INMMPMDELKE*))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_APLFGJABIJN_OFFSET))(a1);
		}

		static ::System::Void AJJGFDNGIMF(::INMMPMDELKE* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::INMMPMDELKE*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IGMKGNKLEBJ_AJJGFDNGIMF_OFFSET))(a1, a2, a3, a4);
		}

	};
