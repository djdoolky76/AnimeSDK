#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class BFBHKJLJJBJ;
class LMLNNHKJEIP;
class OFFMCODMKDL;
class PLJNHHAFBMB;
namespace RPG::Client { class FightPlayer; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLJNHHAFBMB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC307F60)
#define PLJNHHAFBMB_CEJBDHPHBAB_OFFSET UNITYSDK_OFFSET(0xC308660)
#define PLJNHHAFBMB_CTOR_OFFSET UNITYSDK_OFFSET(0xC308030)
#define PLJNHHAFBMB_DPPIBDNLAIJ_OFFSET UNITYSDK_OFFSET(0xC308800)
#define PLJNHHAFBMB_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xC307F00)
#define PLJNHHAFBMB_GET_ROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0xC307F40)
#define PLJNHHAFBMB_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC307F20)
#define PLJNHHAFBMB_GHLIBBJMOCE_OFFSET UNITYSDK_OFFSET(0xC308610)
#define PLJNHHAFBMB_HJOJIFHKIAH_OFFSET UNITYSDK_OFFSET(0xC308080)
#define PLJNHHAFBMB_INCLHHDFCEL_OFFSET UNITYSDK_OFFSET(0xC308900)
#define PLJNHHAFBMB_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xC307F10)
#define PLJNHHAFBMB_SET_ROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0xC307F50)
#define PLJNHHAFBMB_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC307F30)

inline static constexpr unsigned int PLJNHHAFBMB_TypeDefinitionIndex = 69360;

	class PLJNHHAFBMB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FightPlayer*>* EHGLKFLLBPD; // 0x10
		::OFFMCODMKDL* _RoomExtInfo_k__BackingField; // 0x18
		::FJPMJPEKLJL _GameMode_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 _RoomID_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_CTOR_OFFSET))(this);
		}

		::FJPMJPEKLJL get_GameMode()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Void set_GameMode(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_SET_GAMEMODE_OFFSET))(this, a1);
		}

		::System::UInt64 get_RoomID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_SET_ROOMID_OFFSET))(this, a1);
		}

		::OFFMCODMKDL* get_RoomExtInfo()
		{
			return ((::OFFMCODMKDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_GET_ROOMEXTINFO_OFFSET))(this);
		}

		::System::Void set_RoomExtInfo(::OFFMCODMKDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFFMCODMKDL*))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_SET_ROOMEXTINFO_OFFSET))(this, a1);
		}

		static ::PLJNHHAFBMB* BPLPBPMEODA(::BFBHKJLJJBJ* a1)
		{
			return ((::PLJNHHAFBMB*(*)(::BFBHKJLJJBJ*))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HJOJIFHKIAH(::System::Collections::Generic::IList_1<::LMLNNHKJEIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::LMLNNHKJEIP*>*))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_HJOJIFHKIAH_OFFSET))(this, a1);
		}

		::System::Void GHLIBBJMOCE(::OFFMCODMKDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFFMCODMKDL*))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_GHLIBBJMOCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CEJBDHPHBAB()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_CEJBDHPHBAB_OFFSET))(this);
		}

		::RPG::Client::FightPlayer* DPPIBDNLAIJ(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightPlayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_DPPIBDNLAIJ_OFFSET))(this, a1);
		}

		::System::Void INCLHHDFCEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJNHHAFBMB_INCLHHDFCEL_OFFSET))(this);
		}

	};
