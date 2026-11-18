#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHLLGKCEEEK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CJHOOENDFAK;
class FNBPAEAAMDL;
class PFKOGAJAOIF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDLEFEMLDMM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E1BA1C0)
#define DDLEFEMLDMM_IHMMKGFIGGM_OFFSET UNITYSDK_OFFSET(0x1E1BA300)
#define DDLEFEMLDMM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E1BAE20)
#define DDLEFEMLDMM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E1BA9E0)
#define DDLEFEMLDMM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E1BAD70)
#define DDLEFEMLDMM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BA290)
#define DDLEFEMLDMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BA200)

inline static constexpr unsigned int DDLEFEMLDMM_TypeDefinitionIndex = 93711;

class DDLEFEMLDMM : public ::PJBGHMDHHBM
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_KOBCIOOFOEF()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(DDLEFEMLDMM_TypeDefinitionIndex)->GetStaticField(0x52690);
	}
	::LHLLGKCEEEK DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PFKOGAJAOIF*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEFEMLDMM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDLEFEMLDMM__CCTOR_OFFSET))();
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEFEMLDMM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void IHMMKGFIGGM(::CJHOOENDFAK* MACICBDKPCB, ::FNBPAEAAMDL* ODJCPMKHGGD)
	{
		return ((::System::Void(*)(::PVOID, ::CJHOOENDFAK*, ::FNBPAEAAMDL*))((::PBYTE)hIl2Cpp + DDLEFEMLDMM_IHMMKGFIGGM_OFFSET))(this, MACICBDKPCB, ODJCPMKHGGD);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDLEFEMLDMM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEFEMLDMM_PHOADBJGFBE_OFFSET))(this);
	}

	::PFKOGAJAOIF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PFKOGAJAOIF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDLEFEMLDMM_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
