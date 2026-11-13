#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetSkinType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_COMPONENTASSETSKINITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98DC40)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_GET_CURRENTSKINNAME_OFFSET UNITYSDK_OFFSET(0x1C98DB50)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_GET_CURRENTSKINPATH_OFFSET UNITYSDK_OFFSET(0x1C98DB60)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_GET_SKINRESMAP_OFFSET UNITYSDK_OFFSET(0x1C98C7A0)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_GKOPFLLLILF_OFFSET UNITYSDK_OFFSET(0x1C98D7F0)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_HNPCKPBKGDK_OFFSET UNITYSDK_OFFSET(0x1C98D760)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_NAAIOIHONFJ_OFFSET UNITYSDK_OFFSET(0x1C98AB80)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_SET_CURRENTSKINNAME_OFFSET UNITYSDK_OFFSET(0x1C98AA60)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetSkinItem_TypeDefinitionIndex = 70349;

	class ComponentAssetSkinItem : public ::System::Object
	{
	public:
		::RPG::Client::ComponentAssetSkinType SkinType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Filter; // 0x18
		::System::String* DefaultSkinName; // 0x20
		::System::String* _CurrentSkinName; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _SkinResMap; // 0x30
		// static const ::System::String* EmptySkinName; // 0x0
		// static const ::System::String* CustomSkinName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_CTOR_OFFSET))(this);
		}

		::System::String* HNPCKPBKGDK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_HNPCKPBKGDK_OFFSET))(this);
		}

		::System::Void NAAIOIHONFJ(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_NAAIOIHONFJ_OFFSET))(this, a1);
		}

		::System::Void GKOPFLLLILF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_GKOPFLLLILF_OFFSET))(this);
		}

		::System::String* get_CurrentSkinName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_GET_CURRENTSKINNAME_OFFSET))(this);
		}

		::System::Void set_CurrentSkinName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_SET_CURRENTSKINNAME_OFFSET))(this, a1);
		}

		::System::String* get_CurrentSkinPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_GET_CURRENTSKINPATH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_SkinResMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_GET_SKINRESMAP_OFFSET))(this);
		}

	};
}
