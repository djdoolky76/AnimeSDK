#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECBKFAAHFIK.h"
#include "unitysdk/KJPDFGGPLKH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BIJEDLFPFJI.h"

class HLPIMKIOKOC;
namespace UnityEngine { class Material; }
template <typename T> class OCDKAKANAJH_1;

#define EFNAGLLKNFH_APIPHMEEIAM_OFFSET UNITYSDK_OFFSET(0x154A7600)
#define EFNAGLLKNFH_CAKEGEGGGKH_OFFSET UNITYSDK_OFFSET(0x154A7680)
#define EFNAGLLKNFH_CCCEDJEKNDL_OFFSET UNITYSDK_OFFSET(0x154A7580)
#define EFNAGLLKNFH_DDPPCLDJMHF_OFFSET UNITYSDK_OFFSET(0x154A7180)
#define EFNAGLLKNFH_EBHHLIPPPAF_OFFSET UNITYSDK_OFFSET(0x154A70F0)
#define EFNAGLLKNFH_GKJKLLCHJDJ_OFFSET UNITYSDK_OFFSET(0x154A70A0)
#define EFNAGLLKNFH_GLEBGJJDCMD_OFFSET UNITYSDK_OFFSET(0x154A7870)
#define EFNAGLLKNFH_KFPPIIDEOHI_OFFSET UNITYSDK_OFFSET(0x154A7010)
#define EFNAGLLKNFH__CCTOR_OFFSET UNITYSDK_OFFSET(0x154A7830)
#define EFNAGLLKNFH__CTOR_OFFSET UNITYSDK_OFFSET(0x154A6F80)

inline static constexpr unsigned int EFNAGLLKNFH_TypeDefinitionIndex = 71881;

class EFNAGLLKNFH : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_OEGEBCOBLAF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EFNAGLLKNFH_TypeDefinitionIndex)->GetStaticField(0x13740);
	}
	::KJPDFGGPLKH KMMKMGDHCOI; // 0x10
	::OCDKAKANAJH_1<::ECBKFAAHFIK>* PFPEJKBBHHA; // 0x38
	::System::Single ILNHGEJLMHA; // 0x40
	::System::Boolean LCIMJKABBKA; // 0x44
	::System::Byte _padding0[0x3];
	::System::Single GNKNJGOOANC; // 0x48

	::System::Void _ctor(::OCDKAKANAJH_1<::ECBKFAAHFIK>* PGDDAJLKIOH, ::KJPDFGGPLKH& AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::OCDKAKANAJH_1<::ECBKFAAHFIK>*, ::KJPDFGGPLKH&))((::PBYTE)hIl2Cpp + EFNAGLLKNFH__CTOR_OFFSET))(this, PGDDAJLKIOH, AEJAMJDBHAM);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFNAGLLKNFH__CCTOR_OFFSET))();
	}

	::System::Void KFPPIIDEOHI(::HLPIMKIOKOC* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HLPIMKIOKOC*))((::PBYTE)hIl2Cpp + EFNAGLLKNFH_KFPPIIDEOHI_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EBHHLIPPPAF(::HLPIMKIOKOC* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HLPIMKIOKOC*))((::PBYTE)hIl2Cpp + EFNAGLLKNFH_EBHHLIPPPAF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void DDPPCLDJMHF(::BIJEDLFPFJI& HLFFCMIFFIB, ::HLPIMKIOKOC* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::BIJEDLFPFJI&, ::HLPIMKIOKOC*))((::PBYTE)hIl2Cpp + EFNAGLLKNFH_DDPPCLDJMHF_OFFSET))(this, HLFFCMIFFIB, AAOCANGHBDG);
	}

	::System::Single CCCEDJEKNDL(::System::Single EJAOAGGJHHA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFNAGLLKNFH_CCCEDJEKNDL_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Void CAKEGEGGGKH(::UnityEngine::Material* HODAIDNDKHD, ::System::Single EJAOAGGJHHA, ::HLPIMKIOKOC* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single, ::HLPIMKIOKOC*))((::PBYTE)hIl2Cpp + EFNAGLLKNFH_CAKEGEGGGKH_OFFSET))(this, HODAIDNDKHD, EJAOAGGJHHA, AAOCANGHBDG);
	}

	::System::Void GLEBGJJDCMD(::BIJEDLFPFJI& HLFFCMIFFIB, ::HLPIMKIOKOC* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::BIJEDLFPFJI&, ::HLPIMKIOKOC*))((::PBYTE)hIl2Cpp + EFNAGLLKNFH_GLEBGJJDCMD_OFFSET))(this, HLFFCMIFFIB, AAOCANGHBDG);
	}

	::System::Single APIPHMEEIAM(::System::Single EJAOAGGJHHA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFNAGLLKNFH_APIPHMEEIAM_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Void GKJKLLCHJDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNAGLLKNFH_GKJKLLCHJDJ_OFFSET))(this);
	}
};
