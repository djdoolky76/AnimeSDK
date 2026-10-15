#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class JFDPLMMJDJD;
namespace System { class String; }

#define DBDIHLMEFAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD30A0)
#define DBDIHLMEFAJ_GET_CMT_OFFSET UNITYSDK_OFFSET(0xDFD3070)
#define DBDIHLMEFAJ_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xDFD3050)
#define DBDIHLMEFAJ_GET_ID_OFFSET UNITYSDK_OFFSET(0xDFD3040)
#define DBDIHLMEFAJ_GET_ISPOSTER_OFFSET UNITYSDK_OFFSET(0xDFD3090)
#define DBDIHLMEFAJ_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDFD3060)
#define DBDIHLMEFAJ_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xDFD3080)

inline static constexpr unsigned int DBDIHLMEFAJ_TypeDefinitionIndex = 80141;

	class DBDIHLMEFAJ : public ::System::Object
	{
	public:
		::System::String* _HeadIcon_k__BackingField; // 0x10
		::System::UInt32 _Parent_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::Client::TextID _Cmt_k__BackingField; // 0x30
		::System::Boolean _IsPoster_k__BackingField; // 0x40
		::System::Byte _padding1[0x3];
		::System::UInt32 _ID_k__BackingField; // 0x44
		::System::Void _ctor(::JFDPLMMJDJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFDPLMMJDJD*))((::PBYTE)hIl2Cpp + DBDIHLMEFAJ_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDIHLMEFAJ_GET_ID_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDIHLMEFAJ_GET_HEADICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDIHLMEFAJ_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Cmt()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDIHLMEFAJ_GET_CMT_OFFSET))(this);
		}

		::System::UInt32 get_Parent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDIHLMEFAJ_GET_PARENT_OFFSET))(this);
		}

		::System::Boolean get_IsPoster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDIHLMEFAJ_GET_ISPOSTER_OFFSET))(this);
		}

	};
