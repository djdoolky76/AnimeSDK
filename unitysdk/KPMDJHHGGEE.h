#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EOAHOOCNDHM.h"

class NPHNOMHCOEK;
namespace System { class String; }

#define KPMDJHHGGEE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7CE680)
#define KPMDJHHGGEE_FNFEOFDGGJP_OFFSET UNITYSDK_OFFSET(0x7CE780)
#define KPMDJHHGGEE_IAELJBOKIGL_OFFSET UNITYSDK_OFFSET(0x7CE580)
#define KPMDJHHGGEE_IHPCMFLNFLJ_OFFSET UNITYSDK_OFFSET(0x7CE700)
#define KPMDJHHGGEE_MBOMAPHAEKB_OFFSET UNITYSDK_OFFSET(0x7CE5E0)
#define KPMDJHHGGEE_OHCIDBKJCLB_OFFSET UNITYSDK_OFFSET(0x7CE670)
#define KPMDJHHGGEE_PBDNAHIFHHM_OFFSET UNITYSDK_OFFSET(0x363D90)
#define KPMDJHHGGEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CE4E0)

inline static constexpr unsigned int KPMDJHHGGEE_TypeDefinitionIndex = 92586;

struct alignas(8) KPMDJHHGGEE
{
	::NPHNOMHCOEK* POJAKDHMFPJ; // 0x10

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMDJHHGGEE_TOSTRING_OFFSET))(this);
	}

	::System::Int32 IAELJBOKIGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMDJHHGGEE_IAELJBOKIGL_OFFSET))(this);
	}

	::System::Void MBOMAPHAEKB(::System::String* HIAIKHDFCLN, ::EOAHOOCNDHM& HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::EOAHOOCNDHM&))((::PBYTE)hIl2Cpp + KPMDJHHGGEE_MBOMAPHAEKB_OFFSET))(this, HIAIKHDFCLN, HFMHOELKCAJ);
	}

	::System::Void OHCIDBKJCLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMDJHHGGEE_OHCIDBKJCLB_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMDJHHGGEE_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void IHPCMFLNFLJ(::System::String* HIAIKHDFCLN, ::EOAHOOCNDHM& HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::EOAHOOCNDHM&))((::PBYTE)hIl2Cpp + KPMDJHHGGEE_IHPCMFLNFLJ_OFFSET))(this, HIAIKHDFCLN, HFMHOELKCAJ);
	}

	::System::Boolean FNFEOFDGGJP(::System::String* INHDAAAMAAL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KPMDJHHGGEE_FNFEOFDGGJP_OFFSET))(this, INHDAAAMAAL);
	}

	::System::Boolean PBDNAHIFHHM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMDJHHGGEE_PBDNAHIFHHM_OFFSET))(this);
	}
};
