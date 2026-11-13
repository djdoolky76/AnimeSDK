#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class CAHNLBKBGMH;
class CLFABOEKMJI;
class IHGANLCNHBD;
class KMCJMBABNNE;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace RPG::Client { class GridFightRichTextNodeCompiler; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C72C8B0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C7293A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C72C5E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C72C550)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0x1C72C690)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0x1C72BF30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x1C72C450)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C72BE80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0x1C72C400)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C72C300)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C72BD50)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1C72BD10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1C72C380)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C72BDD0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1C72C280)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1C72BD30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1C72BD20)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1C72BD40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentSelectItem_TypeDefinitionIndex = 65830;

	class GridFightAugmentSelectItem : public ::System::Object
	{
	public:
		::RPG::Client::GridFightAugmentConfig* _Config; // 0x10
		::System::UInt32 _MaxRollTimes_k__BackingField; // 0x18
		::System::UInt32 _RollTimes_k__BackingField; // 0x1C
		static ::CAHNLBKBGMH** StaticGet__EquipCompiler()
		{
			return (::CAHNLBKBGMH**)UnitySDK::FromName("RPG.Client", "GridFightAugmentSelectItem")->GetStaticField(0x6FB90);
		}

		static ::KMCJMBABNNE** StaticGet__DescCompiler()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("RPG.Client", "GridFightAugmentSelectItem")->GetStaticField(0x6FB98);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::IHGANLCNHBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGANLCNHBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_CCTOR_OFFSET))();
		}

		::System::UInt32 get_MaxRollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MAXROLLTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRollTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_MAXROLLTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ROLLTIMES_OFFSET))(this);
		}

		::System::Void set_RollTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_ROLLTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightAugmentQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_QUALITY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Boolean get_HasDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_HASDETAIL_OFFSET))(this);
		}

		::CLFABOEKMJI* get_ContextData()
		{
			return ((::CLFABOEKMJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRichTextNodeCompiler*>* GetUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRichTextNodeCompiler*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}

	};
}
