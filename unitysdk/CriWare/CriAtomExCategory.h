#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactParameter.h"
#include "unitysdk/CriWare/CriAtomEx_AisacInfo.h"
namespace System { class String; }

#define CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_1_OFFSET UNITYSDK_OFFSET(0x1752FD20)
#define CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_OFFSET UNITYSDK_OFFSET(0x1752FBE0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYID_OFFSET UNITYSDK_OFFSET(0x1752FC80)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYNAME_OFFSET UNITYSDK_OFFSET(0x1752FDE0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYID_OFFSET UNITYSDK_OFFSET(0x175301E0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYNAME_OFFSET UNITYSDK_OFFSET(0x17530300)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYID_OFFSET UNITYSDK_OFFSET(0x1752FF40)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYNAME_OFFSET UNITYSDK_OFFSET(0x175300A0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET UNITYSDK_OFFSET(0x1752E7B0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1752EAB0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUEBYNAME_OFFSET UNITYSDK_OFFSET(0x1752EC30)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYID_OFFSET UNITYSDK_OFFSET(0x17530420)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYNAME_OFFSET UNITYSDK_OFFSET(0x17530540)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYID_OFFSET UNITYSDK_OFFSET(0x17530660)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET UNITYSDK_OFFSET(0x17530780)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1752E450)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET UNITYSDK_OFFSET(0x1752EDA0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x1752F340)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1752F470)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x1752CEF0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1752CE40)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYID_OFFSET UNITYSDK_OFFSET(0x1752D370)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYNAME_OFFSET UNITYSDK_OFFSET(0x1752D250)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYID_OFFSET UNITYSDK_OFFSET(0x1752DCB0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYNAME_OFFSET UNITYSDK_OFFSET(0x1752DB90)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYID_OFFSET UNITYSDK_OFFSET(0x1752D830)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYNAME_OFFSET UNITYSDK_OFFSET(0x1752D710)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYID_OFFSET UNITYSDK_OFFSET(0x1752D130)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYNAME_OFFSET UNITYSDK_OFFSET(0x1752D010)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYID_OFFSET UNITYSDK_OFFSET(0x1752DA70)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYNAME_OFFSET UNITYSDK_OFFSET(0x1752D950)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x1752FA20)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x1752FB40)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x1752E030)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x1752DE00)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYID_OFFSET UNITYSDK_OFFSET(0x1752F5A0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1752F6C0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYID_OFFSET UNITYSDK_OFFSET(0x1752F7E0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1752F900)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1752E250)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x1752CDB0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1752CD00)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYID_OFFSET UNITYSDK_OFFSET(0x1752D5E0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYNAME_OFFSET UNITYSDK_OFFSET(0x1752D4A0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYID_OFFSET UNITYSDK_OFFSET(0x1752EEC0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYNAME_OFFSET UNITYSDK_OFFSET(0x1752EFE0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYID_OFFSET UNITYSDK_OFFSET(0x1752F100)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1752F220)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_1_OFFSET UNITYSDK_OFFSET(0x17530260)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_OFFSET UNITYSDK_OFFSET(0x17530160)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_1_OFFSET UNITYSDK_OFFSET(0x1752FFE0)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_OFFSET UNITYSDK_OFFSET(0x1752FEA0)
#define CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET UNITYSDK_OFFSET(0x1752E550)
#define CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1752E840)
#define CRIWARE_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUE_OFFSET UNITYSDK_OFFSET(0x1752EB60)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_1_OFFSET UNITYSDK_OFFSET(0x175304A0)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_OFFSET UNITYSDK_OFFSET(0x175303A0)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_1_OFFSET UNITYSDK_OFFSET(0x175306E0)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_OFFSET UNITYSDK_OFFSET(0x175305E0)
#define CRIWARE_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1752E350)
#define CRIWARE_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET UNITYSDK_OFFSET(0x1752ED00)
#define CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1752F3C0)
#define CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_OFFSET UNITYSDK_OFFSET(0x1752F2C0)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1750DB70)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x1750DA40)
#define CRIWARE_CRIATOMEXCATEGORY_ISMUTED_1_OFFSET UNITYSDK_OFFSET(0x1752D2F0)
#define CRIWARE_CRIATOMEXCATEGORY_ISMUTED_OFFSET UNITYSDK_OFFSET(0x1752D1B0)
#define CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_1_OFFSET UNITYSDK_OFFSET(0x1752DC30)
#define CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1752DAF0)
#define CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_1_OFFSET UNITYSDK_OFFSET(0x1752D7B0)
#define CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_OFFSET UNITYSDK_OFFSET(0x1752D670)
#define CRIWARE_CRIATOMEXCATEGORY_MUTE_1_OFFSET UNITYSDK_OFFSET(0x1752D0B0)
#define CRIWARE_CRIATOMEXCATEGORY_MUTE_OFFSET UNITYSDK_OFFSET(0x1752CF70)
#define CRIWARE_CRIATOMEXCATEGORY_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x1752D9F0)
#define CRIWARE_CRIATOMEXCATEGORY_PAUSE_OFFSET UNITYSDK_OFFSET(0x1752D8B0)
#define CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1752FAA0)
#define CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1752F9A0)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1752DFA0)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1752DD30)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISAC_1_OFFSET UNITYSDK_OFFSET(0x1752E0C0)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISAC_OFFSET UNITYSDK_OFFSET(0x1752DED0)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_1_OFFSET UNITYSDK_OFFSET(0x1752F620)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_OFFSET UNITYSDK_OFFSET(0x1752F520)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_1_OFFSET UNITYSDK_OFFSET(0x1752F860)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x1752F760)
#define CRIWARE_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1752E150)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1750D900)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1750D7C0)
#define CRIWARE_CRIATOMEXCATEGORY_SOLO_1_OFFSET UNITYSDK_OFFSET(0x1752D550)
#define CRIWARE_CRIATOMEXCATEGORY_SOLO_OFFSET UNITYSDK_OFFSET(0x1752D3F0)
#define CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_1_OFFSET UNITYSDK_OFFSET(0x1752F180)
#define CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x1752F080)
#define CRIWARE_CRIATOMEXCATEGORY_STOP_1_OFFSET UNITYSDK_OFFSET(0x1752EF40)
#define CRIWARE_CRIATOMEXCATEGORY_STOP_OFFSET UNITYSDK_OFFSET(0x1752EE40)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_TypeDefinitionIndex = 40957;

	class CriAtomExCategory : public ::System::Object
	{
	public:
		static ::System::Void SetVolume(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void SetVolume_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET))(a1, a2);
		}

		static ::System::Single GetVolume(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET))(a1);
		}

		static ::System::Single GetVolume_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET))(a1);
		}

		static ::System::Void Mute(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_MUTE_OFFSET))(a1, a2);
		}

		static ::System::Void Mute_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_MUTE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMuted(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISMUTED_OFFSET))(a1);
		}

		static ::System::Boolean IsMuted_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISMUTED_1_OFFSET))(a1);
		}

		static ::System::Void Solo(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SOLO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Solo_1(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SOLO_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsSoloed(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_OFFSET))(a1);
		}

		static ::System::Boolean IsSoloed_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_1_OFFSET))(a1);
		}

		static ::System::Void Pause(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_PAUSE_OFFSET))(a1, a2);
		}

		static ::System::Void Pause_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_PAUSE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPaused(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_OFFSET))(a1);
		}

		static ::System::Boolean IsPaused_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_1_OFFSET))(a1);
		}

		static ::System::Void SetAisacControl(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisac(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISAC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisacControl_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisac_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISAC_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter a2)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetAttachedAisacInfoById(::System::UInt32 a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacInfo a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::CriWare::CriAtomEx_AisacInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetAttachedAisacInfoByName(::System::String* a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacInfo a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::CriWare::CriAtomEx_AisacInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetCurrentAisacControlValue(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUE_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomExCategory_ReactStatus GetReactStatus(::System::String* a1)
		{
			return ((::CriWare::CriAtomExCategory_ReactStatus(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET))(a1);
		}

		static ::System::Void Stop(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOP_OFFSET))(a1);
		}

		static ::System::Void Stop_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOP_1_OFFSET))(a1);
		}

		static ::System::Void StopWithoutReleaseTime(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_OFFSET))(a1);
		}

		static ::System::Void StopWithoutReleaseTime_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_1_OFFSET))(a1);
		}

		static ::System::Single GetTotalVolume(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_OFFSET))(a1);
		}

		static ::System::Single GetTotalVolume_1(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_1_OFFSET))(a1);
		}

		static ::System::Void SetFadeInTime(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_OFFSET))(a1, a2);
		}

		static ::System::Void SetFadeInTime_1(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetFadeOutTime(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_OFFSET))(a1, a2);
		}

		static ::System::Void SetFadeOutTime_1(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean ResetAllAisacControl(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_OFFSET))(a1);
		}

		static ::System::Boolean ResetAllAisacControl_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_1_OFFSET))(a1);
		}

		static ::System::Void AttachAisac(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_OFFSET))(a1, a2);
		}

		static ::System::Void AttachAisac_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_1_OFFSET))(a1, a2);
		}

		static ::System::Void DetachAisac(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_OFFSET))(a1, a2);
		}

		static ::System::Void DetachAisac_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_1_OFFSET))(a1, a2);
		}

		static ::System::Void DetachAisacAll(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_OFFSET))(a1);
		}

		static ::System::Void DetachAisacAll_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_1_OFFSET))(a1);
		}

		static ::System::Int32 GetNumAttachedAisacs(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_OFFSET))(a1);
		}

		static ::System::Int32 GetNumAttachedAisacs_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_1_OFFSET))(a1);
		}

		static ::System::Int32 GetNumCuePlayingCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 GetNumCuePlayingCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_1_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetVolumeByName(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Single criAtomExCategory_GetVolumeByName(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetVolumeById(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET))(a1, a2);
		}

		static ::System::Single criAtomExCategory_GetVolumeById(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_MuteById(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsMutedById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_MuteByName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsMutedByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SoloById(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_IsSoloedById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SoloByName(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_IsSoloedByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_PauseById(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsPausedById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_PauseByName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsPausedByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetAisacControlById(::System::Int32 a1, ::System::UInt16 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExCategory_SetAisacControlByName(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExCategory_SetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter a2)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_GetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_GetAttachedAisacInfoById(::System::UInt32 a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_GetAttachedAisacInfoByName(::System::String* a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_GetCurrentAisacControlValueByName(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUEBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomExCategory_ReactStatus criAtomExCategory_GetReactStatus(::System::String* a1)
		{
			return ((::CriWare::CriAtomExCategory_ReactStatus(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET))(a1);
		}

		static ::System::Single criAtomExCategory_GetTotalVolumeById(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYID_OFFSET))(a1);
		}

		static ::System::Single criAtomExCategory_GetTotalVolumeByName(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetFadeInTimeById(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_SetFadeInTimeByName(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_SetFadeOutTimeById(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_SetFadeOutTimeByName(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_ResetAllAisacControlById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYID_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExCategory_ResetAllAisacControlByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_AttachAisacById(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_AttachAisacByName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_DetachAisacById(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_DetachAisacByName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_DetachAisacAllById(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_DetachAisacAllByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYNAME_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumAttachedAisacsById(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYID_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumAttachedAisacsByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYNAME_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumCuePlayingCountById(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYID_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumCuePlayingCountByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopById(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopWithoutReleaseTimeById(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopWithoutReleaseTimeByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYNAME_OFFSET))(a1);
		}

	};
}
