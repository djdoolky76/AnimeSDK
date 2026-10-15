#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHAIOJBFAK;
class HGDELEAHIJO;
namespace RPG::Client { class RawItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define BJHAIOJBFAK_AIFJLBIEPFA_OFFSET UNITYSDK_OFFSET(0x1C408970)
#define BJHAIOJBFAK_BCDKMDHPBKA_OFFSET UNITYSDK_OFFSET(0x1C408820)
#define BJHAIOJBFAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C408C70)
#define BJHAIOJBFAK_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0x1C408AE0)
#define BJHAIOJBFAK_ICLDDLDJBFL_OFFSET UNITYSDK_OFFSET(0x1C408420)
#define BJHAIOJBFAK_JLHENLIKDGF_OFFSET UNITYSDK_OFFSET(0x1C408F90)
#define BJHAIOJBFAK_KEJCFMJOCOH_OFFSET UNITYSDK_OFFSET(0x1C408D10)
#define BJHAIOJBFAK_LOJMCJIILCN_OFFSET UNITYSDK_OFFSET(0x1C4092F0)
#define BJHAIOJBFAK_MCEMEHPCOLP_OFFSET UNITYSDK_OFFSET(0x1C4084C0)
#define BJHAIOJBFAK_MFFKOKFNLAG_OFFSET UNITYSDK_OFFSET(0x1C408550)
#define BJHAIOJBFAK_NGCFPFALCGD_OFFSET UNITYSDK_OFFSET(0x1C408470)

inline static constexpr unsigned int BJHAIOJBFAK_TypeDefinitionIndex = 41545;

	class BJHAIOJBFAK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::RawItem*>* JIHHCIHPODN; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RawItem*>* KJPFENPNFBP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_CTOR_OFFSET))(this);
		}

		::System::Int32 ICLDDLDJBFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_ICLDDLDJBFL_OFFSET))(this);
		}

		::System::Boolean NGCFPFALCGD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_NGCFPFALCGD_OFFSET))(this, a1);
		}

		::HGDELEAHIJO* MCEMEHPCOLP(::System::Int32 a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_MCEMEHPCOLP_OFFSET))(this, a1);
		}

		::System::Boolean MFFKOKFNLAG(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_MFFKOKFNLAG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BCDKMDHPBKA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_BCDKMDHPBKA_OFFSET))(this, a1);
		}

		::RPG::Client::RawItem* AIFJLBIEPFA(::System::String* a1)
		{
			return ((::RPG::Client::RawItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_AIFJLBIEPFA_OFFSET))(this, a1);
		}

		static ::BJHAIOJBFAK* EFMKONMGMNA(::System::String* a1)
		{
			return ((::BJHAIOJBFAK*(*)(::System::String*))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_EFMKONMGMNA_OFFSET))(a1);
		}

		::System::Void KEJCFMJOCOH(::System::IO::StreamReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_KEJCFMJOCOH_OFFSET))(this, a1);
		}

		::System::Void JLHENLIKDGF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_JLHENLIKDGF_OFFSET))(this, a1);
		}

		::HGDELEAHIJO* LOJMCJIILCN(::System::String* a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJHAIOJBFAK_LOJMCJIILCN_OFFSET))(this, a1);
		}

	};
