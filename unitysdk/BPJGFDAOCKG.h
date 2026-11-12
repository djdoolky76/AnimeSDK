#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BPJGFDAOCKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C8440)
#define BPJGFDAOCKG_GET_AVATARDECONAME_OFFSET UNITYSDK_OFFSET(0x1D6C8340)
#define BPJGFDAOCKG_GET_AVATARFEVERDESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1D6C8420)
#define BPJGFDAOCKG_GET_AVATARFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1D6C83E0)
#define BPJGFDAOCKG_GET_AVATARFEVERSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D6C8400)
#define BPJGFDAOCKG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D6C8300)
#define BPJGFDAOCKG_GET_SPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x1D6C8320)
#define BPJGFDAOCKG_GET_STAGEFEVERCOND_OFFSET UNITYSDK_OFFSET(0x1D6C8360)
#define BPJGFDAOCKG_GET_STAGEFEVERDESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1D6C83C0)
#define BPJGFDAOCKG_GET_STAGEFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1D6C8380)
#define BPJGFDAOCKG_GET_STAGEFEVERSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D6C83A0)
#define BPJGFDAOCKG_SET_AVATARDECONAME_OFFSET UNITYSDK_OFFSET(0x1D6C8350)
#define BPJGFDAOCKG_SET_AVATARFEVERDESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1D6C8430)
#define BPJGFDAOCKG_SET_AVATARFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1D6C83F0)
#define BPJGFDAOCKG_SET_AVATARFEVERSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D6C8410)
#define BPJGFDAOCKG_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D6C8310)
#define BPJGFDAOCKG_SET_SPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x1D6C8330)
#define BPJGFDAOCKG_SET_STAGEFEVERCOND_OFFSET UNITYSDK_OFFSET(0x1D6C8370)
#define BPJGFDAOCKG_SET_STAGEFEVERDESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1D6C83D0)
#define BPJGFDAOCKG_SET_STAGEFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1D6C8390)
#define BPJGFDAOCKG_SET_STAGEFEVERSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D6C83B0)

inline static constexpr unsigned int BPJGFDAOCKG_TypeDefinitionIndex = 42888;

	class BPJGFDAOCKG : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* _AvatarFeverDescParams_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* _StageFeverDescParams_k__BackingField; // 0x18
		::System::String* _AvatarDecoName_k__BackingField; // 0x20
		::RPG::Client::TextID _StageFeverSimpleDesc_k__BackingField; // 0x28
		::RPG::Client::TextID _StageFeverCond_k__BackingField; // 0x38
		::RPG::Client::TextID _StageFeverDesc_k__BackingField; // 0x48
		::RPG::Client::TextID _AvatarFeverSimpleDesc_k__BackingField; // 0x58
		::System::UInt32 _ID_k__BackingField; // 0x68
		::System::UInt32 _SpecialAvatarID_k__BackingField; // 0x6C
		::RPG::Client::TextID _AvatarFeverDesc_k__BackingField; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpecialAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_SPECIALAVATARID_OFFSET))(this);
		}

		::System::Void set_SpecialAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_SPECIALAVATARID_OFFSET))(this, a1);
		}

		::System::String* get_AvatarDecoName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_AVATARDECONAME_OFFSET))(this);
		}

		::System::Void set_AvatarDecoName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_AVATARDECONAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_StageFeverCond()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_STAGEFEVERCOND_OFFSET))(this);
		}

		::System::Void set_StageFeverCond(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_STAGEFEVERCOND_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_StageFeverDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_STAGEFEVERDESC_OFFSET))(this);
		}

		::System::Void set_StageFeverDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_STAGEFEVERDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_StageFeverSimpleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_STAGEFEVERSIMPLEDESC_OFFSET))(this);
		}

		::System::Void set_StageFeverSimpleDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_STAGEFEVERSIMPLEDESC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* get_StageFeverDescParams()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_STAGEFEVERDESCPARAMS_OFFSET))(this);
		}

		::System::Void set_StageFeverDescParams(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_STAGEFEVERDESCPARAMS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_AvatarFeverDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_AVATARFEVERDESC_OFFSET))(this);
		}

		::System::Void set_AvatarFeverDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_AVATARFEVERDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_AvatarFeverSimpleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_AVATARFEVERSIMPLEDESC_OFFSET))(this);
		}

		::System::Void set_AvatarFeverSimpleDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_AVATARFEVERSIMPLEDESC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* get_AvatarFeverDescParams()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_GET_AVATARFEVERDESCPARAMS_OFFSET))(this);
		}

		::System::Void set_AvatarFeverDescParams(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + BPJGFDAOCKG_SET_AVATARFEVERDESCPARAMS_OFFSET))(this, a1);
		}

	};
