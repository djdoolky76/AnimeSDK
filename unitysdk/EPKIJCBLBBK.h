#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/FDNCOAGCCKH.h"

class AFCDEJDJPBG;
class JCADHFOKIHK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPKIJCBLBBK_CNHBDOMKKDE_1_OFFSET UNITYSDK_OFFSET(0x158C6D90)
#define EPKIJCBLBBK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x158C6B70)
#define EPKIJCBLBBK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x158C6A90)
#define EPKIJCBLBBK_EGELDOGNDKD_OFFSET UNITYSDK_OFFSET(0x158C6C20)
#define EPKIJCBLBBK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x158C6DE0)
#define EPKIJCBLBBK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x158C6A00)
#define EPKIJCBLBBK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x158C6AD0)
#define EPKIJCBLBBK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x158C6860)
#define EPKIJCBLBBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x158C64A0)
#define EPKIJCBLBBK__CCTOR_OFFSET UNITYSDK_OFFSET(0x158C6980)
#define EPKIJCBLBBK__CTOR_OFFSET UNITYSDK_OFFSET(0x158C69F0)

inline static constexpr unsigned int EPKIJCBLBBK_TypeDefinitionIndex = 91880;

class EPKIJCBLBBK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xDB; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>* PGOCEJPOCFP; // 0x20
	::System::String* CJGCBGDLIAL; // 0x28
	::System::String* GLLIDENNAAL; // 0x30
	::BLPJECICNDE LOACBJBANNC; // 0x38
	::System::Single MBOKJAGKALE; // 0x3C
	::System::Boolean OCBICMAMKMN; // 0x40
	::System::Boolean FGJMLOILNLF; // 0x41
	::System::Byte _padding0[0x2];
	::System::Int32 GNLJPGBENBE; // 0x44

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPKIJCBLBBK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKIJCBLBBK__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKIJCBLBBK_TOSTRING_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKIJCBLBBK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKIJCBLBBK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKIJCBLBBK_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKIJCBLBBK_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* GLLIDENNAAL, ::BLPJECICNDE LOACBJBANNC, ::System::String* CJGCBGDLIAL, ::System::Int32 GNLJPGBENBE, ::System::Single MBOKJAGKALE, ::System::Boolean FGJMLOILNLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::BLPJECICNDE, ::System::String*, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + EPKIJCBLBBK_CNHBDOMKKDE_OFFSET))(this, GLLIDENNAAL, LOACBJBANNC, CJGCBGDLIAL, GNLJPGBENBE, MBOKJAGKALE, FGJMLOILNLF);
	}

	::System::Void EGELDOGNDKD(::JCADHFOKIHK* GKLACFFMCCN, ::AFCDEJDJPBG* COCMLHEPNNG)
	{
		return ((::System::Void(*)(::PVOID, ::JCADHFOKIHK*, ::AFCDEJDJPBG*))((::PBYTE)hIl2Cpp + EPKIJCBLBBK_EGELDOGNDKD_OFFSET))(this, GKLACFFMCCN, COCMLHEPNNG);
	}

	::System::Void CNHBDOMKKDE_1(::System::String* GLLIDENNAAL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPKIJCBLBBK_CNHBDOMKKDE_1_OFFSET))(this, GLLIDENNAAL);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKIJCBLBBK_FIGPAOKNJLN_OFFSET))(this);
	}
};
