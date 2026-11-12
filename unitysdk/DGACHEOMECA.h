#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class CDKEBLNOEPH;
class FDJHLKGICBK;
class HJEIEIFLDGN;
class HPPGIADOJBF;
class LFCKLPMBGGI;
namespace RPG::Client { template <typename T> class DelayList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DGACHEOMECA_ACJFCNFOAOJ_OFFSET UNITYSDK_OFFSET(0xF1A60E0)
#define DGACHEOMECA_CHPCGNPCKDA_OFFSET UNITYSDK_OFFSET(0xF1A4AD0)
#define DGACHEOMECA_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0xF1A5190)
#define DGACHEOMECA_CTOR_OFFSET UNITYSDK_OFFSET(0xF1A4E00)
#define DGACHEOMECA_DHLMBJKLENG_OFFSET UNITYSDK_OFFSET(0xF1A47C0)
#define DGACHEOMECA_FLHAEFKDIHO_OFFSET UNITYSDK_OFFSET(0xF1A6A00)
#define DGACHEOMECA_FMHLLFCGBPM_OFFSET UNITYSDK_OFFSET(0xF1A6220)
#define DGACHEOMECA_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xF1A3C80)
#define DGACHEOMECA_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xF1A3BC0)
#define DGACHEOMECA_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xF1A3C90)
#define DGACHEOMECA_GET_ISNEEDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xF1A4A60)
#define DGACHEOMECA_HDENDKJKEHI_OFFSET UNITYSDK_OFFSET(0xF1A48F0)
#define DGACHEOMECA_IFDIFJOALAH_OFFSET UNITYSDK_OFFSET(0xF1A3E50)
#define DGACHEOMECA_IJDBFPDLECG_OFFSET UNITYSDK_OFFSET(0xF1A4D70)
#define DGACHEOMECA_JFAGKJEKKJN_OFFSET UNITYSDK_OFFSET(0xF1A4A70)
#define DGACHEOMECA_JHNFEKDFCIB_OFFSET UNITYSDK_OFFSET(0xF1A4870)
#define DGACHEOMECA_KAAEGEHPLHC_OFFSET UNITYSDK_OFFSET(0xF1A6170)
#define DGACHEOMECA_KNHJHHDJLGC_OFFSET UNITYSDK_OFFSET(0xF1A4670)
#define DGACHEOMECA_LADICPOACOE_OFFSET UNITYSDK_OFFSET(0xF1A67A0)
#define DGACHEOMECA_LHIBMOJONAE_OFFSET UNITYSDK_OFFSET(0xF1A6970)
#define DGACHEOMECA_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xF1A62B0)
#define DGACHEOMECA_PDCHHJKNAAD_OFFSET UNITYSDK_OFFSET(0xF1A5410)
#define DGACHEOMECA_PJEOGDGLGMB_OFFSET UNITYSDK_OFFSET(0xF1A5230)
#define DGACHEOMECA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF1A6AB0)

inline static constexpr unsigned int DGACHEOMECA_TypeDefinitionIndex = 60726;

	class DGACHEOMECA : public ::System::Object
	{
	public:
		::RPG::Client::DelayList_1<::LFCKLPMBGGI*>* AKPCCNGJLMN; // 0x10
		::System::String* ABLOPGEMHBF; // 0x18
		::CDKEBLNOEPH* IAJHKEAAIAH; // 0x20
		::RPG::Client::DelayList_1<::HPPGIADOJBF*>* DAMNBKKGHFK; // 0x28
		::FDJHLKGICBK* IOLHICOHGKD; // 0x30
		::System::String* OLECEPPMNAL; // 0x38
		::RPG::Client::DelayList_1<::HPPGIADOJBF*>* MMJECIPHDKD; // 0x40
		::HJEIEIFLDGN* GJAKPOFLMPD; // 0x48
		::System::Boolean BDINGIJDIIK; // 0x50
		::System::Nullable_1<::System::Boolean> JOIMCLCAGHP; // 0x51
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_CTOR_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_BaseAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_GET_BASEABSOLUTEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_GET_ISENABLE_OFFSET))(this);
		}

		::System::String* KNHJHHDJLGC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_KNHJHHDJLGC_OFFSET))(this);
		}

		::System::String* DHLMBJKLENG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_DHLMBJKLENG_OFFSET))(this);
		}

		::HJEIEIFLDGN* HDENDKJKEHI()
		{
			return ((::HJEIEIFLDGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_HDENDKJKEHI_OFFSET))(this);
		}

		::System::Boolean get_IsNeedDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_GET_ISNEEDDOWNLOAD_OFFSET))(this);
		}

		::FDJHLKGICBK* JFAGKJEKKJN()
		{
			return ((::FDJHLKGICBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_JFAGKJEKKJN_OFFSET))(this);
		}

		::System::Boolean IJDBFPDLECG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_IJDBFPDLECG_OFFSET))(this);
		}

		::System::String* JHNFEKDFCIB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_JHNFEKDFCIB_OFFSET))(this);
		}

		::FDJHLKGICBK* CHPCGNPCKDA()
		{
			return ((::FDJHLKGICBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_CHPCGNPCKDA_OFFSET))(this);
		}

		::System::Boolean PJEOGDGLGMB(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + DGACHEOMECA_PJEOGDGLGMB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IFDIFJOALAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_IFDIFJOALAH_OFFSET))(this);
		}

		::System::Boolean PDCHHJKNAAD(::LFCKLPMBGGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFCKLPMBGGI*))((::PBYTE)hIl2Cpp + DGACHEOMECA_PDCHHJKNAAD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HPPGIADOJBF*>* ACJFCNFOAOJ()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HPPGIADOJBF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_ACJFCNFOAOJ_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HPPGIADOJBF*>* KAAEGEHPLHC()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HPPGIADOJBF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_KAAEGEHPLHC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>* FMHLLFCGBPM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_FMHLLFCGBPM_OFFSET))(this);
		}

		::System::Void ClearServerCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_CLEARSERVERCACHE_OFFSET))(this);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_ONALLSUCCEED_OFFSET))(this);
		}

		::System::Void LADICPOACOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_LADICPOACOE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* LHIBMOJONAE()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_LHIBMOJONAE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* FLHAEFKDIHO()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_FLHAEFKDIHO_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_TOSTRING_OFFSET))(this);
		}

	};
