#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"
class CFCBPHCGEJI;
namespace RPG::Client { class BAPartVariantArray; }
namespace RPG::Client { class BAPartVariantRef; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationVariantAsset_BKLLJOLMAOH; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }
namespace UnityEngine::Rendering { class BatchAnimationMeshVariant; }

#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xC7F0B50)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_ELBOPPFBOBL_OFFSET UNITYSDK_OFFSET(0xC7EF820)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC7EFDE0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_LHLLGHJEHPH_OFFSET UNITYSDK_OFFSET(0xC7F0430)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC7EFB80)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_PAACGACOFKP_OFFSET UNITYSDK_OFFSET(0xC7F0530)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_PIFGPNILIHE_OFFSET UNITYSDK_OFFSET(0xC7F07C0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_RELEASEVARIANTRES_OFFSET UNITYSDK_OFFSET(0xC7EF790)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_REQUESTVARIANTRES_OFFSET UNITYSDK_OFFSET(0xC7EF630)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_SETPARTVARIANT_OFFSET UNITYSDK_OFFSET(0xC7CC2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationVariantAsset_TypeDefinitionIndex = 69525;

	class BatchAnimationVariantAsset : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BAPartVariantArray*>* partsVariantRefs; // 0x18
		::UnityEngine::Rendering::BatchAnimationMeshVariant* AGGKALGLIBJ; // 0x20
		::RPG::Client::OnAssetOperationDelegate* IHFDJGGLLFA; // 0x28
		::System::Collections::Generic::Queue_1<::RPG::Client::BAPartVariantRes*>* NMJHHKGOPHK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CTOR_OFFSET))(this);
		}

		::RPG::Client::BAPartVariantRes* RequestVariantRes(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_REQUESTVARIANTRES_OFFSET))(this, a1);
		}

		::System::Void ReleaseVariantRes(::RPG::Client::BAPartVariantRes* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_RELEASEVARIANTRES_OFFSET))(this, a1);
		}

		::System::Void SetPartVariant(::UnityEngine::Rendering::BatchAnimation* a1, ::CFCBPHCGEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::CFCBPHCGEJI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_SETPARTVARIANT_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_LATEUPDATE_OFFSET))(this);
		}

		::RPG::Client::BAPartVariantRef* ELBOPPFBOBL(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2, ::UnityEngine::Rendering::BAVariantKey a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::RPG::Client::BAPartVariantRef*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::UnityEngine::Rendering::BAVariantKey, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_ELBOPPFBOBL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean LHLLGHJEHPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_LHLLGHJEHPH_OFFSET))(this);
		}

		::System::Void PAACGACOFKP(::RPG::Client::BatchAnimationVariantAsset_BKLLJOLMAOH* a1, ::UnityEngine::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationVariantAsset_BKLLJOLMAOH*, ::UnityEngine::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_PAACGACOFKP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PIFGPNILIHE(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_PIFGPNILIHE_OFFSET))(this, a1);
		}

	};
}
