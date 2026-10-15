#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/KHBEIDOCBCN.h"
#include "unitysdk/RPG/Client/TextID.h"
class AABPMMILMLE;
class AGJOIILGIHK;
class ENDEBAMMJHJ;
class HHMGCCNGECJ;
class HIMPJFMPEPA;
class MLNOEMIDHME;
class MNCBEDBDDHL;
class POBLGKIGINE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define KGHCBBBMGJJ_BOMAFICLJGJ_OFFSET UNITYSDK_OFFSET(0xB3E5CD0)
#define KGHCBBBMGJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB3E5910)
#define KGHCBBBMGJJ_DJHOMJHONLP_OFFSET UNITYSDK_OFFSET(0xB3E60F0)
#define KGHCBBBMGJJ_FPDPGHDAIFC_OFFSET UNITYSDK_OFFSET(0xB3E6520)
#define KGHCBBBMGJJ_GOLDALDKCEO_OFFSET UNITYSDK_OFFSET(0xB3E6370)
#define KGHCBBBMGJJ_HCJEKDPGABN_OFFSET UNITYSDK_OFFSET(0xB3E6230)
#define KGHCBBBMGJJ_KOLNCFIJCKH_OFFSET UNITYSDK_OFFSET(0xB3E59B0)
#define KGHCBBBMGJJ_MCKBHJNIBMJ_OFFSET UNITYSDK_OFFSET(0xB3E6720)
#define KGHCBBBMGJJ_MHHEAINPAMI_OFFSET UNITYSDK_OFFSET(0xB3E6050)
#define KGHCBBBMGJJ_NMHEGIKICBK_OFFSET UNITYSDK_OFFSET(0xB3E5BB0)
#define KGHCBBBMGJJ_NNICOCFHCBJ_OFFSET UNITYSDK_OFFSET(0xB3E62B0)

inline static constexpr unsigned int KGHCBBBMGJJ_TypeDefinitionIndex = 74496;

	class KGHCBBBMGJJ : public ::KHBEIDOCBCN
	{
	public:
		::ENDEBAMMJHJ* OBDOFAHAOPK; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void KOLNCFIJCKH(::HHMGCCNGECJ* a1, ::CBPDACMBHGL a2)
		{
			return ((::System::Void(*)(::PVOID, ::HHMGCCNGECJ*, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_KOLNCFIJCKH_OFFSET))(this, a1, a2);
		}

		::System::Void BOMAFICLJGJ(::POBLGKIGINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_BOMAFICLJGJ_OFFSET))(this, a1);
		}

		::System::Void DJHOMJHONLP(::MLNOEMIDHME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLNOEMIDHME*))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_DJHOMJHONLP_OFFSET))(this, a1);
		}

		::AGJOIILGIHK* HCJEKDPGABN()
		{
			return ((::AGJOIILGIHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_HCJEKDPGABN_OFFSET))(this);
		}

		::System::Void NNICOCFHCBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_NNICOCFHCBJ_OFFSET))(this);
		}

		::System::Boolean GOLDALDKCEO(::System::UInt32 a1, ::AABPMMILMLE* a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::AABPMMILMLE*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_GOLDALDKCEO_OFFSET))(this, a1, a2, a3);
		}

		::System::String* FPDPGHDAIFC(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_FPDPGHDAIFC_OFFSET))(this, a1);
		}

		::ENDEBAMMJHJ* MCKBHJNIBMJ()
		{
			return ((::ENDEBAMMJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_MCKBHJNIBMJ_OFFSET))(this);
		}

		::System::Void NMHEGIKICBK(::System::Collections::Generic::IList_1<::HIMPJFMPEPA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::HIMPJFMPEPA*>*))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_NMHEGIKICBK_OFFSET))(this, a1);
		}

		::System::Void MHHEAINPAMI(::MNCBEDBDDHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCBEDBDDHL*))((::PBYTE)hIl2Cpp + KGHCBBBMGJJ_MHHEAINPAMI_OFFSET))(this, a1);
		}

	};
