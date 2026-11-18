#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GOIKJCHFIIO;
class MIKBKMMKEML;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }

#define LEDAGIMFEJD_BBOMJDBNHIC_1_OFFSET UNITYSDK_OFFSET(0x151825B0)
#define LEDAGIMFEJD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15182530)
#define LEDAGIMFEJD_DHEPEIJKAJH_OFFSET UNITYSDK_OFFSET(0x15182810)
#define LEDAGIMFEJD_EPCHAOPOCPP_OFFSET UNITYSDK_OFFSET(0x15182D50)
#define LEDAGIMFEJD_FEDCEIOMHOL_OFFSET UNITYSDK_OFFSET(0x151831C0)
#define LEDAGIMFEJD_FELBHNOOPJC_OFFSET UNITYSDK_OFFSET(0x15181FF0)
#define LEDAGIMFEJD_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x15181EC0)
#define LEDAGIMFEJD_LAIGDFDINIG_OFFSET UNITYSDK_OFFSET(0x15182B00)
#define LEDAGIMFEJD_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0x151824C0)
#define LEDAGIMFEJD_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x151830D0)
#define LEDAGIMFEJD__CTOR_OFFSET UNITYSDK_OFFSET(0x15181EB0)

inline static constexpr unsigned int LEDAGIMFEJD_TypeDefinitionIndex = 48767;

class LEDAGIMFEJD : public ::System::Object
{
public:
	::UnityEngine::MaterialPropertyBlock* MLCCDHODCCF; // 0x10
	::UnityEngine::GameObject* CGHGNNMHAJE; // 0x18
	::System::String* PHFLLMAHHNM; // 0x20
	::UnityEngine::SpriteRenderer* MOMHNCCOEAD; // 0x28
	::MIKBKMMKEML* JAKELPALOOC; // 0x30
	::System::Collections::Generic::Queue_1<::System::String*>* GGBFBIECFIH; // 0x38
	::System::Boolean HHNJNJHGNIP; // 0x40
	::System::Boolean GEMEIILDEPL; // 0x41
	::System::Boolean IKDFKGEEAGE; // 0x42

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDAGIMFEJD__CTOR_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void FELBHNOOPJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_FELBHNOOPJC_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::SpriteRenderer* LPFMJMABGNH, ::GOIKJCHFIIO* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::GOIKJCHFIIO*))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_BBOMJDBNHIC_OFFSET))(this, LPFMJMABGNH, CENDLIKDNJA);
	}

	::System::Void DHEPEIJKAJH(::System::Collections::Generic::IList_1<::System::String*>* LFCEKCIDLFI, ::System::Boolean DFLHDOLGMCA, ::System::Boolean GDINHGLCODO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_DHEPEIJKAJH_OFFSET))(this, LFCEKCIDLFI, DFLHDOLGMCA, GDINHGLCODO);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void EPCHAOPOCPP(::System::String* KHFKBGNGBEC, ::System::Boolean GDINHGLCODO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_EPCHAOPOCPP_OFFSET))(this, KHFKBGNGBEC, GDINHGLCODO);
	}

	::System::Void PEDANHBGIGE(::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_PEDANHBGIGE_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void FEDCEIOMHOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_FEDCEIOMHOL_OFFSET))(this);
	}

	::System::Void LAIGDFDINIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_LAIGDFDINIG_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC_1(::UnityEngine::GameObject* NBHHDHGLKBH, ::UnityEngine::SpriteRenderer* LPFMJMABGNH, ::GOIKJCHFIIO* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::SpriteRenderer*, ::GOIKJCHFIIO*))((::PBYTE)hIl2Cpp + LEDAGIMFEJD_BBOMJDBNHIC_1_OFFSET))(this, NBHHDHGLKBH, LPFMJMABGNH, CENDLIKDNJA);
	}
};
