#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/OMPFPLKPOGG.h"
#include "unitysdk/JEIMDCMGJAM.h"

class LPBLGPPFNIH;
class NIBDDIKJPMO;
class POEPBDHPOKE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OHKBMKNIBHA_GFCKFEPALCK_OFFSET UNITYSDK_OFFSET(0x1E2FFAC0)
#define OHKBMKNIBHA_IKLIPJPDBCE_OFFSET UNITYSDK_OFFSET(0x1E2FFBB0)
#define OHKBMKNIBHA_JGECEJIHMLG_1_OFFSET UNITYSDK_OFFSET(0x1E2FC5E0)
#define OHKBMKNIBHA_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x1E2FA8D0)
#define OHKBMKNIBHA_JIDMADDMGIE_1_OFFSET UNITYSDK_OFFSET(0x1E2FCA00)
#define OHKBMKNIBHA_JIDMADDMGIE_2_OFFSET UNITYSDK_OFFSET(0x1E2FDFD0)
#define OHKBMKNIBHA_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x1E2FAD40)
#define OHKBMKNIBHA_OGBMNABLKBB_OFFSET UNITYSDK_OFFSET(0x1E2FF990)
#define OHKBMKNIBHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FFB50)

inline static constexpr unsigned int OHKBMKNIBHA_TypeDefinitionIndex = 93339;

class OHKBMKNIBHA : public ::OMPFPLKPOGG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKBMKNIBHA__CTOR_OFFSET))(this);
	}

	::System::Boolean JGECEJIHMLG(::LPBLGPPFNIH*& FNIOJLHMOMN, ::System::Boolean AIPPFEBKLFH, ::System::Boolean OOGHCEJJNHL, ::NIBDDIKJPMO* HLFCANNKIJL, ::System::Collections::Generic::HashSet_1<::System::Int32>* EAGCHNIKBMH)
	{
		return ((::System::Boolean(*)(::PVOID, ::LPBLGPPFNIH*&, ::System::Boolean, ::System::Boolean, ::NIBDDIKJPMO*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OHKBMKNIBHA_JGECEJIHMLG_OFFSET))(this, FNIOJLHMOMN, AIPPFEBKLFH, OOGHCEJJNHL, HLFCANNKIJL, EAGCHNIKBMH);
	}

	::System::Boolean JIDMADDMGIE(::LPBLGPPFNIH* FNIOJLHMOMN, ::System::Boolean PHANNMLBILI)
	{
		return ((::System::Boolean(*)(::PVOID, ::LPBLGPPFNIH*, ::System::Boolean))((::PBYTE)hIl2Cpp + OHKBMKNIBHA_JIDMADDMGIE_OFFSET))(this, FNIOJLHMOMN, PHANNMLBILI);
	}

	::System::Boolean JGECEJIHMLG_1(::POEPBDHPOKE*& KAELIFFOJOF, ::System::Boolean AIPPFEBKLFH, ::System::Boolean OOGHCEJJNHL, ::NIBDDIKJPMO* HLFCANNKIJL, ::System::Collections::Generic::HashSet_1<::System::Int32>* EAGCHNIKBMH)
	{
		return ((::System::Boolean(*)(::PVOID, ::POEPBDHPOKE*&, ::System::Boolean, ::System::Boolean, ::NIBDDIKJPMO*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OHKBMKNIBHA_JGECEJIHMLG_1_OFFSET))(this, KAELIFFOJOF, AIPPFEBKLFH, OOGHCEJJNHL, HLFCANNKIJL, EAGCHNIKBMH);
	}

	::System::Boolean JIDMADDMGIE_1(::POEPBDHPOKE* FNIOJLHMOMN, ::System::Boolean PHANNMLBILI)
	{
		return ((::System::Boolean(*)(::PVOID, ::POEPBDHPOKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + OHKBMKNIBHA_JIDMADDMGIE_1_OFFSET))(this, FNIOJLHMOMN, PHANNMLBILI);
	}

	::System::Boolean JIDMADDMGIE_2(::JEIMDCMGJAM FNIOJLHMOMN, ::System::Boolean PHANNMLBILI)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEIMDCMGJAM, ::System::Boolean))((::PBYTE)hIl2Cpp + OHKBMKNIBHA_JIDMADDMGIE_2_OFFSET))(this, FNIOJLHMOMN, PHANNMLBILI);
	}

	::System::String* OGBMNABLKBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKBMKNIBHA_OGBMNABLKBB_OFFSET))(this);
	}

	::MoleMole::Arcade::BallsRace::BrEntityType GFCKFEPALCK()
	{
		return ((::MoleMole::Arcade::BallsRace::BrEntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKBMKNIBHA_GFCKFEPALCK_OFFSET))(this);
	}

	::System::String* IKLIPJPDBCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKBMKNIBHA_IKLIPJPDBCE_OFFSET))(this);
	}
};
