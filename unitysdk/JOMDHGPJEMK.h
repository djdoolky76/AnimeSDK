#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MNDCBGIIAHI;
class POIJJMCAKME;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class DOINNMGICOF_1;

#define JOMDHGPJEMK_AHPIMIJLLHC_OFFSET UNITYSDK_OFFSET(0x155D26C0)
#define JOMDHGPJEMK_AMCOEOIFKFH_OFFSET UNITYSDK_OFFSET(0x155D1E10)
#define JOMDHGPJEMK_BBPHOMAFIGG_1_OFFSET UNITYSDK_OFFSET(0x155D1620)
#define JOMDHGPJEMK_BBPHOMAFIGG_OFFSET UNITYSDK_OFFSET(0x155D1D60)
#define JOMDHGPJEMK_COBHHONBMGL_OFFSET UNITYSDK_OFFSET(0x155D16D0)
#define JOMDHGPJEMK_FBAKHNDHOJA_OFFSET UNITYSDK_OFFSET(0x155D04D0)
#define JOMDHGPJEMK_JMGLLEFGCLN_OFFSET UNITYSDK_OFFSET(0x155D12C0)
#define JOMDHGPJEMK_LMLPMOMOKEK_OFFSET UNITYSDK_OFFSET(0x155D0C50)
#define JOMDHGPJEMK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x155D1EE0)
#define JOMDHGPJEMK_PNDIHFIBMKK_OFFSET UNITYSDK_OFFSET(0x155D1A10)
#define JOMDHGPJEMK_POKAALCODJM_OFFSET UNITYSDK_OFFSET(0x155D0AE0)
#define JOMDHGPJEMK__CCTOR_OFFSET UNITYSDK_OFFSET(0x155D0490)
#define JOMDHGPJEMK__CTOR_OFFSET UNITYSDK_OFFSET(0x155D0320)

inline static constexpr unsigned int JOMDHGPJEMK_TypeDefinitionIndex = 50048;

class JOMDHGPJEMK : public ::System::Object
{
public:
	static ::System::String** StaticGet_IBPAAKDGBIA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JOMDHGPJEMK_TypeDefinitionIndex)->GetStaticField(0x4BD60);
	}
	::System::Collections::Generic::List_1<::System::String*>* DDPGBFJNGGD; // 0x10
	::System::Collections::Generic::List_1<::POIJJMCAKME*>* CEOKOGOFMJB; // 0x18
	::DOINNMGICOF_1<::POIJJMCAKME*>* PPFJEJKKEMK; // 0x20
	::UnityEngine::Transform* HGLDGHHGBDC; // 0x28

	::System::Void _ctor(::System::Int32 NKFJGCCBEKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JOMDHGPJEMK__CTOR_OFFSET))(this, NKFJGCCBEKO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMDHGPJEMK__CCTOR_OFFSET))();
	}

	::UnityEngine::GameObject* FBAKHNDHOJA(::MNDCBGIIAHI* DFMKILICPFB, ::System::Boolean IICADHLOAKN)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::MNDCBGIIAHI*, ::System::Boolean))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_FBAKHNDHOJA_OFFSET))(this, DFMKILICPFB, IICADHLOAKN);
	}

	::System::Void LMLPMOMOKEK(::UnityEngine::GameObject* AEJAMJDBHAM, ::MNDCBGIIAHI* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MNDCBGIIAHI*))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_LMLPMOMOKEK_OFFSET))(this, AEJAMJDBHAM, DFMKILICPFB);
	}

	::System::Void JMGLLEFGCLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_JMGLLEFGCLN_OFFSET))(this);
	}

	::UnityEngine::GameObject* POKAALCODJM(::System::String* CJBJONJDOLI, ::MNDCBGIIAHI* DFMKILICPFB)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::MNDCBGIIAHI*))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_POKAALCODJM_OFFSET))(this, CJBJONJDOLI, DFMKILICPFB);
	}

	::System::Void COBHHONBMGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_COBHHONBMGL_OFFSET))(this);
	}

	::UnityEngine::Transform* PNDIHFIBMKK()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_PNDIHFIBMKK_OFFSET))(this);
	}

	::System::Boolean BBPHOMAFIGG(::POIJJMCAKME* AEJAMJDBHAM)
	{
		return ((::System::Boolean(*)(::PVOID, ::POIJJMCAKME*))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_BBPHOMAFIGG_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void AMCOEOIFKFH(::POIJJMCAKME* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::POIJJMCAKME*))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_AMCOEOIFKFH_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void NPOLNFDBOOD(::System::Boolean IPDPDNOLLNF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_NPOLNFDBOOD_OFFSET))(this, IPDPDNOLLNF);
	}

	::System::Boolean BBPHOMAFIGG_1(::MNDCBGIIAHI* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MNDCBGIIAHI*))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_BBPHOMAFIGG_1_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void AHPIMIJLLHC(::POIJJMCAKME* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::POIJJMCAKME*))((::PBYTE)hIl2Cpp + JOMDHGPJEMK_AHPIMIJLLHC_OFFSET))(this, AEJAMJDBHAM);
	}
};
