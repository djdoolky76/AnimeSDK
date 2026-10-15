#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIFAECNJBLC;
class HGDELEAHIJO;
class HJEIEIFLDGN;
class KLBIIOCGHGD;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define KLBIIOCGHGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB4DE7F0)
#define KLBIIOCGHGD_DPGMAIHLIDG_1_OFFSET UNITYSDK_OFFSET(0xB4DF0D0)
#define KLBIIOCGHGD_DPGMAIHLIDG_OFFSET UNITYSDK_OFFSET(0xB4DED00)
#define KLBIIOCGHGD_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0xB4DE640)
#define KLBIIOCGHGD_HMCFHDDNHNN_OFFSET UNITYSDK_OFFSET(0xB4DE8B0)
#define KLBIIOCGHGD_ICLDDLDJBFL_OFFSET UNITYSDK_OFFSET(0xB4DD7E0)
#define KLBIIOCGHGD_JEOKONJBCIO_OFFSET UNITYSDK_OFFSET(0xB4DDA90)
#define KLBIIOCGHGD_JLHENLIKDGF_OFFSET UNITYSDK_OFFSET(0xB4DE510)
#define KLBIIOCGHGD_KEJCFMJOCOH_OFFSET UNITYSDK_OFFSET(0xB4DE0D0)
#define KLBIIOCGHGD_LGPNHIMEMIF_OFFSET UNITYSDK_OFFSET(0xB4DDCF0)
#define KLBIIOCGHGD_LOJMCJIILCN_OFFSET UNITYSDK_OFFSET(0xB4DFB70)
#define KLBIIOCGHGD_MCEMEHPCOLP_OFFSET UNITYSDK_OFFSET(0xB4DD830)
#define KLBIIOCGHGD_MFFKOKFNLAG_OFFSET UNITYSDK_OFFSET(0xB4DF4D0)
#define KLBIIOCGHGD_MMKEOHOKACM_OFFSET UNITYSDK_OFFSET(0xB4DF7A0)
#define KLBIIOCGHGD_NGCFPFALCGD_OFFSET UNITYSDK_OFFSET(0xB4DD8C0)
#define KLBIIOCGHGD_OBBFOCGNJCJ_OFFSET UNITYSDK_OFFSET(0xB4DFA50)

	class KLBIIOCGHGD : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HHJKKANJNJE; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AudioBundleInfoItem*>* LHMFPHHBIDE; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* JKBAFBABKGJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_CTOR_OFFSET))(this);
		}

		::System::Int32 ICLDDLDJBFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_ICLDDLDJBFL_OFFSET))(this);
		}

		::HGDELEAHIJO* MCEMEHPCOLP(::System::Int32 a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_MCEMEHPCOLP_OFFSET))(this, a1);
		}

		::System::Boolean NGCFPFALCGD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_NGCFPFALCGD_OFFSET))(this, a1);
		}

		::System::Void JEOKONJBCIO(::RPG::Client::AudioBundleInfoItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_JEOKONJBCIO_OFFSET))(this, a1);
		}

		::System::Void LGPNHIMEMIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_LGPNHIMEMIF_OFFSET))(this);
		}

		::System::Void JLHENLIKDGF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_JLHENLIKDGF_OFFSET))(this, a1);
		}

		static ::KLBIIOCGHGD* EFMKONMGMNA(::System::String* a1)
		{
			return ((::KLBIIOCGHGD*(*)(::System::String*))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_EFMKONMGMNA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::CIFAECNJBLC*>* HMCFHDDNHNN(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::CIFAECNJBLC*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_HMCFHDDNHNN_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::CIFAECNJBLC*>* DPGMAIHLIDG(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::CIFAECNJBLC*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_DPGMAIHLIDG_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::CIFAECNJBLC*>* DPGMAIHLIDG_1(::System::String* a1, ::HJEIEIFLDGN* a2)
		{
			return ((::System::Collections::Generic::List_1<::CIFAECNJBLC*>*(*)(::System::String*, ::HJEIEIFLDGN*))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_DPGMAIHLIDG_1_OFFSET))(a1, a2);
		}

		::System::Void KEJCFMJOCOH(::System::IO::StreamReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_KEJCFMJOCOH_OFFSET))(this, a1);
		}

		::System::Boolean MFFKOKFNLAG(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_MFFKOKFNLAG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MMKEOHOKACM(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_MMKEOHOKACM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OBBFOCGNJCJ(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_OBBFOCGNJCJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::HGDELEAHIJO* LOJMCJIILCN(::System::String* a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLBIIOCGHGD_LOJMCJIILCN_OFFSET))(this, a1);
		}

	};
