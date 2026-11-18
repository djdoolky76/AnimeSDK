#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMDJKKPKCMO.h"
#include "unitysdk/System/ValueType.h"

class FGECBJCAGBC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JPILJKFNAEA_COKMIIDJOGD_OFFSET UNITYSDK_OFFSET(0x7B4AD0)
#define JPILJKFNAEA_HFBNIEGEJOL_OFFSET UNITYSDK_OFFSET(0x7B4AC0)
#define JPILJKFNAEA_LOOHGFCAAMM_OFFSET UNITYSDK_OFFSET(0x3D6F30)
#define JPILJKFNAEA__CTOR_OFFSET UNITYSDK_OFFSET(0x7B4AB0)

inline static constexpr unsigned int JPILJKFNAEA_TypeDefinitionIndex = 59400;

struct alignas(8) JPILJKFNAEA
{
	::System::Collections::Generic::HashSet_1<::System::UInt32>* AKKHKBPMNDN; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* CKLGINEAKGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JPILJKFNAEA__CTOR_OFFSET))(this, CKLGINEAKGL);
	}

	::JMDJKKPKCMO LOOHGFCAAMM()
	{
		return ((::JMDJKKPKCMO(*)(::PVOID))((::PBYTE)hIl2Cpp + JPILJKFNAEA_LOOHGFCAAMM_OFFSET))(this);
	}

	::System::Boolean HFBNIEGEJOL(::FGECBJCAGBC* CBFDICKJONE, ::System::String*& FKMHMOELCIO)
	{
		return ((::System::Boolean(*)(::PVOID, ::FGECBJCAGBC*, ::System::String*&))((::PBYTE)hIl2Cpp + JPILJKFNAEA_HFBNIEGEJOL_OFFSET))(this, CBFDICKJONE, FKMHMOELCIO);
	}

	::System::Boolean COKMIIDJOGD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPILJKFNAEA_COKMIIDJOGD_OFFSET))(this);
	}
};
