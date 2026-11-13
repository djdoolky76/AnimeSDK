#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class GridFightRichTextNodeCompiler; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitRemarkLineConfig; }
namespace RPG::Client { class GridFightVariableCompiler; }
namespace RPG::Client { class IGridFightTraitRemarkLineStateParser; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F1160)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GETALLLAYERPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C9F1F50)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GETCOMPILERS_OFFSET UNITYSDK_OFFSET(0x1C9F29B0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GETLAYERPARAMCOMPILER_OFFSET UNITYSDK_OFFSET(0x1C9F20E0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GETVARIABLECOMPILER_OFFSET UNITYSDK_OFFSET(0x1C9F18E0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1C9F1890)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_STATEPARSER_OFFSET UNITYSDK_OFFSET(0x1C9F1870)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x1C9F1720)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_TEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C9F1780)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_SET_STATEPARSER_OFFSET UNITYSDK_OFFSET(0x1C9F1880)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETCURRENTLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1C9F21F0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETCURRENTTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1C9F2010)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETMAZEBUFFPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C9F2B90)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETMAZEBUFFPLUSPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C9F2CE0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C9F17D0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETVALUECOMPILER_OFFSET UNITYSDK_OFFSET(0x1C9F1950)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEffectBase_TypeDefinitionIndex = 67371;

	class GridFightTraitRemarkLineEffectBase : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* _Trait; // 0x10
		::RPG::Client::IGridFightTraitRemarkLineStateParser* _StateParser_k__BackingField; // 0x18
		::RPG::Client::GridFightTraitRemarkLineConfig* Config; // 0x20
		::System::Void _ctor(::RPG::Client::GridFightTrait* a1, ::RPG::GameCore::GridFightTraitRemarkRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_TEXTID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_TextParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_TEXTPARAMLIST_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitRemarkLineStateParser* get_StateParser()
		{
			return ((::RPG::Client::IGridFightTraitRemarkLineStateParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_STATEPARSER_OFFSET))(this);
		}

		::System::Void set_StateParser(::RPG::Client::IGridFightTraitRemarkLineStateParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightTraitRemarkLineStateParser*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_SET_STATEPARSER_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_ORDER_OFFSET))(this);
		}

		::RPG::Client::GridFightRichTextNodeCompiler* GetVariableCompiler()
		{
			return ((::RPG::Client::GridFightRichTextNodeCompiler*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GETVARIABLECOMPILER_OFFSET))(this);
		}

		::RPG::Client::GridFightVariableCompiler* _GetValueCompiler()
		{
			return ((::RPG::Client::GridFightVariableCompiler*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETVALUECOMPILER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>* GetAllLayerParamList()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GETALLLAYERPARAMLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightRichTextNodeCompiler* GetLayerParamCompiler()
		{
			return ((::RPG::Client::GridFightRichTextNodeCompiler*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GETLAYERPARAMCOMPILER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRichTextNodeCompiler*>* GetCompilers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRichTextNodeCompiler*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GETCOMPILERS_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitConfigBase* _GetCurrentTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETCURRENTTRAITCONFIG_OFFSET))(this);
		}

		::System::Int32 _GetCurrentLayerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETCURRENTLAYERINDEX_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* _GetTextParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETTEXTPARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* _GetMazeBuffParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETMAZEBUFFPARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* _GetMazeBuffPlusParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__GETMAZEBUFFPLUSPARAMLIST_OFFSET))(this);
		}

	};
}
