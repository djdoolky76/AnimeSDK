#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AFNPIPBLFJM;
class AJPBKMBIGNC;
class BDHINPLKOPK;
class IMOMNFBEDHG;
class KBKFLNHFHPF;
class OHPOBLOJCPL;
namespace RPG::Client::B51Racing { class B51RacingSeasonProgressDialogViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCCHDNACOND_CMNFJIBAAPI_OFFSET UNITYSDK_OFFSET(0xB330600)
#define KCCHDNACOND_CTOR_OFFSET UNITYSDK_OFFSET(0xB331720)
#define KCCHDNACOND_DGJFBMGGALA_OFFSET UNITYSDK_OFFSET(0xB3303D0)
#define KCCHDNACOND_DKKKPGCGENJ_OFFSET UNITYSDK_OFFSET(0xB330CA0)
#define KCCHDNACOND_EHKBFEOJNCI_OFFSET UNITYSDK_OFFSET(0xB330290)
#define KCCHDNACOND_FGIBHCAIPHE_OFFSET UNITYSDK_OFFSET(0xB330FF0)
#define KCCHDNACOND_HBEICGDLGNH_OFFSET UNITYSDK_OFFSET(0xB331430)
#define KCCHDNACOND_HHHBODHIALN_OFFSET UNITYSDK_OFFSET(0xB331050)
#define KCCHDNACOND_HNHCHBEEMJH_OFFSET UNITYSDK_OFFSET(0xB331200)
#define KCCHDNACOND_IMNLOLJCAPB_OFFSET UNITYSDK_OFFSET(0xB331190)
#define KCCHDNACOND_KCMKGDEFJCP_OFFSET UNITYSDK_OFFSET(0xB330320)
#define KCCHDNACOND_KNEMLKHEEHE_OFFSET UNITYSDK_OFFSET(0xB3307F0)
#define KCCHDNACOND_KPBIHPCHBMB_OFFSET UNITYSDK_OFFSET(0xB3312C0)

inline static constexpr unsigned int KCCHDNACOND_TypeDefinitionIndex = 81973;

	class KCCHDNACOND : public ::System::Object
	{
	public:
		// static const ::System::Object OCGPCDFBPNO; // 0x0
		// static const ::System::Object KECPEJBHJMP; // 0x0
		// static const ::System::Object PCNPAFGLJPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHDNACOND_CTOR_OFFSET))(this);
		}

		::BDHINPLKOPK* EHKBFEOJNCI()
		{
			return ((::BDHINPLKOPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHDNACOND_EHKBFEOJNCI_OFFSET))(this);
		}

		::KBKFLNHFHPF* KCMKGDEFJCP()
		{
			return ((::KBKFLNHFHPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHDNACOND_KCMKGDEFJCP_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingSeasonProgressDialogViewModel* DGJFBMGGALA(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingSeasonProgressDialogViewModel*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KCCHDNACOND_DGJFBMGGALA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingSeasonProgressDialogViewModel* CMNFJIBAAPI(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::OHPOBLOJCPL*>* a5, ::System::Collections::Generic::List_1<::IMOMNFBEDHG*>* a6)
		{
			return ((::RPG::Client::B51Racing::B51RacingSeasonProgressDialogViewModel*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::OHPOBLOJCPL*>*, ::System::Collections::Generic::List_1<::IMOMNFBEDHG*>*))((::PBYTE)hIl2Cpp + KCCHDNACOND_CMNFJIBAAPI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::List_1<::OHPOBLOJCPL*>* KNEMLKHEEHE(::System::Collections::Generic::List_1<::AFNPIPBLFJM*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::OHPOBLOJCPL*>*(*)(::System::Collections::Generic::List_1<::AFNPIPBLFJM*>*))((::PBYTE)hIl2Cpp + KCCHDNACOND_KNEMLKHEEHE_OFFSET))(a1);
		}

		static ::System::Void KPBIHPCHBMB(::System::Collections::Generic::List_1<::OHPOBLOJCPL*>* a1, ::AFNPIPBLFJM* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::OHPOBLOJCPL*>*, ::AFNPIPBLFJM*))((::PBYTE)hIl2Cpp + KCCHDNACOND_KPBIHPCHBMB_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::IMOMNFBEDHG*>* DKKKPGCGENJ(::System::Collections::Generic::List_1<::AJPBKMBIGNC*>* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::IMOMNFBEDHG*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::AJPBKMBIGNC*>*, ::System::Int32))((::PBYTE)hIl2Cpp + KCCHDNACOND_DKKKPGCGENJ_OFFSET))(this, a1, a2);
		}

		static ::System::Void HHHBODHIALN(::System::Collections::Generic::List_1<::IMOMNFBEDHG*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::IMOMNFBEDHG*>*, ::System::Int32))((::PBYTE)hIl2Cpp + KCCHDNACOND_HHHBODHIALN_OFFSET))(a1, a2);
		}

		static ::System::Void HBEICGDLGNH(::AJPBKMBIGNC* a1, ::BDHINPLKOPK* a2, ::System::Boolean a3, ::RPG::Client::TextID a4, ::System::String* a5, ::System::String* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::AJPBKMBIGNC*, ::BDHINPLKOPK*, ::System::Boolean, ::RPG::Client::TextID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KCCHDNACOND_HBEICGDLGNH_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 IMNLOLJCAPB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KCCHDNACOND_IMNLOLJCAPB_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 HNHCHBEEMJH(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KCCHDNACOND_HNHCHBEEMJH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 FGIBHCAIPHE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KCCHDNACOND_FGIBHCAIPHE_OFFSET))(a1, a2);
		}

	};
