#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIIFJAIAHJN;
class KLKMCNOECAL;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ObjectInstantiateRequest; }

#define HIIFJAIAHJN_DDIMOHGDNFE_BIHGLMGIGPL_OFFSET UNITYSDK_OFFSET(0x19036450)
#define HIIFJAIAHJN_DDIMOHGDNFE_CTOR_OFFSET UNITYSDK_OFFSET(0x19035F10)
#define HIIFJAIAHJN_DDIMOHGDNFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19033F90)
#define HIIFJAIAHJN_DDIMOHGDNFE_DNLBJCEIIKD_OFFSET UNITYSDK_OFFSET(0x190365A0)
#define HIIFJAIAHJN_DDIMOHGDNFE_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x19035F40)
#define HIIFJAIAHJN_DDIMOHGDNFE_ELINOHABNCJ_OFFSET UNITYSDK_OFFSET(0x190367F0)
#define HIIFJAIAHJN_DDIMOHGDNFE_FOJMIFPHLLC_OFFSET UNITYSDK_OFFSET(0x19036440)
#define HIIFJAIAHJN_DDIMOHGDNFE_HNLHPGKIAIC_OFFSET UNITYSDK_OFFSET(0x19033D50)
#define HIIFJAIAHJN_DDIMOHGDNFE_IKHJMENJMHJ_OFFSET UNITYSDK_OFFSET(0x19036640)

inline static constexpr unsigned int HIIFJAIAHJN_DDIMOHGDNFE_TypeDefinitionIndex = 60958;

	class HIIFJAIAHJN_DDIMOHGDNFE : public ::System::Object
	{
	public:
		::UnityEngine::ObjectInstantiateRequest* LIMMNNJDECJ; // 0x10
		::HIIFJAIAHJN* CFKHNPGEAJA; // 0x18
		::System::String* GFNAPNFFGPJ; // 0x20
		::KLKMCNOECAL* GHCANNCCJOL; // 0x28
		::RPG::Client::IAssetOperation* JMLPCOLIILA; // 0x30
		::System::String* BFDAADMGNFD; // 0x38
		::System::Void _ctor(::HIIFJAIAHJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIFJAIAHJN*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DDIMOHGDNFE_CTOR_OFFSET))(this, a1);
		}

		::KLKMCNOECAL* FOJMIFPHLLC()
		{
			return ((::KLKMCNOECAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DDIMOHGDNFE_FOJMIFPHLLC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DDIMOHGDNFE_DISPOSE_OFFSET))(this);
		}

		::System::Void BIHGLMGIGPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DDIMOHGDNFE_BIHGLMGIGPL_OFFSET))(this);
		}

		::System::Void DNLBJCEIIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DDIMOHGDNFE_DNLBJCEIIKD_OFFSET))(this);
		}

		::KLKMCNOECAL* HNLHPGKIAIC()
		{
			return ((::KLKMCNOECAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DDIMOHGDNFE_HNLHPGKIAIC_OFFSET))(this);
		}

		::System::Void EGKNKHEANAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DDIMOHGDNFE_EGKNKHEANAN_OFFSET))(this);
		}

		::System::Boolean IKHJMENJMHJ(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DDIMOHGDNFE_IKHJMENJMHJ_OFFSET))(this, a1);
		}

		::System::Void ELINOHABNCJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_DDIMOHGDNFE_ELINOHABNCJ_OFFSET))(this, a1);
		}

	};
