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

#define AEFBPMPIKNB_AGLEJHJIFKC_OFFSET UNITYSDK_OFFSET(0xB7B3860)
#define AEFBPMPIKNB_ALONMIHFDNE_OFFSET UNITYSDK_OFFSET(0xB7B3E60)
#define AEFBPMPIKNB_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xB7B3F30)
#define AEFBPMPIKNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7B2D20)
#define AEFBPMPIKNB_EDLAMBPMMHL_OFFSET UNITYSDK_OFFSET(0xB7B3C00)
#define AEFBPMPIKNB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB7B4760)
#define AEFBPMPIKNB_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xB7B4640)
#define AEFBPMPIKNB_IBEINLIPMGJ_OFFSET UNITYSDK_OFFSET(0xB7B2F90)
#define AEFBPMPIKNB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB7B47B0)
#define AEFBPMPIKNB_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xB7B4220)
#define AEFBPMPIKNB_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xB7B3A90)
#define AEFBPMPIKNB_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xB7B3540)
#define AEFBPMPIKNB_LFGBEPCIBLK_OFFSET UNITYSDK_OFFSET(0xB7B3200)
#define AEFBPMPIKNB_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0xB7B3610)
#define AEFBPMPIKNB_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0xB7B3B10)
#define AEFBPMPIKNB_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0xB7B46C0)
#define AEFBPMPIKNB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB7B4810)

inline static constexpr unsigned int AEFBPMPIKNB_TypeDefinitionIndex = 79407;

	class AEFBPMPIKNB : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* GJNBNKGJBFJ; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::Entitas::ICollector_1<::HIOEAKHGILF*>* LLNOHKODFAB; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void IBEINLIPMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_IBEINLIPMGJ_OFFSET))(this);
		}

		::System::Void LFGBEPCIBLK(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_LFGBEPCIBLK_OFFSET))(this, a1);
		}

		::System::Void EDLAMBPMMHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_EDLAMBPMMHL_OFFSET))(this);
		}

		::System::Void ALONMIHFDNE(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_ALONMIHFDNE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LAGAFLIFFMN(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDEKKFEOKDH(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_MDEKKFEOKDH_OFFSET))(this, a1, a2);
		}

		::System::Void JCONBLBJFJJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Void NAPEMFLELHM(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_NAPEMFLELHM_OFFSET))(this, a1, a2);
		}

		::System::Void MHPLGOAHLPJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_MHPLGOAHLPJ_OFFSET))(this, a1);
		}

		::System::Void AGLEJHJIFKC(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_AGLEJHJIFKC_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFBPMPIKNB_TEARDOWN_OFFSET))(this);
		}

	};
