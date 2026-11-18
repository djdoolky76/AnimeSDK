#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMPFPLKPOGG.h"
#include "unitysdk/JEIMDCMGJAM.h"

class LPBLGPPFNIH;
class NIBDDIKJPMO;
class POEPBDHPOKE;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NIBGNMDABKO_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x1F336080)
#define NIBGNMDABKO_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x1F336240)
#define NIBGNMDABKO_JGECEJIHMLG_1_OFFSET UNITYSDK_OFFSET(0x1F3307C0)
#define NIBGNMDABKO_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x1F32D700)
#define NIBGNMDABKO_JIDMADDMGIE_1_OFFSET UNITYSDK_OFFSET(0x1F330BE0)
#define NIBGNMDABKO_JIDMADDMGIE_2_OFFSET UNITYSDK_OFFSET(0x1F333310)
#define NIBGNMDABKO_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x1F32DB70)
#define NIBGNMDABKO_KHFHOELOFCK_OFFSET UNITYSDK_OFFSET(0x1F336190)
#define NIBGNMDABKO_PIJDOJAKFGK_OFFSET UNITYSDK_OFFSET(0x1F336360)
#define NIBGNMDABKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F336130)

inline static constexpr unsigned int NIBGNMDABKO_TypeDefinitionIndex = 95255;

class NIBGNMDABKO : public ::OMPFPLKPOGG
{
public:
	::System::UInt64 DOPACKLIKNA; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBGNMDABKO__CTOR_OFFSET))(this);
	}

	::System::Boolean JGECEJIHMLG(::LPBLGPPFNIH*& FNIOJLHMOMN, ::System::Boolean AIPPFEBKLFH, ::System::Boolean OOGHCEJJNHL, ::NIBDDIKJPMO* HLFCANNKIJL, ::System::Collections::Generic::HashSet_1<::System::Int32>* EAGCHNIKBMH)
	{
		return ((::System::Boolean(*)(::PVOID, ::LPBLGPPFNIH*&, ::System::Boolean, ::System::Boolean, ::NIBDDIKJPMO*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NIBGNMDABKO_JGECEJIHMLG_OFFSET))(this, FNIOJLHMOMN, AIPPFEBKLFH, OOGHCEJJNHL, HLFCANNKIJL, EAGCHNIKBMH);
	}

	::System::Boolean JIDMADDMGIE(::LPBLGPPFNIH* FNIOJLHMOMN, ::System::Boolean PHANNMLBILI)
	{
		return ((::System::Boolean(*)(::PVOID, ::LPBLGPPFNIH*, ::System::Boolean))((::PBYTE)hIl2Cpp + NIBGNMDABKO_JIDMADDMGIE_OFFSET))(this, FNIOJLHMOMN, PHANNMLBILI);
	}

	::System::Boolean JGECEJIHMLG_1(::POEPBDHPOKE*& KAELIFFOJOF, ::System::Boolean AIPPFEBKLFH, ::System::Boolean OOGHCEJJNHL, ::NIBDDIKJPMO* HLFCANNKIJL, ::System::Collections::Generic::HashSet_1<::System::Int32>* EAGCHNIKBMH)
	{
		return ((::System::Boolean(*)(::PVOID, ::POEPBDHPOKE*&, ::System::Boolean, ::System::Boolean, ::NIBDDIKJPMO*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NIBGNMDABKO_JGECEJIHMLG_1_OFFSET))(this, KAELIFFOJOF, AIPPFEBKLFH, OOGHCEJJNHL, HLFCANNKIJL, EAGCHNIKBMH);
	}

	::System::Boolean JIDMADDMGIE_1(::POEPBDHPOKE* FNIOJLHMOMN, ::System::Boolean PHANNMLBILI)
	{
		return ((::System::Boolean(*)(::PVOID, ::POEPBDHPOKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + NIBGNMDABKO_JIDMADDMGIE_1_OFFSET))(this, FNIOJLHMOMN, PHANNMLBILI);
	}

	::System::Boolean JIDMADDMGIE_2(::JEIMDCMGJAM FNIOJLHMOMN, ::System::Boolean PHANNMLBILI)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEIMDCMGJAM, ::System::Boolean))((::PBYTE)hIl2Cpp + NIBGNMDABKO_JIDMADDMGIE_2_OFFSET))(this, FNIOJLHMOMN, PHANNMLBILI);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBGNMDABKO_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void KHFHOELOFCK(::System::UInt64 IABBFDMGAPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NIBGNMDABKO_KHFHOELOFCK_OFFSET))(this, IABBFDMGAPH);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBGNMDABKO_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Boolean PIJDOJAKFGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBGNMDABKO_PIJDOJAKFGK_OFFSET))(this);
	}
};
