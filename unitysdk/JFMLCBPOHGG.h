#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class IFGHCMHLNNB;
namespace System { class String; }

#define JFMLCBPOHGG_CTOR_OFFSET UNITYSDK_OFFSET(0x16657590)
#define JFMLCBPOHGG_GET_CMTLIST_OFFSET UNITYSDK_OFFSET(0x16657580)
#define JFMLCBPOHGG_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x16657560)
#define JFMLCBPOHGG_GET_ID_OFFSET UNITYSDK_OFFSET(0x16657540)
#define JFMLCBPOHGG_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x16657550)
#define JFMLCBPOHGG_GET_LIKECOUNT_OFFSET UNITYSDK_OFFSET(0x16657570)

	class JFMLCBPOHGG : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _CmtList_k__BackingField; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Single _LikeCount_k__BackingField; // 0x24
		::RPG::Client::TextID _Content_k__BackingField; // 0x28
		::System::Void _ctor(::IFGHCMHLNNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFGHCMHLNNB*))((::PBYTE)hIl2Cpp + JFMLCBPOHGG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLCBPOHGG_GET_ID_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLCBPOHGG_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLCBPOHGG_GET_CONTENT_OFFSET))(this);
		}

		::System::Single get_LikeCount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLCBPOHGG_GET_LIKECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CmtList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLCBPOHGG_GET_CMTLIST_OFFSET))(this);
		}

	};
