#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitParamSource.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRichTextNodeCompiler; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::Client { class GridFightTraitRemarkLineConfig; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xDCE4840)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDCE4920)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETALLLAYERPARAMLIST_1_OFFSET UNITYSDK_OFFSET(0xDCE5220)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETALLLAYERPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCE50C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETLAYERPARAMCOMPILER_OFFSET UNITYSDK_OFFSET(0xDCE5BA0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETREMARKCOMPILERS_OFFSET UNITYSDK_OFFSET(0xDCE5C20)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETSTATICREMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCE4A90)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETVARIABLECOMPILER_OFFSET UNITYSDK_OFFSET(0xDCE4ED0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_CONDITIONPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCE4A10)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xDCE49F0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0xDCE4A50)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0xDCE4A70)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_PARAMSOURCE_OFFSET UNITYSDK_OFFSET(0xDCE49D0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xDCE4950)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TEXTORDER_OFFSET UNITYSDK_OFFSET(0xDCE4970)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xDCE4930)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCE4A30)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARK_OFFSET UNITYSDK_OFFSET(0xDCE4990)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITSIMPLEREMARK_OFFSET UNITYSDK_OFFSET(0xDCE49B0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_ISLAYERINCLUDED_OFFSET UNITYSDK_OFFSET(0xDCE5990)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_CONDITIONPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCE4A20)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xDCE4A00)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0xDCE4A60)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0xDCE4A80)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_PARAMSOURCE_OFFSET UNITYSDK_OFFSET(0xDCE49E0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xDCE4960)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TEXTORDER_OFFSET UNITYSDK_OFFSET(0xDCE4980)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0xDCE4940)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCE4A40)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARK_OFFSET UNITYSDK_OFFSET(0xDCE49A0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITSIMPLEREMARK_OFFSET UNITYSDK_OFFSET(0xDCE49C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__GETLAYERPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCE5AB0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__GETMAZEBUFFPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCE4B00)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__GETMAZEBUFFPLUSPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCE4CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineConfig_TypeDefinitionIndex = 67382;

	class GridFightTraitRemarkLineConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _ConditionParamList_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _TraitRemarkParamList_k__BackingField; // 0x18
		::System::UInt32 _TextOrder_k__BackingField; // 0x20
		::System::UInt32 _TraitID_k__BackingField; // 0x24
		::RPG::GameCore::GridFightTraitRemarkActiveType _ConditionType_k__BackingField; // 0x28
		::RPG::GameCore::GridFightTraitParamSource _ParamSource_k__BackingField; // 0x2C
		::RPG::GameCore::GridFightTraitRemarkPosition _Position_k__BackingField; // 0x30
		::System::Boolean _IsExpert_k__BackingField; // 0x34
		::System::Boolean _IsInBook_k__BackingField; // 0x35
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID _TraitRemark_k__BackingField; // 0x38
		::RPG::Client::TextID _TraitSimpleRemark_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightTraitRemarkLineConfig* Create(::RPG::GameCore::GridFightTraitRemarkRow* a1)
		{
			return ((::RPG::Client::GridFightTraitRemarkLineConfig*(*)(::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTraitRemarkPosition get_Position()
		{
			return ((::RPG::GameCore::GridFightTraitRemarkPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::RPG::GameCore::GridFightTraitRemarkPosition a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkPosition))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_POSITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_TextOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TEXTORDER_OFFSET))(this);
		}

		::System::Void set_TextOrder(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TEXTORDER_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TraitRemark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARK_OFFSET))(this);
		}

		::System::Void set_TraitRemark(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TraitSimpleRemark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITSIMPLEREMARK_OFFSET))(this);
		}

		::System::Void set_TraitSimpleRemark(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITSIMPLEREMARK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTraitParamSource get_ParamSource()
		{
			return ((::RPG::GameCore::GridFightTraitParamSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_PARAMSOURCE_OFFSET))(this);
		}

		::System::Void set_ParamSource(::RPG::GameCore::GridFightTraitParamSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitParamSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_PARAMSOURCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTraitRemarkActiveType get_ConditionType()
		{
			return ((::RPG::GameCore::GridFightTraitRemarkActiveType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_CONDITIONTYPE_OFFSET))(this);
		}

		::System::Void set_ConditionType(::RPG::GameCore::GridFightTraitRemarkActiveType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkActiveType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_CONDITIONTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ConditionParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_CONDITIONPARAMLIST_OFFSET))(this);
		}

		::System::Void set_ConditionParamList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_CONDITIONPARAMLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_TraitRemarkParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARKPARAMLIST_OFFSET))(this);
		}

		::System::Void set_TraitRemarkParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARKPARAMLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISEXPERT_OFFSET))(this);
		}

		::System::Void set_IsExpert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISEXPERT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInBook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISINBOOK_OFFSET))(this);
		}

		::System::Void set_IsInBook(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISINBOOK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetStaticRemarkParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETSTATICREMARKPARAMLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightRichTextNodeCompiler* GetVariableCompiler()
		{
			return ((::RPG::Client::GridFightRichTextNodeCompiler*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETVARIABLECOMPILER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>* GetAllLayerParamList()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETALLLAYERPARAMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>* GetAllLayerParamList_1(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightTraitLayerConfig*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightTraitLayerConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETALLLAYERPARAMLIST_1_OFFSET))(this, a1);
		}

		::System::Boolean IsLayerIncluded(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_ISLAYERINCLUDED_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRichTextNodeCompiler* GetLayerParamCompiler()
		{
			return ((::RPG::Client::GridFightRichTextNodeCompiler*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETLAYERPARAMCOMPILER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRichTextNodeCompiler*>* GetRemarkCompilers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRichTextNodeCompiler*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GETREMARKCOMPILERS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* _GetLayerParamList(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__GETLAYERPARAMLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* _GetMazeBuffParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__GETMAZEBUFFPARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* _GetMazeBuffPlusParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__GETMAZEBUFFPLUSPARAMLIST_OFFSET))(this);
		}

	};
}
