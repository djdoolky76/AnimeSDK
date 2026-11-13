#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MuseumAvatarItemData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MUSEUMMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2A03F0)
#define RPG_CLIENT_MUSEUMMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A0430)
#define RPG_CLIENT_MUSEUMMODULE___C__GET_MUSEUMAVATARCOUNT_B__260_0_OFFSET UNITYSDK_OFFSET(0x1C2A0440)
#define RPG_CLIENT_MUSEUMMODULE___C__GET_UNLOCKAVATARCOUNT_B__262_0_OFFSET UNITYSDK_OFFSET(0x1C2A0470)
#define RPG_CLIENT_MUSEUMMODULE___C__GET_UNLOCKEXHIBITITEMCOUNT_B__264_0_OFFSET UNITYSDK_OFFSET(0x1C2A04C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule___c_TypeDefinitionIndex = 68270;

	class MuseumModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72350);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>, ::System::Boolean>** StaticGet___9__260_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72358);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>, ::System::Boolean>** StaticGet___9__264_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72360);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>, ::System::Boolean>** StaticGet___9__262_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_MuseumAvatarCount_b__260_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__GET_MUSEUMAVATARCOUNT_B__260_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnlockAvatarCount_b__262_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__GET_UNLOCKAVATARCOUNT_B__262_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnlockExhibitItemCount_b__264_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__GET_UNLOCKEXHIBITITEMCOUNT_B__264_0_OFFSET))(this, a1);
		}

	};
}
