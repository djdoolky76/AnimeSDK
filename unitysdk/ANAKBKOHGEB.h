#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FLDPBAPLICI;
namespace System { class String; }

#define ANAKBKOHGEB_CJDONANCMJG_OFFSET UNITYSDK_OFFSET(0x16D94FE0)
#define ANAKBKOHGEB_CLHKHPGKPFL_OFFSET UNITYSDK_OFFSET(0x16D951F0)
#define ANAKBKOHGEB_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16D95090)
#define ANAKBKOHGEB_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x16D95030)
#define ANAKBKOHGEB_DLDLMJGHLDM_OFFSET UNITYSDK_OFFSET(0x16D94FA0)
#define ANAKBKOHGEB_NFADOBJEIDO_OFFSET UNITYSDK_OFFSET(0x16D94DC0)
#define ANAKBKOHGEB_NGJEFGLHFHL_OFFSET UNITYSDK_OFFSET(0x16D95200)
#define ANAKBKOHGEB_PENDEELJGGJ_OFFSET UNITYSDK_OFFSET(0x16D951A0)
#define ANAKBKOHGEB_PHNGEAFNGOA_OFFSET UNITYSDK_OFFSET(0x16D95190)
#define ANAKBKOHGEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16D95080)

inline static constexpr unsigned int ANAKBKOHGEB_TypeDefinitionIndex = 82734;

class ANAKBKOHGEB : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle EJLOPJOMHHN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAKBKOHGEB__CTOR_OFFSET))(this);
	}

	::System::Boolean NFADOBJEIDO(::UnityEngine::Vector3& MIPENCPJPEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ANAKBKOHGEB_NFADOBJEIDO_OFFSET))(this, MIPENCPJPEA);
	}

	::System::Boolean DLDLMJGHLDM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAKBKOHGEB_DLDLMJGHLDM_OFFSET))(this);
	}

	::System::Boolean CJDONANCMJG(::System::Single& HPCILAJBBHH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ANAKBKOHGEB_CJDONANCMJG_OFFSET))(this, HPCILAJBBHH);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAKBKOHGEB_DABGFBDHOGD_OFFSET))(this);
	}

	::FLDPBAPLICI* COPIDBEMEIE()
	{
		return ((::FLDPBAPLICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAKBKOHGEB_COPIDBEMEIE_OFFSET))(this);
	}

	::Foundation::ViewObject::ViewObjectHandle PHNGEAFNGOA()
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAKBKOHGEB_PHNGEAFNGOA_OFFSET))(this);
	}

	::System::Void PENDEELJGGJ(::System::String* PPGLBDELEBF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANAKBKOHGEB_PENDEELJGGJ_OFFSET))(this, PPGLBDELEBF);
	}

	::System::Void CLHKHPGKPFL(::Foundation::ViewObject::ViewObjectHandle EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + ANAKBKOHGEB_CLHKHPGKPFL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 NGJEFGLHFHL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAKBKOHGEB_NGJEFGLHFHL_OFFSET))(this);
	}
};
