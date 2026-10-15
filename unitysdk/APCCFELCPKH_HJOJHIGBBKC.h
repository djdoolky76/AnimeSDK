#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/System/Object.h"
namespace Code::MonoBehavior::Level { class MonoTrainPartyBuildEffectSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define APCCFELCPKH_HJOJHIGBBKC_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x15BA3230)
#define APCCFELCPKH_HJOJHIGBBKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BA3AD0)
#define APCCFELCPKH_HJOJHIGBBKC_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA0760)
#define APCCFELCPKH_HJOJHIGBBKC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA0820)
#define APCCFELCPKH_HJOJHIGBBKC_EDMMDOLNANO_OFFSET UNITYSDK_OFFSET(0x15BA2050)
#define APCCFELCPKH_HJOJHIGBBKC_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0x15B9FE50)
#define APCCFELCPKH_HJOJHIGBBKC_GET_OVERLAYEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x15BA2010)
#define APCCFELCPKH_HJOJHIGBBKC_IBDILDIDDCI_OFFSET UNITYSDK_OFFSET(0x15BA2000)
#define APCCFELCPKH_HJOJHIGBBKC_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0x15BA20A0)
#define APCCFELCPKH_HJOJHIGBBKC_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0x15BA3050)
#define APCCFELCPKH_HJOJHIGBBKC_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15BA1F70)
#define APCCFELCPKH_HJOJHIGBBKC_OKMNIIMIEAI_1_OFFSET UNITYSDK_OFFSET(0x15BA3310)
#define APCCFELCPKH_HJOJHIGBBKC_OKMNIIMIEAI_OFFSET UNITYSDK_OFFSET(0x15BA3470)
#define APCCFELCPKH_HJOJHIGBBKC_PICCDHDLDOG_OFFSET UNITYSDK_OFFSET(0x15BA37A0)

inline static constexpr unsigned int APCCFELCPKH_HJOJHIGBBKC_TypeDefinitionIndex = 60241;

	class APCCFELCPKH_HJOJHIGBBKC : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::EAPGFKLGCDH>*>* APPIAANONPF; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x18
		static ::System::Int32* StaticGet_INCFEIDEIBO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HJOJHIGBBKC")->GetStaticField(0x14CE0);
		}

		static ::System::Int32* StaticGet_MDONPCCPPII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HJOJHIGBBKC")->GetStaticField(0x14CE4);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_CCTOR_OFFSET))();
		}

		::System::Boolean IBDILDIDDCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_IBDILDIDDCI_OFFSET))(this);
		}

		::System::String* get_OverlayEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_GET_OVERLAYEFFECTPATH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::GameObject* EDMMDOLNANO(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_EDMMDOLNANO_OFFSET))(this, a1);
		}

		::System::Void EPHFABNKFGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_EPHFABNKFGJ_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void LNGDBLEKGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_LNGDBLEKGHG_OFFSET))(this);
		}

		::System::Void AALCFBOGFKP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void IJEPAJIMDPA(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_IJEPAJIMDPA_OFFSET))(this, a1, a2);
		}

		::System::Void PICCDHDLDOG(::Code::MonoBehavior::Level::MonoTrainPartyBuildEffectSetting* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Code::MonoBehavior::Level::MonoTrainPartyBuildEffectSetting*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_PICCDHDLDOG_OFFSET))(this, a1, a2);
		}

		::System::Boolean OKMNIIMIEAI(::UnityEngine::Renderer* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_OKMNIIMIEAI_OFFSET))(this, a1, a2);
		}

		::System::Boolean OKMNIIMIEAI_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + APCCFELCPKH_HJOJHIGBBKC_OKMNIIMIEAI_1_OFFSET))(this, a1);
		}

	};
