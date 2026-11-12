#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/System/Object.h"
class AJDCLALCDLJ;
class HLJNBBHKKMI;
class LPHINGPIEAJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEPIEDFPFLN_CTOR_OFFSET UNITYSDK_OFFSET(0x16649100)
#define FEPIEDFPFLN_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x1664A090)
#define FEPIEDFPFLN_ECBMJAMOPDI_OFFSET UNITYSDK_OFFSET(0x1664A110)
#define FEPIEDFPFLN_HHBGDLMBGMJ_OFFSET UNITYSDK_OFFSET(0x16649110)
#define FEPIEDFPFLN_IIGCOFOGEFI_OFFSET UNITYSDK_OFFSET(0x16649AD0)
#define FEPIEDFPFLN_NFMBMPGGAKE_OFFSET UNITYSDK_OFFSET(0x16649CE0)
#define FEPIEDFPFLN_OABFIIKPBIJ_OFFSET UNITYSDK_OFFSET(0x16649BF0)
#define FEPIEDFPFLN_PGAOMFNMBHM_OFFSET UNITYSDK_OFFSET(0x16649900)
#define FEPIEDFPFLN_PIJFIDEPBJK_OFFSET UNITYSDK_OFFSET(0x16649510)
#define FEPIEDFPFLN_POMLKCOJAKB_OFFSET UNITYSDK_OFFSET(0x166493A0)

inline static constexpr unsigned int FEPIEDFPFLN_TypeDefinitionIndex = 79939;

	class FEPIEDFPFLN : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_CTOR_OFFSET))(this, a1);
		}

		::System::Void HHBGDLMBGMJ(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_HHBGDLMBGMJ_OFFSET))(this, a1);
		}

		::System::Int32 PGAOMFNMBHM(::LPHINGPIEAJ* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_PGAOMFNMBHM_OFFSET))(this, a1);
		}

		::System::Int32 IIGCOFOGEFI(::LPHINGPIEAJ* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_IIGCOFOGEFI_OFFSET))(this, a1);
		}

		::System::Void PIJFIDEPBJK(::LPHINGPIEAJ* a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::RPG::Client::LittleGame::ComicDessert::AnchorType))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_PIJFIDEPBJK_OFFSET))(this, a1, a2);
		}

		::System::Boolean NFMBMPGGAKE(::LPHINGPIEAJ* a1, ::AJDCLALCDLJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::AJDCLALCDLJ*))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_NFMBMPGGAKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ECBMJAMOPDI(::LPHINGPIEAJ* a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Int32))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_ECBMJAMOPDI_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 OABFIIKPBIJ(::System::Collections::Generic::List_1<::AJDCLALCDLJ*>* a1, ::AJDCLALCDLJ* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::AJDCLALCDLJ*>*, ::AJDCLALCDLJ*))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_OABFIIKPBIJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean POMLKCOJAKB(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_POMLKCOJAKB_OFFSET))(a1);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FEPIEDFPFLN_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
