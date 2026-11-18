#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BPHGNMNLLHF;
class DBFEEDDJOPF;
class IOOIHHOJOPI;
namespace MoleMole { class UIAvatarSpecialAwakenRowWidgetContext; }
namespace System { class String; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class LJHFMILANJA_1;

#define MIPGOOHDFDP_AOOBHACJAJL_OFFSET UNITYSDK_OFFSET(0x1A65D1B0)
#define MIPGOOHDFDP_DDPJCGAHMGC_OFFSET UNITYSDK_OFFSET(0x1A65D420)
#define MIPGOOHDFDP_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1A65C840)
#define MIPGOOHDFDP_FINJHEKMOBL_OFFSET UNITYSDK_OFFSET(0x1A65CB90)
#define MIPGOOHDFDP_JEJEBFDIEEE_OFFSET UNITYSDK_OFFSET(0x1A65D840)
#define MIPGOOHDFDP_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x1A65CE80)
#define MIPGOOHDFDP_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x1A65CB80)
#define MIPGOOHDFDP_NGKCMNGOHBG_OFFSET UNITYSDK_OFFSET(0x1A65CE70)
#define MIPGOOHDFDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65CB30)

inline static constexpr unsigned int MIPGOOHDFDP_TypeDefinitionIndex = 51972;

class MIPGOOHDFDP : public ::PBJOCICFNGK
{
public:
	::LJHFMILANJA_1<::System::Int32>* _LECPDNBPLPO_k__BackingField; // 0x50
	::LJHFMILANJA_1<::System::Int32>* FGIIEBEGFPC; // 0x58
	::LJHFMILANJA_1<::System::Int32>* MDHLACGHOBG; // 0x60
	::LJHFMILANJA_1<::BPHGNMNLLHF*>* FPEMKHPLAEO; // 0x68
	::BFMLEHMAGAK_1<::DBFEEDDJOPF*>* DJGANICJJAO; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPGOOHDFDP__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MIPGOOHDFDP_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::LJHFMILANJA_1<::System::Int32>* MDPBPBNMKJA()
	{
		return ((::LJHFMILANJA_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPGOOHDFDP_MDPBPBNMKJA_OFFSET))(this);
	}

	::Foundation::AssetPath FINJHEKMOBL()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPGOOHDFDP_FINJHEKMOBL_OFFSET))(this);
	}

	::System::Void NGKCMNGOHBG(::LJHFMILANJA_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIPGOOHDFDP_NGKCMNGOHBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIAvatarSpecialAwakenRowWidgetContext* HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarSpecialAwakenRowWidgetContext*))((::PBYTE)hIl2Cpp + MIPGOOHDFDP_KDLADFIENBL_OFFSET))(this, HBMGHPEPBNC);
	}

	::DBFEEDDJOPF* AOOBHACJAJL()
	{
		return ((::DBFEEDDJOPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPGOOHDFDP_AOOBHACJAJL_OFFSET))(this);
	}

	::System::Void DDPJCGAHMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPGOOHDFDP_DDPJCGAHMGC_OFFSET))(this);
	}

	::System::String* JEJEBFDIEEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPGOOHDFDP_JEJEBFDIEEE_OFFSET))(this);
	}
};
