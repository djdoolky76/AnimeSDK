#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CDNPFKDLFFB;
class INFENGJKFBI;
namespace GeometryEdit { class Prism; }
namespace RPG::Client { class FallingObjectTemplate; }
namespace RPG::Client { class GeneralAudioItem; }
namespace RPG::Client { class RandomFallingObjectMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_ABHKAFLNKIK_OFFSET UNITYSDK_OFFSET(0xDE506D0)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_AMEAMDOCBDF_OFFSET UNITYSDK_OFFSET(0xDE50850)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_BINJGMMDDDE_OFFSET UNITYSDK_OFFSET(0xDE503E0)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE52580)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xDE51BA0)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDE52570)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0xDE514B0)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xDE503A0)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_GKIIACLMMLF_OFFSET UNITYSDK_OFFSET(0xDE51670)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_INICMMDMELN_OFFSET UNITYSDK_OFFSET(0xDE51320)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_JAMPPDMLIIG_OFFSET UNITYSDK_OFFSET(0xDE4FFD0)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xDE51C00)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_KABGLAIMNLB_OFFSET UNITYSDK_OFFSET(0xDE51190)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDE51890)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xDE51B20)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_NDPBIEFMMMK_OFFSET UNITYSDK_OFFSET(0xDE50CF0)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xDE52510)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_NIBEAIACAPG_OFFSET UNITYSDK_OFFSET(0xDE50C10)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xDE51C60)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xDE51AC0)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xDE524D0)
#define RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xDE51CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RandomFallingObjectBehavior_TypeDefinitionIndex = 70938;

	class RandomFallingObjectBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::GeometryEdit::Prism* _Prism; // 0x38
		::System::Collections::Generic::List_1<::INFENGJKFBI*>* _FallingObjects; // 0x40
		::System::Collections::Generic::List_1<::CDNPFKDLFFB*>* _SplashEffectPool; // 0x48
		::System::Collections::Generic::List_1<::CDNPFKDLFFB*>* _PlayingSplashPool; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GeneralAudioItem*>* _AudioList; // 0x58
		::System::Single _DurationTime; // 0x60
		::System::Boolean IfPreWarmFinish; // 0x64
		static ::System::Int32* StaticGet__MaxSplashCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RandomFallingObjectBehavior")->GetStaticField(0x13320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 JAMPPDMLIIG(::System::Boolean a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_JAMPPDMLIIG_OFFSET))(this, a1);
		}

		::RPG::Client::FallingObjectTemplate* BINJGMMDDDE()
		{
			return ((::RPG::Client::FallingObjectTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_BINJGMMDDDE_OFFSET))(this);
		}

		::System::Void ABHKAFLNKIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_ABHKAFLNKIK_OFFSET))(this);
		}

		::System::Void AMEAMDOCBDF(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_AMEAMDOCBDF_OFFSET))(this, a1, a2);
		}

		::System::Void NIBEAIACAPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_NIBEAIACAPG_OFFSET))(this, a1);
		}

		::System::Void NDPBIEFMMMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_NDPBIEFMMMK_OFFSET))(this);
		}

		::System::Void KABGLAIMNLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_KABGLAIMNLB_OFFSET))(this);
		}

		::System::Void INICMMDMELN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_INICMMDMELN_OFFSET))(this);
		}

		::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_FMPAOKGPMNG_OFFSET))(this);
		}

		::System::Void GKIIACLMMLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_GKIIACLMMLF_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::RPG::Client::RandomFallingObjectMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::RandomFallingObjectMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMFALLINGOBJECTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
