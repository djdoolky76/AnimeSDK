#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class CNIPJLLHIJA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GCFONFDMPGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1595F640)
#define GCFONFDMPGG_GET_CMTCONTENT_OFFSET UNITYSDK_OFFSET(0x1595F620)
#define GCFONFDMPGG_GET_CMTS_OFFSET UNITYSDK_OFFSET(0x1595F5F0)
#define GCFONFDMPGG_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x1595F600)
#define GCFONFDMPGG_GET_ISPOSTER_OFFSET UNITYSDK_OFFSET(0x1595F630)
#define GCFONFDMPGG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1595F610)

inline static constexpr unsigned int GCFONFDMPGG_TypeDefinitionIndex = 79682;

	class GCFONFDMPGG : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* _Cmts_k__BackingField; // 0x10
		::System::String* _HeadIcon_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::System::Boolean _IsPoster_k__BackingField; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID _CmtContent_k__BackingField; // 0x38
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* a1, ::System::String* a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>*, ::System::String*, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCFONFDMPGG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* get_Cmts()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFONFDMPGG_GET_CMTS_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFONFDMPGG_GET_HEADICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFONFDMPGG_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_CmtContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFONFDMPGG_GET_CMTCONTENT_OFFSET))(this);
		}

		::System::Boolean get_IsPoster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFONFDMPGG_GET_ISPOSTER_OFFSET))(this);
		}

	};
