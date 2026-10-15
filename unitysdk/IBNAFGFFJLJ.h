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

#define IBNAFGFFJLJ_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0x15E36060)
#define IBNAFGFFJLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E360A0)
#define IBNAFGFFJLJ_EJNEFDIIINJ_OFFSET UNITYSDK_OFFSET(0x15E36020)
#define IBNAFGFFJLJ_IMOKLLCPEJO_OFFSET UNITYSDK_OFFSET(0x15E35E70)
#define IBNAFGFFJLJ_MJNMFMEDJJM_OFFSET UNITYSDK_OFFSET(0x15E35FE0)
#define IBNAFGFFJLJ_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0x15E35EA0)
#define IBNAFGFFJLJ_ONSELECT_OFFSET UNITYSDK_OFFSET(0x15E35FA0)

inline static constexpr unsigned int IBNAFGFFJLJ_TypeDefinitionIndex = 74098;

	class IBNAFGFFJLJ : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackGoodData* OKDJPNMPIAF; // 0x10
		::RPG::Client::ActivityAlley::AlleyPackAnchor* GLCHNMCMIMI; // 0x18
		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> DLIJNFFLHHI; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt32 NHHOBBKMIGF; // 0x2C
		::RPG::GameCore::AlleyPackAnchorType HPLKADFDFAI; // 0x30
		::UnityEngine::Vector3 HMPNOGFAFEM; // 0x34
		::RPG::Client::ActivityAlley::AlleyPackAnchorState MEPFOEEGBEA; // 0x40
		::RPG::Client::ActivityAlley::AlleyPackAnchorDirType MLDNAFBHNKO; // 0x44
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
