#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertOrderFinishType.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/CustomerTrigger.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DOOKIBGLODI.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BILDACOJJHA_ADD_SERVICECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1BABFBA0)
#define BILDACOJJHA_BHJCHJEONKE_OFFSET UNITYSDK_OFFSET(0x1BAC0A60)
#define BILDACOJJHA_BOCIGKAEHIN_OFFSET UNITYSDK_OFFSET(0x1BAC0250)
#define BILDACOJJHA_CMBLJEOFIFN_OFFSET UNITYSDK_OFFSET(0x1BAC1270)
#define BILDACOJJHA_COOEMLAMPGF_OFFSET UNITYSDK_OFFSET(0x1BAC18E0)
#define BILDACOJJHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BABFA90)
#define BILDACOJJHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BAC10B0)
#define BILDACOJJHA_EDHAOCKPHFN_OFFSET UNITYSDK_OFFSET(0x1BAC0DB0)
#define BILDACOJJHA_EEMPLHEIIEN_1_OFFSET UNITYSDK_OFFSET(0x1BAC0950)
#define BILDACOJJHA_EEMPLHEIIEN_OFFSET UNITYSDK_OFFSET(0x1BAC07E0)
#define BILDACOJJHA_EHEMLMMEILM_OFFSET UNITYSDK_OFFSET(0x1BABFFA0)
#define BILDACOJJHA_FNDCJJEKGKF_OFFSET UNITYSDK_OFFSET(0x1BAC17F0)
#define BILDACOJJHA_HPEHKLCBEAI_OFFSET UNITYSDK_OFFSET(0x1BAC1060)
#define BILDACOJJHA_IAACLMAKNJA_OFFSET UNITYSDK_OFFSET(0x1BAC02F0)
#define BILDACOJJHA_IPKCKKEBPNJ_OFFSET UNITYSDK_OFFSET(0x1BAC0E00)
#define BILDACOJJHA_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x1BABFC60)
#define BILDACOJJHA_JFNMEHNGGLG_OFFSET UNITYSDK_OFFSET(0x1BAC1660)
#define BILDACOJJHA_KHPNHEDAALP_OFFSET UNITYSDK_OFFSET(0x1BAC1490)
#define BILDACOJJHA_LAJKNOKGDJJ_OFFSET UNITYSDK_OFFSET(0x1BAC05E0)
#define BILDACOJJHA_LNKEOMGOKJN_OFFSET UNITYSDK_OFFSET(0x1BAC0C30)
#define BILDACOJJHA_NMKKDLCMMFI_OFFSET UNITYSDK_OFFSET(0x1BAC0740)
#define BILDACOJJHA_OEDPIGOBMEL_OFFSET UNITYSDK_OFFSET(0x1BAC1890)
#define BILDACOJJHA_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0x1BABFE00)
#define BILDACOJJHA_REMOVE_SERVICECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1BABFC00)

inline static constexpr unsigned int BILDACOJJHA_TypeDefinitionIndex = 79957;

	class BILDACOJJHA : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* DCNEHLOAIJD; // 0x18
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x20
		::System::Action_1<::System::Int32>* ServiceCompleted; // 0x28
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + BILDACOJJHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void add_ServiceCompleted(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BILDACOJJHA_ADD_SERVICECOMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_ServiceCompleted(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BILDACOJJHA_REMOVE_SERVICECOMPLETED_OFFSET))(this, a1);
		}

		::System::Void JDEKJLHMPLG(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void PINOKCNDANM(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_PINOKCNDANM_OFFSET))(this, a1);
		}

		::System::Boolean EHEMLMMEILM(::LPHINGPIEAJ* a1, ::DOOKIBGLODI a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::DOOKIBGLODI))((::PBYTE)hIl2Cpp + BILDACOJJHA_EHEMLMMEILM_OFFSET))(this, a1, a2);
		}

		::System::Boolean LAJKNOKGDJJ(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_LAJKNOKGDJJ_OFFSET))(this, a1);
		}

		::System::Boolean NMKKDLCMMFI(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_NMKKDLCMMFI_OFFSET))(this, a1);
		}

		::System::Boolean EEMPLHEIIEN(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_EEMPLHEIIEN_OFFSET))(this, a1);
		}

		::System::Boolean EEMPLHEIIEN_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BILDACOJJHA_EEMPLHEIIEN_1_OFFSET))(this, a1);
		}

		::System::Void BHJCHJEONKE(::LPHINGPIEAJ* a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderFinishType a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderFinishType))((::PBYTE)hIl2Cpp + BILDACOJJHA_BHJCHJEONKE_OFFSET))(this, a1, a2);
		}

		::System::Void LNKEOMGOKJN(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_LNKEOMGOKJN_OFFSET))(this, a1);
		}

		::System::Void EDHAOCKPHFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDACOJJHA_EDHAOCKPHFN_OFFSET))(this);
		}

		::System::Void HPEHKLCBEAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDACOJJHA_HPEHKLCBEAI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDACOJJHA_DISPOSE_OFFSET))(this);
		}

		::System::Void IAACLMAKNJA(::LPHINGPIEAJ* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::String*))((::PBYTE)hIl2Cpp + BILDACOJJHA_IAACLMAKNJA_OFFSET))(this, a1, a2);
		}

		::System::Void IPKCKKEBPNJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BILDACOJJHA_IPKCKKEBPNJ_OFFSET))(this, a1);
		}

		::System::Void CMBLJEOFIFN(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_CMBLJEOFIFN_OFFSET))(this, a1);
		}

		::System::Void KHPNHEDAALP(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_KHPNHEDAALP_OFFSET))(this, a1);
		}

		::System::Void JFNMEHNGGLG(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_JFNMEHNGGLG_OFFSET))(this, a1);
		}

		::System::Void OEDPIGOBMEL(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_OEDPIGOBMEL_OFFSET))(this, a1);
		}

		::System::Void FNDCJJEKGKF(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + BILDACOJJHA_FNDCJJEKGKF_OFFSET))(this, a1);
		}

		::System::Boolean BOCIGKAEHIN(::LPHINGPIEAJ* a1, ::RPG::Client::LittleGame::ComicDessert::CustomerTrigger a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::RPG::Client::LittleGame::ComicDessert::CustomerTrigger))((::PBYTE)hIl2Cpp + BILDACOJJHA_BOCIGKAEHIN_OFFSET))(this, a1, a2);
		}

		::System::Void COOEMLAMPGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDACOJJHA_COOEMLAMPGF_OFFSET))(this);
		}

	};
