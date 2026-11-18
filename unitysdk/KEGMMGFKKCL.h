#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCLJOCDPCPL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEGMMGFKKCL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1860C160)
#define KEGMMGFKKCL_BLDKMDEDBMI_OFFSET UNITYSDK_OFFSET(0x1860BF70)
#define KEGMMGFKKCL_CBJKBNNIBAM_OFFSET UNITYSDK_OFFSET(0x1860BD50)
#define KEGMMGFKKCL_CFFGBGOGJJF_OFFSET UNITYSDK_OFFSET(0x1860BF30)
#define KEGMMGFKKCL_DEICFOMNIFN_OFFSET UNITYSDK_OFFSET(0x1860BEF0)
#define KEGMMGFKKCL_IEPLOAMJKJG_OFFSET UNITYSDK_OFFSET(0x1860C1E0)
#define KEGMMGFKKCL_MCJCCJOEKGN_OFFSET UNITYSDK_OFFSET(0x1860C040)
#define KEGMMGFKKCL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1860BE70)
#define KEGMMGFKKCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1860BCC0)

inline static constexpr unsigned int KEGMMGFKKCL_TypeDefinitionIndex = 74982;

class KEGMMGFKKCL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::JCLJOCDPCPL*>* MPKGLCPJDOK; // 0x10
	::System::String* HJLEJGBMGKM; // 0x18
	::System::Boolean JFLHHDCCBLK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGMMGFKKCL__CTOR_OFFSET))(this);
	}

	::System::Single CBJKBNNIBAM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGMMGFKKCL_CBJKBNNIBAM_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGMMGFKKCL_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void DEICFOMNIFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGMMGFKKCL_DEICFOMNIFN_OFFSET))(this);
	}

	::System::Boolean CFFGBGOGJJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGMMGFKKCL_CFFGBGOGJJF_OFFSET))(this);
	}

	::System::Void BLDKMDEDBMI(::JCLJOCDPCPL* JGJKFLCFCND)
	{
		return ((::System::Void(*)(::PVOID, ::JCLJOCDPCPL*))((::PBYTE)hIl2Cpp + KEGMMGFKKCL_BLDKMDEDBMI_OFFSET))(this, JGJKFLCFCND);
	}

	::System::Boolean MCJCCJOEKGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGMMGFKKCL_MCJCCJOEKGN_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEGMMGFKKCL_BBOMJDBNHIC_OFFSET))(this, AELLPLBJELA);
	}

	::System::Boolean IEPLOAMJKJG(::JCLJOCDPCPL* ODLCMACDKBN)
	{
		return ((::System::Boolean(*)(::PVOID, ::JCLJOCDPCPL*))((::PBYTE)hIl2Cpp + KEGMMGFKKCL_IEPLOAMJKJG_OFFSET))(this, ODLCMACDKBN);
	}
};
