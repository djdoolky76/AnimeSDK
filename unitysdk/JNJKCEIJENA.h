#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class Object; }
namespace System { class String; }

#define JNJKCEIJENA_AMENPDLCODD_OFFSET UNITYSDK_OFFSET(0xB280E80)
#define JNJKCEIJENA_BJGOHCJMPAP_OFFSET UNITYSDK_OFFSET(0xB281930)
#define JNJKCEIJENA_CDIDIDOFHIE_OFFSET UNITYSDK_OFFSET(0xB280690)
#define JNJKCEIJENA_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xB2820D0)
#define JNJKCEIJENA_CTOR_OFFSET UNITYSDK_OFFSET(0xB27FDC0)
#define JNJKCEIJENA_EPAFKJMMPDP_OFFSET UNITYSDK_OFFSET(0xB280B40)
#define JNJKCEIJENA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB27FF90)
#define JNJKCEIJENA_FFMFDGIIKCG_OFFSET UNITYSDK_OFFSET(0xB281460)
#define JNJKCEIJENA_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xB2823C0)
#define JNJKCEIJENA_HLDLHEAKNFO_OFFSET UNITYSDK_OFFSET(0xB280CF0)
#define JNJKCEIJENA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB280630)
#define JNJKCEIJENA_JCJPFEFLIKL_OFFSET UNITYSDK_OFFSET(0xB280240)
#define JNJKCEIJENA_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xB281CC0)
#define JNJKCEIJENA_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xB281310)
#define JNJKCEIJENA_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xB2819B0)
#define JNJKCEIJENA_LJNMHFGNMOL_OFFSET UNITYSDK_OFFSET(0xB281A70)
#define JNJKCEIJENA_LMGJHGHHKMK_OFFSET UNITYSDK_OFFSET(0xB282580)
#define JNJKCEIJENA_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0xB281390)
#define JNJKCEIJENA_PEEEAIGFEME_OFFSET UNITYSDK_OFFSET(0xB282440)
#define JNJKCEIJENA_PPMAAOACDMH_OFFSET UNITYSDK_OFFSET(0xB27FFE0)
#define JNJKCEIJENA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB2808A0)

inline static constexpr unsigned int JNJKCEIJENA_TypeDefinitionIndex = 77138;

	class JNJKCEIJENA : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::Entitas::IGroup_1<::HIOEAKHGILF*>* PPLJFJNEAGM; // 0x28
		::Entitas::ICollector_1<::HIOEAKHGILF*>* OLDKIELDAMD; // 0x30
		// static const ::System::String* DMPFADJIOEE; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJKCEIJENA_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJKCEIJENA_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJKCEIJENA_TEARDOWN_OFFSET))(this);
		}

		::System::Void PPMAAOACDMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJKCEIJENA_PPMAAOACDMH_OFFSET))(this);
		}

		::System::Void JCJPFEFLIKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJKCEIJENA_JCJPFEFLIKL_OFFSET))(this);
		}

		::System::Void CDIDIDOFHIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJKCEIJENA_CDIDIDOFHIE_OFFSET))(this);
		}

		::System::Void EPAFKJMMPDP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_EPAFKJMMPDP_OFFSET))(this, a1);
		}

		::System::Void AMENPDLCODD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_AMENPDLCODD_OFFSET))(this, a1);
		}

		::System::Void FFMFDGIIKCG(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_FFMFDGIIKCG_OFFSET))(this, a1);
		}

		::System::Void HLDLHEAKNFO(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_HLDLHEAKNFO_OFFSET))(this, a1);
		}

		::System::Boolean BJGOHCJMPAP(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_BJGOHCJMPAP_OFFSET))(this, a1);
		}

		::System::Boolean LAGAFLIFFMN(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Void JCONBLBJFJJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean LJNMHFGNMOL(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_LJNMHFGNMOL_OFFSET))(this, a1, a2);
		}

		::System::Void PEEEAIGFEME(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNJKCEIJENA_PEEEAIGFEME_OFFSET))(this, a1, a2);
		}

		::System::Void MHPLGOAHLPJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_MHPLGOAHLPJ_OFFSET))(this, a1);
		}

		::System::Void LMGJHGHHKMK(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + JNJKCEIJENA_LMGJHGHHKMK_OFFSET))(this, a1, a2, a3, a4);
		}

	};
