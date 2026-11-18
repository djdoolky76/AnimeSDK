#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GABJJAFFGPH_BHIKNPDNCDJ.h"
#include "unitysdk/System/Object.h"

class GABJJAFFGPH_DACFELHPEKH;
class GABJJAFFGPH_JPBGCOIHDGL;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GABJJAFFGPH_DDJMOLCNNBD_OFFSET UNITYSDK_OFFSET(0x165E06E0)
#define GABJJAFFGPH_GHGGHMDKABI_OFFSET UNITYSDK_OFFSET(0x165E0600)
#define GABJJAFFGPH_JMACLCNIIBH_OFFSET UNITYSDK_OFFSET(0x165E06F0)
#define GABJJAFFGPH_MEMNCGMGNKB_1_OFFSET UNITYSDK_OFFSET(0x165E04A0)
#define GABJJAFFGPH_MEMNCGMGNKB_OFFSET UNITYSDK_OFFSET(0x165E0330)
#define GABJJAFFGPH_NJIJAJNCAIL_OFFSET UNITYSDK_OFFSET(0x165E0430)
#define GABJJAFFGPH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x165E0660)
#define GABJJAFFGPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x165E01C0)
#define GABJJAFFGPH__CTOR_OFFSET UNITYSDK_OFFSET(0x165E0180)

inline static constexpr unsigned int GABJJAFFGPH_TypeDefinitionIndex = 47840;

class GABJJAFFGPH : public ::System::Object
{
public:
	static ::System::String** StaticGet_CMHEKJANHCB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GABJJAFFGPH_TypeDefinitionIndex)->GetStaticField(0x31B80);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_MDGOEANGHDP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GABJJAFFGPH_TypeDefinitionIndex)->GetStaticField(0x31B88);
	}
	::GABJJAFFGPH_JPBGCOIHDGL* FFCOGIIGIPE; // 0x10
	::System::String* HBKHKCBJDGE; // 0x18
	::GABJJAFFGPH_DACFELHPEKH* IALAGCKKEMA; // 0x20
	::GABJJAFFGPH_BHIKNPDNCDJ DBBLDKJPPNI; // 0x28

	::System::Void _ctor(::System::String* DGDDDMGEAEB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GABJJAFFGPH__CTOR_OFFSET))(this, DGDDDMGEAEB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GABJJAFFGPH__CCTOR_OFFSET))();
	}

	::System::Void MEMNCGMGNKB(::System::Int32 KLJNHMGMDNP, ::System::Collections::Generic::List_1<::System::Object*>* FLNFPCEMADN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GABJJAFFGPH_MEMNCGMGNKB_OFFSET))(this, KLJNHMGMDNP, FLNFPCEMADN);
	}

	::System::Void NJIJAJNCAIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_NJIJAJNCAIL_OFFSET))(this);
	}

	::System::Void MEMNCGMGNKB_1(::System::Collections::Generic::List_1<::System::Int32>* IDNPBLNOOBC, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* AJEDFBPPMNM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + GABJJAFFGPH_MEMNCGMGNKB_1_OFFSET))(this, IDNPBLNOOBC, AJEDFBPPMNM);
	}

	::System::Boolean GHGGHMDKABI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_GHGGHMDKABI_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean DDJMOLCNNBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GABJJAFFGPH_DDJMOLCNNBD_OFFSET))(this);
	}

	static ::System::Boolean JMACLCNIIBH(::System::Int32 KLJNHMGMDNP, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::String*>*>*& LMENEPOGLGF)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::String*>*>*&))((::PBYTE)hIl2Cpp + GABJJAFFGPH_JMACLCNIIBH_OFFSET))(KLJNHMGMDNP, LMENEPOGLGF);
	}
};
