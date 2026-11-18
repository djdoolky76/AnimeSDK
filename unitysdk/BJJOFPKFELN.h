#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class EPFBFPHILLP;
class IKFKKMBEBBG;
class OBIJODGCLDA;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJJOFPKFELN_AOKHKKHLCNH_OFFSET UNITYSDK_OFFSET(0x10E08140)
#define BJJOFPKFELN_BEBJHOKJBMC_OFFSET UNITYSDK_OFFSET(0x10E07410)
#define BJJOFPKFELN_CLCKJPNOKLP_OFFSET UNITYSDK_OFFSET(0x10E07970)
#define BJJOFPKFELN_CLGOBPEOECI_OFFSET UNITYSDK_OFFSET(0x10E07840)
#define BJJOFPKFELN_FIMCCCAONMJ_OFFSET UNITYSDK_OFFSET(0x10E07A60)
#define BJJOFPKFELN_GAIBJGAMJLJ_OFFSET UNITYSDK_OFFSET(0x10E07CF0)
#define BJJOFPKFELN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10E071B0)
#define BJJOFPKFELN_IKKDEFEPPNB_OFFSET UNITYSDK_OFFSET(0x10E07640)
#define BJJOFPKFELN_JBPFDJEJGPH_OFFSET UNITYSDK_OFFSET(0x10E07820)
#define BJJOFPKFELN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10E080C0)
#define BJJOFPKFELN_JLPBLJLNPEP_OFFSET UNITYSDK_OFFSET(0x10E07560)
#define BJJOFPKFELN_JMENCJMFAFM_OFFSET UNITYSDK_OFFSET(0x10E07500)
#define BJJOFPKFELN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10E08030)
#define BJJOFPKFELN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10E07010)
#define BJJOFPKFELN__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E07200)
#define BJJOFPKFELN__CTOR_OFFSET UNITYSDK_OFFSET(0x10E07280)

inline static constexpr unsigned int BJJOFPKFELN_TypeDefinitionIndex = 55969;

class BJJOFPKFELN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x5B; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OBIJODGCLDA*>* OLKAGFBFEOP; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::OBIJODGCLDA*>* ILNHGELFALI; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::EPFBFPHILLP*>* FGLIEIDIALM; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJJOFPKFELN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJOFPKFELN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJOFPKFELN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJOFPKFELN_GETCLASSID_OFFSET))(this);
	}

	::OBIJODGCLDA* BEBJHOKJBMC(::System::String* HIAIKHDFCLN)
	{
		return ((::OBIJODGCLDA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJJOFPKFELN_BEBJHOKJBMC_OFFSET))(this, HIAIKHDFCLN);
	}

	::OBIJODGCLDA* JMENCJMFAFM(::System::String* NNPNKOBOPCG)
	{
		return ((::OBIJODGCLDA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJJOFPKFELN_JMENCJMFAFM_OFFSET))(this, NNPNKOBOPCG);
	}

	::System::Void IKKDEFEPPNB(::System::String* MJMPNKHGDDE, ::IKFKKMBEBBG* IJKIMCMPBCF, ::System::Single PELELFHAEHP, ::System::Single BKEJLHFDHBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::IKFKKMBEBBG*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BJJOFPKFELN_IKKDEFEPPNB_OFFSET))(this, MJMPNKHGDDE, IJKIMCMPBCF, PELELFHAEHP, BKEJLHFDHBH);
	}

	::System::Int32 JBPFDJEJGPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJOFPKFELN_JBPFDJEJGPH_OFFSET))(this);
	}

	::System::Void CLGOBPEOECI(::System::String* MJMPNKHGDDE, ::IKFKKMBEBBG* IJKIMCMPBCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::IKFKKMBEBBG*))((::PBYTE)hIl2Cpp + BJJOFPKFELN_CLGOBPEOECI_OFFSET))(this, MJMPNKHGDDE, IJKIMCMPBCF);
	}

	::EPFBFPHILLP* CLCKJPNOKLP(::System::String* MJMPNKHGDDE)
	{
		return ((::EPFBFPHILLP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJJOFPKFELN_CLCKJPNOKLP_OFFSET))(this, MJMPNKHGDDE);
	}

	::System::Void FIMCCCAONMJ(::OBIJODGCLDA* PPIHKHNFNGL)
	{
		return ((::System::Void(*)(::PVOID, ::OBIJODGCLDA*))((::PBYTE)hIl2Cpp + BJJOFPKFELN_FIMCCCAONMJ_OFFSET))(this, PPIHKHNFNGL);
	}

	::System::Void GAIBJGAMJLJ(::OBIJODGCLDA* PPIHKHNFNGL)
	{
		return ((::System::Void(*)(::PVOID, ::OBIJODGCLDA*))((::PBYTE)hIl2Cpp + BJJOFPKFELN_GAIBJGAMJLJ_OFFSET))(this, PPIHKHNFNGL);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJOFPKFELN_MEFBHFEOKGH_OFFSET))(this);
	}

	::OBIJODGCLDA* JLPBLJLNPEP(::System::Int32 PPOLJNLAOLH)
	{
		return ((::OBIJODGCLDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJJOFPKFELN_JLPBLJLNPEP_OFFSET))(this, PPOLJNLAOLH);
	}

	static ::BJJOFPKFELN* JFDOOELFAOA()
	{
		return ((::BJJOFPKFELN*(*)())((::PBYTE)hIl2Cpp + BJJOFPKFELN_JFDOOELFAOA_OFFSET))();
	}

	::System::Object* AOKHKKHLCNH()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJOFPKFELN_AOKHKKHLCNH_OFFSET))(this);
	}
};
