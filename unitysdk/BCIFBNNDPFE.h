#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIMGBHJFAFK.h"
#include "unitysdk/EHKGGCKICFI.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BCIFBNNDPFE_CTOR_OFFSET UNITYSDK_OFFSET(0x170A0A20)
#define BCIFBNNDPFE_GET_COMMENTIDS_OFFSET UNITYSDK_OFFSET(0x170A0980)
#define BCIFBNNDPFE_GET_PLAYERCOMMENT1ID_OFFSET UNITYSDK_OFFSET(0x170A09A0)
#define BCIFBNNDPFE_GET_PLAYERCOMMENT1TEXT_OFFSET UNITYSDK_OFFSET(0x170A09E0)
#define BCIFBNNDPFE_GET_PLAYERCOMMENT2ID_OFFSET UNITYSDK_OFFSET(0x170A09C0)
#define BCIFBNNDPFE_GET_PLAYERCOMMENT2TEXT_OFFSET UNITYSDK_OFFSET(0x170A0A00)
#define BCIFBNNDPFE_GET_POSTCONTENT_OFFSET UNITYSDK_OFFSET(0x170A0940)
#define BCIFBNNDPFE_GET_POSTERICONPATH_OFFSET UNITYSDK_OFFSET(0x170A08E0)
#define BCIFBNNDPFE_GET_POSTERNAME_OFFSET UNITYSDK_OFFSET(0x170A0900)
#define BCIFBNNDPFE_GET_POSTID_OFFSET UNITYSDK_OFFSET(0x170A08C0)
#define BCIFBNNDPFE_GET_POSTPICPATH_OFFSET UNITYSDK_OFFSET(0x170A0960)
#define BCIFBNNDPFE_GET_POSTTITLE_OFFSET UNITYSDK_OFFSET(0x170A0920)
#define BCIFBNNDPFE_SET_COMMENTIDS_OFFSET UNITYSDK_OFFSET(0x170A0990)
#define BCIFBNNDPFE_SET_PLAYERCOMMENT1ID_OFFSET UNITYSDK_OFFSET(0x170A09B0)
#define BCIFBNNDPFE_SET_PLAYERCOMMENT1TEXT_OFFSET UNITYSDK_OFFSET(0x170A09F0)
#define BCIFBNNDPFE_SET_PLAYERCOMMENT2ID_OFFSET UNITYSDK_OFFSET(0x170A09D0)
#define BCIFBNNDPFE_SET_PLAYERCOMMENT2TEXT_OFFSET UNITYSDK_OFFSET(0x170A0A10)
#define BCIFBNNDPFE_SET_POSTCONTENT_OFFSET UNITYSDK_OFFSET(0x170A0950)
#define BCIFBNNDPFE_SET_POSTERICONPATH_OFFSET UNITYSDK_OFFSET(0x170A08F0)
#define BCIFBNNDPFE_SET_POSTERNAME_OFFSET UNITYSDK_OFFSET(0x170A0910)
#define BCIFBNNDPFE_SET_POSTID_OFFSET UNITYSDK_OFFSET(0x170A08D0)
#define BCIFBNNDPFE_SET_POSTPICPATH_OFFSET UNITYSDK_OFFSET(0x170A0970)
#define BCIFBNNDPFE_SET_POSTTITLE_OFFSET UNITYSDK_OFFSET(0x170A0930)

inline static constexpr unsigned int BCIFBNNDPFE_TypeDefinitionIndex = 77060;

	class BCIFBNNDPFE : public ::System::Object
	{
	public:
		::System::String* _PostPicPath_k__BackingField; // 0x10
		::System::String* _PosterIconPath_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>* _CommentIds_k__BackingField; // 0x20
		::AIMGBHJFAFK _PostId_k__BackingField; // 0x28
		::EHKGGCKICFI _PlayerComment2Id_k__BackingField; // 0x2C
		::RPG::Client::TextID _PlayerComment1Text_k__BackingField; // 0x30
		::RPG::Client::TextID _PlayerComment2Text_k__BackingField; // 0x40
		::RPG::Client::TextID _PosterName_k__BackingField; // 0x50
		::EHKGGCKICFI _PlayerComment1Id_k__BackingField; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _PostTitle_k__BackingField; // 0x68
		::RPG::Client::TextID _PostContent_k__BackingField; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_CTOR_OFFSET))(this);
		}

		::AIMGBHJFAFK get_PostId()
		{
			return ((::AIMGBHJFAFK(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_POSTID_OFFSET))(this);
		}

		::System::Void set_PostId(::AIMGBHJFAFK a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIMGBHJFAFK))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_POSTID_OFFSET))(this, a1);
		}

		::System::String* get_PosterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_POSTERICONPATH_OFFSET))(this);
		}

		::System::Void set_PosterIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_POSTERICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PosterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_POSTERNAME_OFFSET))(this);
		}

		::System::Void set_PosterName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_POSTERNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PostTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_POSTTITLE_OFFSET))(this);
		}

		::System::Void set_PostTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_POSTTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PostContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_POSTCONTENT_OFFSET))(this);
		}

		::System::Void set_PostContent(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_POSTCONTENT_OFFSET))(this, a1);
		}

		::System::String* get_PostPicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_POSTPICPATH_OFFSET))(this);
		}

		::System::Void set_PostPicPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_POSTPICPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>* get_CommentIds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_COMMENTIDS_OFFSET))(this);
		}

		::System::Void set_CommentIds(::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::EHKGGCKICFI>*))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_COMMENTIDS_OFFSET))(this, a1);
		}

		::EHKGGCKICFI get_PlayerComment1Id()
		{
			return ((::EHKGGCKICFI(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_PLAYERCOMMENT1ID_OFFSET))(this);
		}

		::System::Void set_PlayerComment1Id(::EHKGGCKICFI a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHKGGCKICFI))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_PLAYERCOMMENT1ID_OFFSET))(this, a1);
		}

		::EHKGGCKICFI get_PlayerComment2Id()
		{
			return ((::EHKGGCKICFI(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_PLAYERCOMMENT2ID_OFFSET))(this);
		}

		::System::Void set_PlayerComment2Id(::EHKGGCKICFI a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHKGGCKICFI))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_PLAYERCOMMENT2ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlayerComment1Text()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_PLAYERCOMMENT1TEXT_OFFSET))(this);
		}

		::System::Void set_PlayerComment1Text(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_PLAYERCOMMENT1TEXT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlayerComment2Text()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_GET_PLAYERCOMMENT2TEXT_OFFSET))(this);
		}

		::System::Void set_PlayerComment2Text(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BCIFBNNDPFE_SET_PLAYERCOMMENT2TEXT_OFFSET))(this, a1);
		}

	};
