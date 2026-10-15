#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinPrepareFightTalker.h"
#include "unitysdk/System/Object.h"
class CIPCDNCKCGE;
class JBEKMNHAJGA;
class JLMLDPMGNNI;
class KCJPKLJAAPM;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PINPFDNJBBB_AJINOPCILJH_OFFSET UNITYSDK_OFFSET(0xC2737B0)
#define PINPFDNJBBB_AMPCFPICDAI_OFFSET UNITYSDK_OFFSET(0xC273C30)
#define PINPFDNJBBB_BCHENJAPKNK_OFFSET UNITYSDK_OFFSET(0xC2731C0)
#define PINPFDNJBBB_CTOR_OFFSET UNITYSDK_OFFSET(0xC2724E0)
#define PINPFDNJBBB_EJHHNLODILC_OFFSET UNITYSDK_OFFSET(0xC274200)
#define PINPFDNJBBB_ELLGBCDMCML_OFFSET UNITYSDK_OFFSET(0xC274140)
#define PINPFDNJBBB_EMMNKDKNEGP_OFFSET UNITYSDK_OFFSET(0xC272D30)
#define PINPFDNJBBB_FEPMLFPHLGI_OFFSET UNITYSDK_OFFSET(0xC272EE0)
#define PINPFDNJBBB_HFJDIDCKJBF_OFFSET UNITYSDK_OFFSET(0xC273180)
#define PINPFDNJBBB_IDNJAEMHOGL_OFFSET UNITYSDK_OFFSET(0xC2744E0)
#define PINPFDNJBBB_JIBPPAKCLPE_OFFSET UNITYSDK_OFFSET(0xC272BC0)
#define PINPFDNJBBB_NCDKIPILDPD_OFFSET UNITYSDK_OFFSET(0xC272E30)
#define PINPFDNJBBB_OECFJEKKIME_OFFSET UNITYSDK_OFFSET(0xC272A20)
#define PINPFDNJBBB_PMJLIGCPPLI_OFFSET UNITYSDK_OFFSET(0xC273540)

	class PINPFDNJBBB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CIPCDNCKCGE*>* EPMPOANJMKB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>* DLFPKICOJDB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINPFDNJBBB_CTOR_OFFSET))(this);
		}

		::CIPCDNCKCGE* EMMNKDKNEGP(::System::UInt32 a1)
		{
			return ((::CIPCDNCKCGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PINPFDNJBBB_EMMNKDKNEGP_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* NCDKIPILDPD(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PINPFDNJBBB_NCDKIPILDPD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>* FEPMLFPHLGI(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PINPFDNJBBB_FEPMLFPHLGI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::CIPCDNCKCGE*>* HFJDIDCKJBF()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::CIPCDNCKCGE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PINPFDNJBBB_HFJDIDCKJBF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* BCHENJAPKNK()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PINPFDNJBBB_BCHENJAPKNK_OFFSET))(this);
		}

		::System::Void PMJLIGCPPLI(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PINPFDNJBBB_PMJLIGCPPLI_OFFSET))(this, a1);
		}

		::System::Void AJINOPCILJH(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PINPFDNJBBB_AJINOPCILJH_OFFSET))(this, a1);
		}

		static ::CIPCDNCKCGE* OECFJEKKIME(::System::UInt32 a1)
		{
			return ((::CIPCDNCKCGE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PINPFDNJBBB_OECFJEKKIME_OFFSET))(a1);
		}

		static ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* JIBPPAKCLPE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PINPFDNJBBB_JIBPPAKCLPE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* AMPCFPICDAI(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PINPFDNJBBB_AMPCFPICDAI_OFFSET))(a1);
		}

		static ::JLMLDPMGNNI* ELLGBCDMCML(::System::UInt32 a1)
		{
			return ((::JLMLDPMGNNI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PINPFDNJBBB_ELLGBCDMCML_OFFSET))(a1);
		}

		static ::JBEKMNHAJGA* EJHHNLODILC(::KCJPKLJAAPM* a1)
		{
			return ((::JBEKMNHAJGA*(*)(::KCJPKLJAAPM*))((::PBYTE)hIl2Cpp + PINPFDNJBBB_EJHHNLODILC_OFFSET))(a1);
		}

		static ::RPG::GameCore::FateRinPrepareFightTalker IDNJAEMHOGL(::RPG::GameCore::FateRinPrepareFightTalker a1)
		{
			return ((::RPG::GameCore::FateRinPrepareFightTalker(*)(::RPG::GameCore::FateRinPrepareFightTalker))((::PBYTE)hIl2Cpp + PINPFDNJBBB_IDNJAEMHOGL_OFFSET))(a1);
		}

	};
