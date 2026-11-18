#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPDHILFCILB.h"
#include "unitysdk/System/Object.h"

class NMJECHPNNLM;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMJECHPNNLM_FDKIJCNKAAM_CKDPMGPKLDF_OFFSET UNITYSDK_OFFSET(0x115AB180)
#define NMJECHPNNLM_FDKIJCNKAAM_CLHFAACMJCK_OFFSET UNITYSDK_OFFSET(0x115AB3C0)
#define NMJECHPNNLM_FDKIJCNKAAM_DLEBKELLKGO_OFFSET UNITYSDK_OFFSET(0x115AB1A0)
#define NMJECHPNNLM_FDKIJCNKAAM_DPNDIMIKNBG_OFFSET UNITYSDK_OFFSET(0x115AB3E0)
#define NMJECHPNNLM_FDKIJCNKAAM_FFNGBOCPGKM_OFFSET UNITYSDK_OFFSET(0x115AB3A0)
#define NMJECHPNNLM_FDKIJCNKAAM_FMKFPIDEIMH_OFFSET UNITYSDK_OFFSET(0x115AB370)
#define NMJECHPNNLM_FDKIJCNKAAM_JCPMEGFENLG_OFFSET UNITYSDK_OFFSET(0x115AB390)
#define NMJECHPNNLM_FDKIJCNKAAM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x115AB400)
#define NMJECHPNNLM_FDKIJCNKAAM__CTOR_OFFSET UNITYSDK_OFFSET(0x115AB0E0)

inline static constexpr unsigned int NMJECHPNNLM_FDKIJCNKAAM_TypeDefinitionIndex = 38468;

class NMJECHPNNLM_FDKIJCNKAAM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* JLCBOPBJOOJ; // 0x10
	::System::String* DGKMLLKCAKL; // 0x18
	::System::String* EJJALKDEBDF; // 0x20
	::NMJECHPNNLM* GOAPJKPLCFC; // 0x28
	::JPDHILFCILB ONKJJOOKKMH; // 0x30

	::System::Void _ctor(::NMJECHPNNLM* GOAPJKPLCFC)
	{
		return ((::System::Void(*)(::PVOID, ::NMJECHPNNLM*))((::PBYTE)hIl2Cpp + NMJECHPNNLM_FDKIJCNKAAM__CTOR_OFFSET))(this, GOAPJKPLCFC);
	}

	::System::Func_2<::System::String*, ::System::Double>* CKDPMGPKLDF()
	{
		return ((::System::Func_2<::System::String*, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJECHPNNLM_FDKIJCNKAAM_CKDPMGPKLDF_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* DLEBKELLKGO(::System::String* EGEGIMGMJHN)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NMJECHPNNLM_FDKIJCNKAAM_DLEBKELLKGO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Func_2<::System::String*, ::System::String*>* FMKFPIDEIMH()
	{
		return ((::System::Func_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJECHPNNLM_FDKIJCNKAAM_FMKFPIDEIMH_OFFSET))(this);
	}

	::NMJECHPNNLM* JCPMEGFENLG()
	{
		return ((::NMJECHPNNLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJECHPNNLM_FDKIJCNKAAM_JCPMEGFENLG_OFFSET))(this);
	}

	::System::Func_2<::System::String*, ::System::Double>* FFNGBOCPGKM()
	{
		return ((::System::Func_2<::System::String*, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJECHPNNLM_FDKIJCNKAAM_FFNGBOCPGKM_OFFSET))(this);
	}

	::System::Func_2<::System::String*, ::System::Double>* CLHFAACMJCK()
	{
		return ((::System::Func_2<::System::String*, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJECHPNNLM_FDKIJCNKAAM_CLHFAACMJCK_OFFSET))(this);
	}

	::System::Func_2<::System::String*, ::System::Double>* DPNDIMIKNBG()
	{
		return ((::System::Func_2<::System::String*, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJECHPNNLM_FDKIJCNKAAM_DPNDIMIKNBG_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJECHPNNLM_FDKIJCNKAAM_NPOLNFDBOOD_OFFSET))(this);
	}
};
