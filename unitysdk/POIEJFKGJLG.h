#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/MAGCBFJCKLE.h"
class AkCallbackInfo;
class IBCDHMDKNOP;
namespace RPG::GameCore { class MunicipalChatActionTalk; }
namespace RPG::GameCore { class TalkSentenceConfigRow; }
namespace System { class String; }

#define POIEJFKGJLG_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xC36C120)
#define POIEJFKGJLG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC36C200)
#define POIEJFKGJLG_CTOR_OFFSET UNITYSDK_OFFSET(0xC36B7B0)
#define POIEJFKGJLG_FGDOBFJOONG_OFFSET UNITYSDK_OFFSET(0xC36B910)
#define POIEJFKGJLG_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xC36B7C0)
#define POIEJFKGJLG_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xC36B810)
#define POIEJFKGJLG_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xC36BAA0)
#define POIEJFKGJLG_LNNLMNBOPCB_OFFSET UNITYSDK_OFFSET(0xC36C0E0)
#define POIEJFKGJLG_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xC36B9C0)
#define POIEJFKGJLG_MHKHLEMLPOD_OFFSET UNITYSDK_OFFSET(0xC36B870)
#define POIEJFKGJLG_OOENBABOOMK_OFFSET UNITYSDK_OFFSET(0xC36BED0)
#define POIEJFKGJLG_PFOLABPJNGB_OFFSET UNITYSDK_OFFSET(0xC36C170)

	class POIEJFKGJLG : public ::MAGCBFJCKLE
	{
	public:
		::RPG::GameCore::TalkSentenceConfigRow* KOINHLFPCOL; // 0x30
		::System::String* IIEMGFODKBF; // 0x38
		::System::Boolean IMFPEBIOHNM; // 0x40
		::System::Boolean OJMBBJCEDGF; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single HBCGHGENFCG; // 0x44
		::System::Single JEAKFIIFNNH; // 0x48
		::System::Single ONHKFJIAPDL; // 0x4C
		::System::Single BEOHLINKPIO; // 0x50
		::System::UInt32 LAHJKCPEDNI; // 0x54
		static ::System::Single* StaticGet_DJCGJDNLBGO()
		{
			return (::System::Single*)UnitySDK::FromName("", "POIEJFKGJLG")->GetStaticField(0x2510);
		}

		::System::Void _ctor(::IBCDHMDKNOP* a1, ::RPG::GameCore::MunicipalChatActionTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IBCDHMDKNOP*, ::RPG::GameCore::MunicipalChatActionTalk*))((::PBYTE)hIl2Cpp + POIEJFKGJLG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POIEJFKGJLG_CCTOR_OFFSET))();
		}

		::RPG::GameCore::MunicipalChatActionTalk* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::MunicipalChatActionTalk*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEJFKGJLG_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEJFKGJLG_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEJFKGJLG_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POIEJFKGJLG_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void LNNLMNBOPCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEJFKGJLG_LNNLMNBOPCB_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEJFKGJLG_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void OOENBABOOMK(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + POIEJFKGJLG_OOENBABOOMK_OFFSET))(this, a1, a2);
		}

		::System::Void FGDOBFJOONG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEJFKGJLG_FGDOBFJOONG_OFFSET))(this);
		}

		::System::Void MHKHLEMLPOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEJFKGJLG_MHKHLEMLPOD_OFFSET))(this);
		}

		::System::Void PFOLABPJNGB(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + POIEJFKGJLG_PFOLABPJNGB_OFFSET))(this, a1, a2, a3);
		}

	};
