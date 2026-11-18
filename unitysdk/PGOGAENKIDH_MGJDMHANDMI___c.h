#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define PGOGAENKIDH_MGJDMHANDMI___C_AABGLKLAIKI_OFFSET UNITYSDK_OFFSET(0x1FDBE720)
#define PGOGAENKIDH_MGJDMHANDMI___C_COKJCCGPFDG_OFFSET UNITYSDK_OFFSET(0x1FDBE800)
#define PGOGAENKIDH_MGJDMHANDMI___C_JJEMNHLBDDI_OFFSET UNITYSDK_OFFSET(0x1FDBE750)
#define PGOGAENKIDH_MGJDMHANDMI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDBE6D0)
#define PGOGAENKIDH_MGJDMHANDMI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBE710)

inline static constexpr unsigned int PGOGAENKIDH_MGJDMHANDMI___c_TypeDefinitionIndex = 28316;

class PGOGAENKIDH_MGJDMHANDMI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PGOGAENKIDH_MGJDMHANDMI___c_TypeDefinitionIndex)->GetStaticField(0x25580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Nullable_1<::System::Int32>> AABGLKLAIKI(::System::String* HFMHOELKCAJ, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* LDHAIIPOBBG)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Nullable_1<::System::Int32>>(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI___C_AABGLKLAIKI_OFFSET))(this, HFMHOELKCAJ, LDHAIIPOBBG);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*> JJEMNHLBDDI(::System::String* HFMHOELKCAJ, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* LDHAIIPOBBG)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*>(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI___C_JJEMNHLBDDI_OFFSET))(this, HFMHOELKCAJ, LDHAIIPOBBG);
	}

	::System::String* COKJCCGPFDG(::System::String* HFMHOELKCAJ, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* LDHAIIPOBBG)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI___C_COKJCCGPFDG_OFFSET))(this, HFMHOELKCAJ, LDHAIIPOBBG);
	}
};
