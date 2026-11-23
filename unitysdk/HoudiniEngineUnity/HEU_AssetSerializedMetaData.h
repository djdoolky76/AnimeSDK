#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace HoudiniEngineUnity { class HEU_InputCurveInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_B759F43EC4530023_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_B94B97BA5753E37E_OFFSET UNITYSDK_OFFSET(0x387E880)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_E4C47CF483956CF3_OFFSET UNITYSDK_OFFSET(0x1873310)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_F1FCCF8550C19122_OFFSET UNITYSDK_OFFSET(0x169C070)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_F771A3D44BE08361_OFFSET UNITYSDK_OFFSET(0x1873260)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x387E930)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetSerializedMetaData_TypeDefinitionIndex = 18121;

	class HEU_AssetSerializedMetaData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean _softDeleted; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* _savedCurveNodeData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputCurveInfo*>* _savedInputCurveInfo; // 0x28

		::System::Void E4C47CF483956CF3(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_E4C47CF483956CF3_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean B94B97BA5753E37E(::HoudiniEngineUnity::HEU_AssetSerializedMetaData* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_AssetSerializedMetaData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_B94B97BA5753E37E_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputCurveInfo*>* F1FCCF8550C19122()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputCurveInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_F1FCCF8550C19122_OFFSET))(this);
		}

		::System::Boolean F771A3D44BE08361()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_F771A3D44BE08361_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* B759F43EC4530023()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_B759F43EC4530023_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA__CTOR_OFFSET))(this);
		}
	};
}
