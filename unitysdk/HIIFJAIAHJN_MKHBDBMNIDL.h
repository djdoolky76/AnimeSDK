#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIIFJAIAHJN;
class KLKMCNOECAL;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ObjectInstantiateRequest; }

#define HIIFJAIAHJN_MKHBDBMNIDL_BIHGLMGIGPL_OFFSET UNITYSDK_OFFSET(0x16C38450)
#define HIIFJAIAHJN_MKHBDBMNIDL_CTOR_OFFSET UNITYSDK_OFFSET(0x16C37D00)
#define HIIFJAIAHJN_MKHBDBMNIDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C35B80)
#define HIIFJAIAHJN_MKHBDBMNIDL_DNLBJCEIIKD_OFFSET UNITYSDK_OFFSET(0x16C385A0)
#define HIIFJAIAHJN_MKHBDBMNIDL_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x16C37D30)
#define HIIFJAIAHJN_MKHBDBMNIDL_ELINOHABNCJ_OFFSET UNITYSDK_OFFSET(0x16C387F0)
#define HIIFJAIAHJN_MKHBDBMNIDL_FOJMIFPHLLC_OFFSET UNITYSDK_OFFSET(0x16C38440)
#define HIIFJAIAHJN_MKHBDBMNIDL_HNLHPGKIAIC_OFFSET UNITYSDK_OFFSET(0x16C35A90)
#define HIIFJAIAHJN_MKHBDBMNIDL_IKHJMENJMHJ_OFFSET UNITYSDK_OFFSET(0x16C38640)

inline static constexpr unsigned int HIIFJAIAHJN_MKHBDBMNIDL_TypeDefinitionIndex = 60959;

	class HIIFJAIAHJN_MKHBDBMNIDL : public ::System::Object
	{
	public:
		::System::String* CDEEHGCEOKN; // 0x10
		::UnityEngine::ObjectInstantiateRequest* LIMMNNJDECJ; // 0x18
		::HIIFJAIAHJN* CFKHNPGEAJA; // 0x20
		::KLKMCNOECAL* GHCANNCCJOL; // 0x28
		::RPG::Client::IAssetOperation* JMLPCOLIILA; // 0x30
		::System::Void _ctor(::HIIFJAIAHJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIFJAIAHJN*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MKHBDBMNIDL_CTOR_OFFSET))(this, a1);
		}

		::KLKMCNOECAL* FOJMIFPHLLC()
		{
			return ((::KLKMCNOECAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MKHBDBMNIDL_FOJMIFPHLLC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MKHBDBMNIDL_DISPOSE_OFFSET))(this);
		}

		::System::Void BIHGLMGIGPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MKHBDBMNIDL_BIHGLMGIGPL_OFFSET))(this);
		}

		::System::Void DNLBJCEIIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MKHBDBMNIDL_DNLBJCEIIKD_OFFSET))(this);
		}

		::KLKMCNOECAL* HNLHPGKIAIC()
		{
			return ((::KLKMCNOECAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MKHBDBMNIDL_HNLHPGKIAIC_OFFSET))(this);
		}

		::System::Void EGKNKHEANAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MKHBDBMNIDL_EGKNKHEANAN_OFFSET))(this);
		}

		::System::Boolean IKHJMENJMHJ(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MKHBDBMNIDL_IKHJMENJMHJ_OFFSET))(this, a1);
		}

		::System::Void ELINOHABNCJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MKHBDBMNIDL_ELINOHABNCJ_OFFSET))(this, a1);
		}

	};
