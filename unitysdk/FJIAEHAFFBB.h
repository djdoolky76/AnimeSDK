#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CCPCAPILDDK;
class CHPNHMFJDFG;
class IOOIHHOJOPI;
class NBDLJECLJJO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FJIAEHAFFBB_CLCHKJLHIIM_OFFSET UNITYSDK_OFFSET(0x13222380)
#define FJIAEHAFFBB_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x132218A0)
#define FJIAEHAFFBB_FLKFBNEOJCO_OFFSET UNITYSDK_OFFSET(0x13221D90)
#define FJIAEHAFFBB_HDPEPCLCAGF_OFFSET UNITYSDK_OFFSET(0x132222B0)
#define FJIAEHAFFBB_HFEHKDFCFDM_OFFSET UNITYSDK_OFFSET(0x13222EF0)
#define FJIAEHAFFBB_JNHKJHFMKAB_OFFSET UNITYSDK_OFFSET(0x13222090)
#define FJIAEHAFFBB_KELIOLLACFE_OFFSET UNITYSDK_OFFSET(0x13222E00)
#define FJIAEHAFFBB_MOIOJPOPHPG_OFFSET UNITYSDK_OFFSET(0x13222630)
#define FJIAEHAFFBB_OKOPHPFOKPC_OFFSET UNITYSDK_OFFSET(0x13222DB0)
#define FJIAEHAFFBB__CTOR_OFFSET UNITYSDK_OFFSET(0x13221D30)

inline static constexpr unsigned int FJIAEHAFFBB_TypeDefinitionIndex = 75456;

class FJIAEHAFFBB : public ::PBJOCICFNGK
{
public:
	::System::Int32 HEKDCBLJHNN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIAEHAFFBB__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + FJIAEHAFFBB_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	static ::System::Void FLKFBNEOJCO(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FJIAEHAFFBB_FLKFBNEOJCO_OFFSET))(MGMDLMBEDJF);
	}

	static ::System::Void JNHKJHFMKAB(::System::Collections::Generic::List_1<::CCPCAPILDDK*>* AELIIFJOCHB, ::System::Collections::Generic::List_1<::System::Int32>* GNCODMOAHEO, ::CHPNHMFJDFG* GPHJEHNONJA)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::CCPCAPILDDK*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::CHPNHMFJDFG*))((::PBYTE)hIl2Cpp + FJIAEHAFFBB_JNHKJHFMKAB_OFFSET))(AELIIFJOCHB, GNCODMOAHEO, GPHJEHNONJA);
	}

	static ::System::Void CLCHKJLHIIM(::System::Collections::Generic::List_1<::CCPCAPILDDK*>* AELIIFJOCHB, ::System::Collections::Generic::List_1<::System::Int32>* GNCODMOAHEO)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::CCPCAPILDDK*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FJIAEHAFFBB_CLCHKJLHIIM_OFFSET))(AELIIFJOCHB, GNCODMOAHEO);
	}

	static ::CCPCAPILDDK* HDPEPCLCAGF(::System::Collections::Generic::List_1<::CCPCAPILDDK*>* AELIIFJOCHB, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::CCPCAPILDDK*(*)(::System::Collections::Generic::List_1<::CCPCAPILDDK*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FJIAEHAFFBB_HDPEPCLCAGF_OFFSET))(AELIIFJOCHB, MGMDLMBEDJF);
	}

	static ::System::Void MOIOJPOPHPG(::UnityEngine::GameObject* OFNDMBEELON, ::NBDLJECLJJO* GAEKELOLHHB)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + FJIAEHAFFBB_MOIOJPOPHPG_OFFSET))(OFNDMBEELON, GAEKELOLHHB);
	}

	::System::Void OKOPHPFOKPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIAEHAFFBB_OKOPHPFOKPC_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* KELIOLLACFE(::System::Collections::Generic::List_1<::CCPCAPILDDK*>* AELIIFJOCHB, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::CCPCAPILDDK*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FJIAEHAFFBB_KELIOLLACFE_OFFSET))(AELIIFJOCHB, ABHBKFJKINO);
	}

	::System::String* HFEHKDFCFDM(::CCPCAPILDDK* BELEHPLHKKN)
	{
		return ((::System::String*(*)(::PVOID, ::CCPCAPILDDK*))((::PBYTE)hIl2Cpp + FJIAEHAFFBB_HFEHKDFCFDM_OFFSET))(this, BELEHPLHKKN);
	}
};
