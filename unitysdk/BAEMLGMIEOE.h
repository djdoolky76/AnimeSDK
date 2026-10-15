#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { class String; }

#define BAEMLGMIEOE_CGKAAKGCJKL_OFFSET UNITYSDK_OFFSET(0x15BD97E0)
#define BAEMLGMIEOE_GBEOEBHPLCN_OFFSET UNITYSDK_OFFSET(0x15BD9740)
#define BAEMLGMIEOE_IIDPGIMFPDH_OFFSET UNITYSDK_OFFSET(0x15BD9B20)
#define BAEMLGMIEOE_LDHFGDGFNEI_OFFSET UNITYSDK_OFFSET(0x15BD96C0)
#define BAEMLGMIEOE_MMMMMMFGCFC_OFFSET UNITYSDK_OFFSET(0x15BD1330)
#define BAEMLGMIEOE_ODCBCGAMIKC_OFFSET UNITYSDK_OFFSET(0x15BD9970)

	class BAEMLGMIEOE : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 MMMMMMFGCFC(::RPG::MVector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + BAEMLGMIEOE_MMMMMMFGCFC_OFFSET))(a1);
		}

		static ::RPG::MVector3 LDHFGDGFNEI(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::MVector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BAEMLGMIEOE_LDHFGDGFNEI_OFFSET))(a1);
		}

		static ::RPG::GameCore::MeshBound* GBEOEBHPLCN(::UnityEngine::Bounds a1)
		{
			return ((::RPG::GameCore::MeshBound*(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + BAEMLGMIEOE_GBEOEBHPLCN_OFFSET))(a1);
		}

		static ::UnityEngine::Bounds CGKAAKGCJKL(::RPG::GameCore::MeshBound* a1)
		{
			return ((::UnityEngine::Bounds(*)(::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + BAEMLGMIEOE_CGKAAKGCJKL_OFFSET))(a1);
		}

		static ::RPG::GameCore::LodTemplate* ODCBCGAMIKC(::RPG::GameCore::LodConfig* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::LodTemplate*(*)(::RPG::GameCore::LodConfig*, ::System::String*))((::PBYTE)hIl2Cpp + BAEMLGMIEOE_ODCBCGAMIKC_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::NormDistanceLodTemplate* IIDPGIMFPDH(::RPG::GameCore::LodConfig* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::NormDistanceLodTemplate*(*)(::RPG::GameCore::LodConfig*, ::System::String*))((::PBYTE)hIl2Cpp + BAEMLGMIEOE_IIDPGIMFPDH_OFFSET))(a1, a2);
		}

	};
