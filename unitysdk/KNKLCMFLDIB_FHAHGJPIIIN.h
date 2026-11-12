#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFBPHKOLDBM.h"
#include "unitysdk/System/Object.h"
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class GameObject; }

#define KNKLCMFLDIB_FHAHGJPIIIN_BIFILLNFDEH_OFFSET UNITYSDK_OFFSET(0xBDD9FD0)
#define KNKLCMFLDIB_FHAHGJPIIIN_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD7000)
#define KNKLCMFLDIB_FHAHGJPIIIN_FECEEHHBAPL_OFFSET UNITYSDK_OFFSET(0xBDD8B00)
#define KNKLCMFLDIB_FHAHGJPIIIN_HNEDMINPFIF_OFFSET UNITYSDK_OFFSET(0xBDD9EF0)

inline static constexpr unsigned int KNKLCMFLDIB_FHAHGJPIIIN_TypeDefinitionIndex = 81568;

	class KNKLCMFLDIB_FHAHGJPIIIN : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* PHKIMJAPANN; // 0x10
		::UnityEngine::GameObject* KKMDMONNHKF; // 0x18
		::RPG::Client::IAssetOperation* AMBFCJIIJOI; // 0x20
		::FFBPHKOLDBM EABKOHGCHFP; // 0x28
		::BansheeGz::BGSpline::Curve::BGCurve* NLIFDJHPHLP; // 0x58
		::RPG::Client::OpenWorld::StreamingItemData* JBAMMNONHCJ; // 0x60
		::UnityEngine::GameObject* CPLFGBIJOCA; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKLCMFLDIB_FHAHGJPIIIN_CTOR_OFFSET))(this);
		}

		::System::Void FECEEHHBAPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNKLCMFLDIB_FHAHGJPIIIN_FECEEHHBAPL_OFFSET))(this, a1);
		}

		::System::Void HNEDMINPFIF(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + KNKLCMFLDIB_FHAHGJPIIIN_HNEDMINPFIF_OFFSET))(this, a1);
		}

		::System::Void BIFILLNFDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKLCMFLDIB_FHAHGJPIIIN_BIFILLNFDEH_OFFSET))(this);
		}

	};
