#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class Effect_PropDrawInstanceMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD61480)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD61B60)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD613A0)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_HBNAFGOHIKH_OFFSET UNITYSDK_OFFSET(0xCD61AF0)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_IKBMOFDJMIF_OFFSET UNITYSDK_OFFSET(0xCD61660)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD61500)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD60FC0)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD61420)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCD61600)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD61560)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD61050)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_PFCFIMNIIJG_OFFSET UNITYSDK_OFFSET(0xCD61810)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCD615C0)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD616B0)

namespace RPG::Client
{
	class Effect_PropDrawInstanceBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _InstanceMatrices; // 0x38
		::UnityEngine::Mesh* _InstanceMesh; // 0x40
		::UnityEngine::Material* _InstanceMaterial; // 0x48
		::UnityEngine::Bounds _BoundWS; // 0x50
		::System::Boolean _IsBoundsInit; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void IKBMOFDJMIF(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_IKBMOFDJMIF_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds HBNAFGOHIKH()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_HBNAFGOHIKH_OFFSET))(this);
		}

		::System::Void PFCFIMNIIJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_PFCFIMNIIJG_OFFSET))(this);
		}

		::RPG::Client::Effect_PropDrawInstanceMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_PropDrawInstanceMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
