#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEOCDNBFEBF.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CKKMKFFFCAA_LKIMLHFIFNF;
class HFCHPMGNMOM;
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }

#define CKKMKFFFCAA_AGIMGKGCLJP_OFFSET UNITYSDK_OFFSET(0xD761A80)
#define CKKMKFFFCAA_ANNGAHLCEHP_OFFSET UNITYSDK_OFFSET(0xD762710)
#define CKKMKFFFCAA_BEMLFFNHAKN_OFFSET UNITYSDK_OFFSET(0xD763470)
#define CKKMKFFFCAA_BMABAFKKDHC_OFFSET UNITYSDK_OFFSET(0xD762AF0)
#define CKKMKFFFCAA_CNFNNOFKAIO_OFFSET UNITYSDK_OFFSET(0xD763B30)
#define CKKMKFFFCAA_CTOR_OFFSET UNITYSDK_OFFSET(0xD763ED0)
#define CKKMKFFFCAA_DJJLDHACPOM_OFFSET UNITYSDK_OFFSET(0xD762DF0)
#define CKKMKFFFCAA_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xD761090)
#define CKKMKFFFCAA_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xD7610B0)
#define CKKMKFFFCAA_GHPJKODCGLD_OFFSET UNITYSDK_OFFSET(0xD762BD0)
#define CKKMKFFFCAA_IOHCMBHGPDC_OFFSET UNITYSDK_OFFSET(0xD762A50)
#define CKKMKFFFCAA_JFMACNPOGEF_OFFSET UNITYSDK_OFFSET(0xD763D40)
#define CKKMKFFFCAA_KCIHGNBKCAA_OFFSET UNITYSDK_OFFSET(0xD763BB0)
#define CKKMKFFFCAA_LBBLNALEPMN_OFFSET UNITYSDK_OFFSET(0xD7610D0)
#define CKKMKFFFCAA_MMKCLHOPKCB_OFFSET UNITYSDK_OFFSET(0xD761DA0)
#define CKKMKFFFCAA_NCPEIKHAMOC_OFFSET UNITYSDK_OFFSET(0xD762280)
#define CKKMKFFFCAA_NGELBBBOMLI_OFFSET UNITYSDK_OFFSET(0xD763C50)
#define CKKMKFFFCAA_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xD7610A0)
#define CKKMKFFFCAA_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xD7610C0)

inline static constexpr unsigned int CKKMKFFFCAA_TypeDefinitionIndex = 79511;

	class CKKMKFFFCAA : public ::JEOCDNBFEBF
	{
	public:
		::HFCHPMGNMOM* _Source_k__BackingField; // 0x10
		::CKKMKFFFCAA_LKIMLHFIFNF* _Context_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_CTOR_OFFSET))(this);
		}

		::CKKMKFFFCAA_LKIMLHFIFNF* get_Context()
		{
			return ((::CKKMKFFFCAA_LKIMLHFIFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::CKKMKFFFCAA_LKIMLHFIFNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKKMKFFFCAA_LKIMLHFIFNF*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_SET_CONTEXT_OFFSET))(this, a1);
		}

		::HFCHPMGNMOM* get_Source()
		{
			return ((::HFCHPMGNMOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_SET_SOURCE_OFFSET))(this, a1);
		}

		::System::Void LBBLNALEPMN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_LBBLNALEPMN_OFFSET))(this, a1);
		}

		::System::Void AGIMGKGCLJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_AGIMGKGCLJP_OFFSET))(this);
		}

		::System::Void MMKCLHOPKCB(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_MMKCLHOPKCB_OFFSET))(this, a1);
		}

		::System::Void ANNGAHLCEHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_ANNGAHLCEHP_OFFSET))(this);
		}

		::System::Boolean IOHCMBHGPDC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_IOHCMBHGPDC_OFFSET))(this);
		}

		::System::Void BMABAFKKDHC(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_BMABAFKKDHC_OFFSET))(this, a1, a2);
		}

		::System::Void KCIHGNBKCAA(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_KCIHGNBKCAA_OFFSET))(this, a1, a2);
		}

		::System::Boolean NGELBBBOMLI(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_NGELBBBOMLI_OFFSET))(this, a1, a2);
		}

		::System::Void JFMACNPOGEF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_JFMACNPOGEF_OFFSET))(this, a1);
		}

		::System::Boolean GHPJKODCGLD(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_GHPJKODCGLD_OFFSET))(this, a1, a2);
		}

		::System::Boolean DJJLDHACPOM(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_DJJLDHACPOM_OFFSET))(this, a1, a2);
		}

		::System::Boolean BEMLFFNHAKN(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_BEMLFFNHAKN_OFFSET))(this, a1, a2);
		}

		::System::Void CNFNNOFKAIO(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_CNFNNOFKAIO_OFFSET))(this, a1, a2);
		}

		::System::Nullable* NCPEIKHAMOC(::UnityEngine::Vector2Int a1, ::RPG::Client::MechCraft::MechCraftRotationType a2)
		{
			return ((::System::Nullable*(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CKKMKFFFCAA_NCPEIKHAMOC_OFFSET))(this, a1, a2);
		}

	};
