#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FDFJCPNPONC;
class FIDEMAJHMFB;
class KHDHPOKJFDP;
class ODEAGANCAOO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAIMBODMJNH_AFPHADPIKAL_OFFSET UNITYSDK_OFFSET(0xBA98000)
#define NAIMBODMJNH_ANBGGOHNFMA_OFFSET UNITYSDK_OFFSET(0xBA984E0)
#define NAIMBODMJNH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBA985A0)
#define NAIMBODMJNH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBA98670)
#define NAIMBODMJNH_BEEJHPLJBCO_OFFSET UNITYSDK_OFFSET(0xBA97E40)
#define NAIMBODMJNH_CKKFOGIDAFP_OFFSET UNITYSDK_OFFSET(0xBA97AD0)
#define NAIMBODMJNH_COADINGJCOG_OFFSET UNITYSDK_OFFSET(0xBA981C0)
#define NAIMBODMJNH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA98710)
#define NAIMBODMJNH_FMMHNDMNPOA_OFFSET UNITYSDK_OFFSET(0xBA97B40)
#define NAIMBODMJNH_HAAINJNCFGB_OFFSET UNITYSDK_OFFSET(0xBA97A20)
#define NAIMBODMJNH_JJPOFOPDKJC_OFFSET UNITYSDK_OFFSET(0xBA98250)
#define NAIMBODMJNH_JLHHEDPBLBJ_OFFSET UNITYSDK_OFFSET(0xBA98350)
#define NAIMBODMJNH_LMFCPFPHIID_OFFSET UNITYSDK_OFFSET(0xBA97F80)
#define NAIMBODMJNH_NIPLGNHHFIJ_OFFSET UNITYSDK_OFFSET(0xBA97C50)
#define NAIMBODMJNH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA97960)

inline static constexpr unsigned int NAIMBODMJNH_TypeDefinitionIndex = 71811;

	class NAIMBODMJNH : public ::FMPCODLIOLG
	{
	public:
		::FIDEMAJHMFB* EDKEBMJKKMC; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FDFJCPNPONC*>* DILEHPGHOJL; // 0x68
		::ODEAGANCAOO* FLFDKKHHMDM; // 0x70
		::ODEAGANCAOO* NHKGEOEPOGK; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ODEAGANCAOO*>* CLHNOFDDALI; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIMBODMJNH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIMBODMJNH__ONBIND_OFFSET))(this);
		}

		::System::Void HAAINJNCFGB(::KHDHPOKJFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHDHPOKJFDP*))((::PBYTE)hIl2Cpp + NAIMBODMJNH_HAAINJNCFGB_OFFSET))(this, a1);
		}

		::System::Void CKKFOGIDAFP(::KHDHPOKJFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHDHPOKJFDP*))((::PBYTE)hIl2Cpp + NAIMBODMJNH_CKKFOGIDAFP_OFFSET))(this, a1);
		}

		::ODEAGANCAOO* NIPLGNHHFIJ(::KHDHPOKJFDP* a1)
		{
			return ((::ODEAGANCAOO*(*)(::PVOID, ::KHDHPOKJFDP*))((::PBYTE)hIl2Cpp + NAIMBODMJNH_NIPLGNHHFIJ_OFFSET))(this, a1);
		}

		::ODEAGANCAOO* COADINGJCOG(::KHDHPOKJFDP* a1)
		{
			return ((::ODEAGANCAOO*(*)(::PVOID, ::KHDHPOKJFDP*))((::PBYTE)hIl2Cpp + NAIMBODMJNH_COADINGJCOG_OFFSET))(this, a1);
		}

		::System::Void JJPOFOPDKJC(::KHDHPOKJFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHDHPOKJFDP*))((::PBYTE)hIl2Cpp + NAIMBODMJNH_JJPOFOPDKJC_OFFSET))(this, a1);
		}

		::System::Void AFPHADPIKAL(::ODEAGANCAOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODEAGANCAOO*))((::PBYTE)hIl2Cpp + NAIMBODMJNH_AFPHADPIKAL_OFFSET))(this, a1);
		}

		::System::Void BEEJHPLJBCO(::ODEAGANCAOO* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ODEAGANCAOO*, ::System::Int32))((::PBYTE)hIl2Cpp + NAIMBODMJNH_BEEJHPLJBCO_OFFSET))(this, a1, a2);
		}

		::System::Void FMMHNDMNPOA(::KHDHPOKJFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHDHPOKJFDP*))((::PBYTE)hIl2Cpp + NAIMBODMJNH_FMMHNDMNPOA_OFFSET))(this, a1);
		}

		::System::Void LMFCPFPHIID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIMBODMJNH_LMFCPFPHIID_OFFSET))(this);
		}

		::ODEAGANCAOO* JLHHEDPBLBJ()
		{
			return ((::ODEAGANCAOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIMBODMJNH_JLHHEDPBLBJ_OFFSET))(this);
		}

		::System::Void ANBGGOHNFMA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAIMBODMJNH_ANBGGOHNFMA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIMBODMJNH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIMBODMJNH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
