#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIIFJAIAHJN;
class KLKMCNOECAL;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ObjectInstantiateRequest; }

#define HIIFJAIAHJN_DDIMOHGDNFE_BIHGLMGIGPL_OFFSET UNITYSDK_OFFSET(0x16C37FF0)
#define HIIFJAIAHJN_DDIMOHGDNFE_CTOR_OFFSET UNITYSDK_OFFSET(0x16C37AB0)
#define HIIFJAIAHJN_DDIMOHGDNFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C35B30)
#define HIIFJAIAHJN_DDIMOHGDNFE_DNLBJCEIIKD_OFFSET UNITYSDK_OFFSET(0x16C38140)
#define HIIFJAIAHJN_DDIMOHGDNFE_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x16C37AE0)
#define HIIFJAIAHJN_DDIMOHGDNFE_ELINOHABNCJ_OFFSET UNITYSDK_OFFSET(0x16C38390)
#define HIIFJAIAHJN_DDIMOHGDNFE_FOJMIFPHLLC_OFFSET UNITYSDK_OFFSET(0x16C37FE0)
#define HIIFJAIAHJN_DDIMOHGDNFE_HNLHPGKIAIC_OFFSET UNITYSDK_OFFSET(0x16C358F0)
#define HIIFJAIAHJN_DDIMOHGDNFE_IKHJMENJMHJ_OFFSET UNITYSDK_OFFSET(0x16C381E0)

inline static constexpr unsigned int HIIFJAIAHJN_DDIMOHGDNFE_TypeDefinitionIndex = 60958;

	class HIIFJAIAHJN_DDIMOHGDNFE : public ::System::Object
	{
	public:
		::HIIFJAIAHJN* CFKHNPGEAJA; // 0x10
		::RPG::Client::IAssetOperation* JMLPCOLIILA; // 0x18
		::KLKMCNOECAL* GHCANNCCJOL; // 0x20
		::System::String* BFDAADMGNFD; // 0x28
		::System::String* GFNAPNFFGPJ; // 0x30
		::UnityEngine::ObjectInstantiateRequest* LIMMNNJDECJ; // 0x38
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
