#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_IIJDACIILDP_OFFSET UNITYSDK_OFFSET(0x180FD680)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x180FE250)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x180FD4E0)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x180FD590)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x180FD420)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_POFKIMBCKDB_OFFSET UNITYSDK_OFFSET(0x180FE2B0)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x180FD5D0)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x180FE200)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x180FE1A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginLineRenderersWithBlock_TypeDefinitionIndex = 58635;

	class MonoEffectPluginLineRenderersWithBlock : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_MINJKDIFLJH()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginLineRenderersWithBlock_TypeDefinitionIndex)->GetStaticField(0x52100);
		}
		// static const ::System::Int32 AAGJDCAKHFF = 0x40; // 0x0
		::System::Single maxLength; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* outgoingTransform; // 0x20
		::UnityEngine::LayerMask layerMask; // 0x28
		::System::Boolean updateOnStart; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single updateInterval; // 0x30
		::System::Single NOOKCECOBIK; // 0x34
		::System::Boolean HGBLNCDJJAL; // 0x38
		::System::Byte _padding2[0x7];
		::UnityEngine::Transform* endEffect; // 0x40
		::UnityEngine::Transform* blockEffect; // 0x48
		::Il2CppArray<::UnityEngine::LineRenderer*>* lineRenderers; // 0x50
		::System::Boolean JBBFEFOJDJO; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_UPDATE_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_LOFMNKAMILC_OFFSET))(this);
		}

		::System::Void IIJDACIILDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_IIJDACIILDP_OFFSET))(this);
		}

		::System::Void POFKIMBCKDB(::System::Boolean AMGAAHMANDM, ::UnityEngine::Transform* LFJLELJKNAA, ::System::Boolean IOKNPLAMIKB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_POFKIMBCKDB_OFFSET))(this, AMGAAHMANDM, LFJLELJKNAA, IOKNPLAMIKB);
		}
	};
}
