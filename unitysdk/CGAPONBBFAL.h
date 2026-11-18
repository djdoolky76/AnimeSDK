#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class AEKALLOHIBJ;
class EPCKEPFGGLG;
class GCIMMDDIFBJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define CGAPONBBFAL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x18DCEC90)
#define CGAPONBBFAL_DLDODFFKNLM_OFFSET UNITYSDK_OFFSET(0x18DCF350)
#define CGAPONBBFAL_JHGLPJFFOEN_OFFSET UNITYSDK_OFFSET(0x18DCE690)
#define CGAPONBBFAL_JMJNKFMACML_OFFSET UNITYSDK_OFFSET(0x18DCEDD0)
#define CGAPONBBFAL_LGBCHPGOBNG_OFFSET UNITYSDK_OFFSET(0x18DCEA80)
#define CGAPONBBFAL_LLJKNNECBNO_OFFSET UNITYSDK_OFFSET(0x18DCE820)
#define CGAPONBBFAL_PHBLLKJHAEI_OFFSET UNITYSDK_OFFSET(0x18DCED00)
#define CGAPONBBFAL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18DCF430)
#define CGAPONBBFAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCE680)

inline static constexpr unsigned int CGAPONBBFAL_TypeDefinitionIndex = 38563;

class CGAPONBBFAL : public ::System::Object
{
public:
	::EPCKEPFGGLG* CEJENBBHBBG; // 0x10
	::AEKALLOHIBJ* KOFMLNEJIPG; // 0x18
	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* LIJNOAPJPEA; // 0x20
	::Foundation::Coroutine::CoroutineHandle EEIDKCKIHEF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAPONBBFAL__CTOR_OFFSET))(this);
	}

	::System::Void JHGLPJFFOEN(::System::Int32 EOBEPDHMCJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGAPONBBFAL_JHGLPJFFOEN_OFFSET))(this, EOBEPDHMCJM);
	}

	::System::Void LGBCHPGOBNG(::System::Int32 EOBEPDHMCJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGAPONBBFAL_LGBCHPGOBNG_OFFSET))(this, EOBEPDHMCJM);
	}

	::System::Void BBOMJDBNHIC(::AEKALLOHIBJ* OAMCPEJPHLP, ::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* CELGKCKLPJC, ::EPCKEPFGGLG* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::AEKALLOHIBJ*, ::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>*, ::EPCKEPFGGLG*))((::PBYTE)hIl2Cpp + CGAPONBBFAL_BBOMJDBNHIC_OFFSET))(this, OAMCPEJPHLP, CELGKCKLPJC, DFMKILICPFB);
	}

	::System::Void PHBLLKJHAEI(::System::Int32 MDKMEMLADPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGAPONBBFAL_PHBLLKJHAEI_OFFSET))(this, MDKMEMLADPC);
	}

	::System::Void JMJNKFMACML(::System::Int32 KGGJCGPMAIH, ::System::Int32 BPEGDPLGFPO, ::System::Boolean BAIIOPLFFBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CGAPONBBFAL_JMJNKFMACML_OFFSET))(this, KGGJCGPMAIH, BPEGDPLGFPO, BAIIOPLFFBH);
	}

	::System::Void LLJKNNECBNO(::GCIMMDDIFBJ* OPMPKFEHOBM)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + CGAPONBBFAL_LLJKNNECBNO_OFFSET))(this, OPMPKFEHOBM);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAPONBBFAL_PHOADBJGFBE_OFFSET))(this);
	}

	static ::System::Void DLDODFFKNLM(::UnityEngine::Animation* BKOLCDPOJAL, ::System::String* HMJBMNAAGKB, ::System::Boolean JKGOODLJCPD)
	{
		return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGAPONBBFAL_DLDODFFKNLM_OFFSET))(BKOLCDPOJAL, HMJBMNAAGKB, JKGOODLJCPD);
	}
};
