#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0xD7F9720)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD7F97B0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7F8D40)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xD7F8370)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDirectionDissolve_TypeDefinitionIndex = 70000;

	class MonoEffectPluginDirectionDissolve : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean EnableDissolve; // 0x170
		::System::Byte _padding0[0x7];
		::UnityEngine::Transform* DissolveTargetPlane; // 0x178
		::System::Single DissolveOutlineSize1; // 0x180
		::System::Single DissolveOutlineSize2; // 0x184
		::System::Single DissolveOutlineEmission; // 0x188
		::UnityEngine::Color DissolveOutlineColor1; // 0x18C
		::UnityEngine::Color DissolveOutlineColor2; // 0x19C
		::UnityEngine::Vector2 DissolveOutlineSmoothStep; // 0x1AC
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* DEOKAPMPABA; // 0x1B8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_CTOR_OFFSET))(this);
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_IJICJDNHKHN_OFFSET))(this);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_CBKPMHCOCMH_OFFSET))(this);
		}

	};
}
