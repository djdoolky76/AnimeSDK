#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorDirType.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorState.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }

#define IBNAFGFFJLJ_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0x188C0310)
#define IBNAFGFFJLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x188C0350)
#define IBNAFGFFJLJ_EJNEFDIIINJ_OFFSET UNITYSDK_OFFSET(0x188C02D0)
#define IBNAFGFFJLJ_IMOKLLCPEJO_OFFSET UNITYSDK_OFFSET(0x188C0120)
#define IBNAFGFFJLJ_MJNMFMEDJJM_OFFSET UNITYSDK_OFFSET(0x188C0290)
#define IBNAFGFFJLJ_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0x188C0150)
#define IBNAFGFFJLJ_ONSELECT_OFFSET UNITYSDK_OFFSET(0x188C0250)

inline static constexpr unsigned int IBNAFGFFJLJ_TypeDefinitionIndex = 76246;

	class IBNAFGFFJLJ : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackAnchor* GLCHNMCMIMI; // 0x10
		::RPG::Client::ActivityAlley::AlleyPackGoodData* OKDJPNMPIAF; // 0x18
		::RPG::Client::ActivityAlley::AlleyPackAnchorState MEPFOEEGBEA; // 0x20
		::RPG::GameCore::AlleyPackAnchorType HPLKADFDFAI; // 0x24
		::System::UInt32 NHHOBBKMIGF; // 0x28
		::RPG::Client::ActivityAlley::AlleyPackAnchorDirType MLDNAFBHNKO; // 0x2C
		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> DLIJNFFLHHI; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Vector3 HMPNOGFAFEM; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNAFGFFJLJ_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 IMOKLLCPEJO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNAFGFFJLJ_IMOKLLCPEJO_OFFSET))(this);
		}

		::UnityEngine::Vector3 NINDHOGICJD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNAFGFFJLJ_NINDHOGICJD_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNAFGFFJLJ_ONSELECT_OFFSET))(this);
		}

		::System::Void MJNMFMEDJJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNAFGFFJLJ_MJNMFMEDJJM_OFFSET))(this);
		}

		::System::Void EJNEFDIIINJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNAFGFFJLJ_EJNEFDIIINJ_OFFSET))(this);
		}

		::System::Void CFINKMFANFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNAFGFFJLJ_CFINKMFANFE_OFFSET))(this);
		}

	};
