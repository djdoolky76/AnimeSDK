#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class CDKEBLNOEPH;
class FDJHLKGICBK;
class HJEIEIFLDGN;
class HPPGIADOJBF;
class LFCKLPMBGGI;
namespace RPG::Client { template <typename T> class DelayList_1; }
namespace System { class Nullable; }
namespace System { class String; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DGACHEOMECA_ACJFCNFOAOJ_OFFSET UNITYSDK_OFFSET(0xE83D280)
#define DGACHEOMECA_CHPCGNPCKDA_OFFSET UNITYSDK_OFFSET(0xE83BC70)
#define DGACHEOMECA_CLEARSERVERCACHE_OFFSET UNITYSDK_OFFSET(0xE83C330)
#define DGACHEOMECA_CTOR_OFFSET UNITYSDK_OFFSET(0xE83BFA0)
#define DGACHEOMECA_DHLMBJKLENG_OFFSET UNITYSDK_OFFSET(0xE83B960)
#define DGACHEOMECA_FLHAEFKDIHO_OFFSET UNITYSDK_OFFSET(0xE83DBE0)
#define DGACHEOMECA_FMHLLFCGBPM_OFFSET UNITYSDK_OFFSET(0xE83D3E0)
#define DGACHEOMECA_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xE83AE20)
#define DGACHEOMECA_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xE83AD60)
#define DGACHEOMECA_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xE83AE30)
#define DGACHEOMECA_GET_ISNEEDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xE83BC00)
#define DGACHEOMECA_HDENDKJKEHI_OFFSET UNITYSDK_OFFSET(0xE83BA90)
#define DGACHEOMECA_IFDIFJOALAH_OFFSET UNITYSDK_OFFSET(0xE83AFF0)
#define DGACHEOMECA_IJDBFPDLECG_OFFSET UNITYSDK_OFFSET(0xE83BF10)
#define DGACHEOMECA_JFAGKJEKKJN_OFFSET UNITYSDK_OFFSET(0xE83BC10)
#define DGACHEOMECA_JHNFEKDFCIB_OFFSET UNITYSDK_OFFSET(0xE83BA10)
#define DGACHEOMECA_KAAEGEHPLHC_OFFSET UNITYSDK_OFFSET(0xE83D330)
#define DGACHEOMECA_KNHJHHDJLGC_OFFSET UNITYSDK_OFFSET(0xE83B810)
#define DGACHEOMECA_LADICPOACOE_OFFSET UNITYSDK_OFFSET(0xE83D980)
#define DGACHEOMECA_LHIBMOJONAE_OFFSET UNITYSDK_OFFSET(0xE83DB50)
#define DGACHEOMECA_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xE83D490)
#define DGACHEOMECA_PDCHHJKNAAD_OFFSET UNITYSDK_OFFSET(0xE83C5B0)
#define DGACHEOMECA_PJEOGDGLGMB_OFFSET UNITYSDK_OFFSET(0xE83C3D0)
#define DGACHEOMECA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE83DC90)

inline static constexpr unsigned int DGACHEOMECA_TypeDefinitionIndex = 59449;

	class DGACHEOMECA : public ::System::Object
	{
	public:
		::System::String* ABLOPGEMHBF; // 0x10
		::System::String* OLECEPPMNAL; // 0x18
		::RPG::Client::DelayList_1<::HPPGIADOJBF*>* MMJECIPHDKD; // 0x20
		::FDJHLKGICBK* IOLHICOHGKD; // 0x28
		::RPG::Client::DelayList_1<::HPPGIADOJBF*>* DAMNBKKGHFK; // 0x30
		::RPG::Client::DelayList_1<::LFCKLPMBGGI*>* AKPCCNGJLMN; // 0x38
		::HJEIEIFLDGN* GJAKPOFLMPD; // 0x40
		::CDKEBLNOEPH* IAJHKEAAIAH; // 0x48
		::System::Nullable* JOIMCLCAGHP; // 0x50
		::System::Boolean BDINGIJDIIK; // 0x52
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

		::System::Collections::Generic::IEnumerable_1<::System::Tuple*>* LHIBMOJONAE()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_LHIBMOJONAE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple*>* FLHAEFKDIHO()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_FLHAEFKDIHO_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGACHEOMECA_TOSTRING_OFFSET))(this);
		}

	};
