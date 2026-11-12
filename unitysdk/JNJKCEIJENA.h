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

#define JNJKCEIJENA_AMENPDLCODD_OFFSET UNITYSDK_OFFSET(0xBAB16F0)
#define JNJKCEIJENA_BJGOHCJMPAP_OFFSET UNITYSDK_OFFSET(0xBAB21A0)
#define JNJKCEIJENA_CDIDIDOFHIE_OFFSET UNITYSDK_OFFSET(0xBAB0EF0)
#define JNJKCEIJENA_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xBAB2940)
#define JNJKCEIJENA_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB0620)
#define JNJKCEIJENA_EPAFKJMMPDP_OFFSET UNITYSDK_OFFSET(0xBAB13B0)
#define JNJKCEIJENA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBAB07F0)
#define JNJKCEIJENA_FFMFDGIIKCG_OFFSET UNITYSDK_OFFSET(0xBAB1CD0)
#define JNJKCEIJENA_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xBAB2C00)
#define JNJKCEIJENA_HLDLHEAKNFO_OFFSET UNITYSDK_OFFSET(0xBAB1560)
#define JNJKCEIJENA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBAB0E90)
#define JNJKCEIJENA_JCJPFEFLIKL_OFFSET UNITYSDK_OFFSET(0xBAB0AA0)
#define JNJKCEIJENA_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xBAB2530)
#define JNJKCEIJENA_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xBAB1B80)
#define JNJKCEIJENA_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xBAB2220)
#define JNJKCEIJENA_LJNMHFGNMOL_OFFSET UNITYSDK_OFFSET(0xBAB22E0)
#define JNJKCEIJENA_LMGJHGHHKMK_OFFSET UNITYSDK_OFFSET(0xBAB2DC0)
#define JNJKCEIJENA_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0xBAB1C00)
#define JNJKCEIJENA_PEEEAIGFEME_OFFSET UNITYSDK_OFFSET(0xBAB2C80)
#define JNJKCEIJENA_PPMAAOACDMH_OFFSET UNITYSDK_OFFSET(0xBAB0840)
#define JNJKCEIJENA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBAB1100)

inline static constexpr unsigned int JNJKCEIJENA_TypeDefinitionIndex = 79473;

	class JNJKCEIJENA : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::Entitas::ICollector_1<::HIOEAKHGILF*>* OLDKIELDAMD; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x28
		::Entitas::IGroup_1<::HIOEAKHGILF*>* PPLJFJNEAGM; // 0x30
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
