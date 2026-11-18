#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define FHGEAFNBGMH_BCNCJGNGKIE_OFFSET UNITYSDK_OFFSET(0x11D77750)
#define FHGEAFNBGMH_DGJFIFJONPH_OFFSET UNITYSDK_OFFSET(0x11D783C0)
#define FHGEAFNBGMH_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x11D78AD0)
#define FHGEAFNBGMH_EBOBDJIHKOO_OFFSET UNITYSDK_OFFSET(0x11D78E20)
#define FHGEAFNBGMH_FJNEHKHDBMF_OFFSET UNITYSDK_OFFSET(0x11D78750)
#define FHGEAFNBGMH_FLIDLGCEEEL_OFFSET UNITYSDK_OFFSET(0x11D772D0)
#define FHGEAFNBGMH_GAHOOPCBFNJ_OFFSET UNITYSDK_OFFSET(0x11D77EB0)
#define FHGEAFNBGMH_GDAGLGIKLEO_OFFSET UNITYSDK_OFFSET(0x11D783E0)
#define FHGEAFNBGMH_GLDHGBBEFNF_1_OFFSET UNITYSDK_OFFSET(0x11D78C00)
#define FHGEAFNBGMH_GLDHGBBEFNF_OFFSET UNITYSDK_OFFSET(0x11D77320)
#define FHGEAFNBGMH_HJGMBOLBKHA_OFFSET UNITYSDK_OFFSET(0x11D78CB0)
#define FHGEAFNBGMH_KCIAHIGOIPM_OFFSET UNITYSDK_OFFSET(0x11D780E0)
#define FHGEAFNBGMH_LAIKABFNAPI_OFFSET UNITYSDK_OFFSET(0x11D78280)
#define FHGEAFNBGMH_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x11D78B70)
#define FHGEAFNBGMH_MEHKIDKACON_OFFSET UNITYSDK_OFFSET(0x11D78A80)
#define FHGEAFNBGMH_OHCIECEMLJL_OFFSET UNITYSDK_OFFSET(0x11D77F40)
#define FHGEAFNBGMH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11D788F0)
#define FHGEAFNBGMH_OPPADCKPJHL_OFFSET UNITYSDK_OFFSET(0x11D77400)
#define FHGEAFNBGMH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11D78B20)
#define FHGEAFNBGMH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11D77010)
#define FHGEAFNBGMH__CTOR_OFFSET UNITYSDK_OFFSET(0x11D76EE0)

inline static constexpr unsigned int FHGEAFNBGMH_TypeDefinitionIndex = 84385;

class FHGEAFNBGMH : public ::System::Object
{
public:
	::UnityEngine::Renderer* OCFHGOGFGPE; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* DFBIDGBCJEG; // 0x18
	::UnityEngine::Material* EBFEPHNLNNG; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* BFOEKAACIFI; // 0x28
	::System::Int32 DKNNMAOAENO; // 0x30
	::System::Int32 NJCDLCLNLEK; // 0x34
	::System::Int32 HKBBMLEAOIK; // 0x38
	::System::Boolean FOBHALIGGIK; // 0x3C
	::System::Boolean FOLKIBNJNHM; // 0x3D
	::System::Boolean EPGLPGPOOJN; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 EMOLCOLFKBK; // 0x40
	::System::Single LBMPAKDBPBC; // 0x44

	::System::Void _ctor(::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Boolean FOLKIBNJNHM, ::System::Int32 HKBBMLEAOIK, ::System::Int32 DKNNMAOAENO, ::System::Int32 NJCDLCLNLEK, ::System::Boolean EPGLPGPOOJN, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* DFBIDGBCJEG, ::System::Int32 GLPGONDHMLI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FHGEAFNBGMH__CTOR_OFFSET))(this, OCFHGOGFGPE, FOLKIBNJNHM, HKBBMLEAOIK, DKNNMAOAENO, NJCDLCLNLEK, EPGLPGPOOJN, DFBIDGBCJEG, GLPGONDHMLI);
	}

	::System::Void _ctor_1(::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Int32 DKNNMAOAENO, ::System::Int32 NJCDLCLNLEK, ::System::Boolean EPGLPGPOOJN, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* DFBIDGBCJEG, ::System::Int32 GLPGONDHMLI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FHGEAFNBGMH__CTOR_1_OFFSET))(this, OCFHGOGFGPE, DKNNMAOAENO, NJCDLCLNLEK, EPGLPGPOOJN, DFBIDGBCJEG, GLPGONDHMLI);
	}

	::System::Int32 FLIDLGCEEEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_FLIDLGCEEEL_OFFSET))(this);
	}

	::System::Void GLDHGBBEFNF(::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Boolean FOLKIBNJNHM, ::System::Int32 HKBBMLEAOIK, ::System::Int32 DKNNMAOAENO, ::System::Int32 NJCDLCLNLEK, ::System::Boolean EPGLPGPOOJN, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* DFBIDGBCJEG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_GLDHGBBEFNF_OFFSET))(this, OCFHGOGFGPE, FOLKIBNJNHM, HKBBMLEAOIK, DKNNMAOAENO, NJCDLCLNLEK, EPGLPGPOOJN, DFBIDGBCJEG);
	}

	::UnityEngine::Material* GAHOOPCBFNJ()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_GAHOOPCBFNJ_OFFSET))(this);
	}

	::System::Boolean KCIAHIGOIPM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_KCIAHIGOIPM_OFFSET))(this);
	}

	::System::Void LAIKABFNAPI(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_LAIKABFNAPI_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Void OPPADCKPJHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_OPPADCKPJHL_OFFSET))(this);
	}

	::System::Single DGJFIFJONPH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_DGJFIFJONPH_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Int32 MEHKIDKACON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_MEHKIDKACON_OFFSET))(this);
	}

	::System::Void FJNEHKHDBMF(::Il2CppArray<::UnityEngine::Material*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_FJNEHKHDBMF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BCNCJGNGKIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_BCNCJGNGKIE_OFFSET))(this);
	}

	::System::Void DNNJOOJBJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_DNNJOOJBJNB_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_LCJEELHBNHG_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* OHCIECEMLJL()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_OHCIECEMLJL_OFFSET))(this);
	}

	::System::Void GLDHGBBEFNF_1(::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Int32 DKNNMAOAENO, ::System::Int32 NJCDLCLNLEK, ::System::Boolean EPGLPGPOOJN, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* DFBIDGBCJEG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_GLDHGBBEFNF_1_OFFSET))(this, OCFHGOGFGPE, DKNNMAOAENO, NJCDLCLNLEK, EPGLPGPOOJN, DFBIDGBCJEG);
	}

	::System::Void GDAGLGIKLEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_GDAGLGIKLEO_OFFSET))(this);
	}

	::System::Int32 EBOBDJIHKOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_EBOBDJIHKOO_OFFSET))(this);
	}

	::UnityEngine::Texture2D* HJGMBOLBKHA()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGEAFNBGMH_HJGMBOLBKHA_OFFSET))(this);
	}
};
