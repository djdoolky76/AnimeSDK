#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODNOMMABHBE_MLMECFGDFEG.h"
#include "unitysdk/System/Object.h"

class JCKLKIENABP;
class LGLMPHINNNH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODNOMMABHBE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xB310B90)
#define ODNOMMABHBE_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0xB311350)
#define ODNOMMABHBE_CDEGALHKEOF_OFFSET UNITYSDK_OFFSET(0xB310B80)
#define ODNOMMABHBE_CHPMFIIBNAC_OFFSET UNITYSDK_OFFSET(0xB310E00)
#define ODNOMMABHBE_DFJHNGKHPJH_OFFSET UNITYSDK_OFFSET(0xB310850)
#define ODNOMMABHBE_FFJBFPIHEND_OFFSET UNITYSDK_OFFSET(0xB310CF0)
#define ODNOMMABHBE_GIMLHJNAPKK_OFFSET UNITYSDK_OFFSET(0xB311490)
#define ODNOMMABHBE_IFNMHGIANMP_OFFSET UNITYSDK_OFFSET(0xB310910)
#define ODNOMMABHBE_JBEFNNBHMGK_OFFSET UNITYSDK_OFFSET(0xB311250)
#define ODNOMMABHBE_KCPEICJPKLO_OFFSET UNITYSDK_OFFSET(0xB3107A0)
#define ODNOMMABHBE_NPNLGKACANI_OFFSET UNITYSDK_OFFSET(0xB310DB0)
#define ODNOMMABHBE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3105A0)
#define ODNOMMABHBE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3104E0)

inline static constexpr unsigned int ODNOMMABHBE_TypeDefinitionIndex = 92547;

class ODNOMMABHBE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>** StaticGet_JBHFBFPECHI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ODNOMMABHBE_TypeDefinitionIndex)->GetStaticField(0x4DD70);
	}
	::System::Collections::Generic::List_1<::System::Object*>* AEBMHGDHMAP; // 0x10
	::LGLMPHINNNH* FEFFFPGCIIO; // 0x18
	::ODNOMMABHBE_MLMECFGDFEG FDABMCCEOGG; // 0x20

	::System::Void _ctor(::LGLMPHINNNH* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::LGLMPHINNNH*))((::PBYTE)hIl2Cpp + ODNOMMABHBE__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODNOMMABHBE__CCTOR_OFFSET))();
	}

	static ::System::Boolean KCPEICJPKLO(::System::String* IEJAIGNKBGB)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ODNOMMABHBE_KCPEICJPKLO_OFFSET))(IEJAIGNKBGB);
	}

	::System::Void DFJHNGKHPJH(::ODNOMMABHBE_MLMECFGDFEG CFMBGCMCNMM)
	{
		return ((::System::Void(*)(::PVOID, ::ODNOMMABHBE_MLMECFGDFEG))((::PBYTE)hIl2Cpp + ODNOMMABHBE_DFJHNGKHPJH_OFFSET))(this, CFMBGCMCNMM);
	}

	::ODNOMMABHBE_MLMECFGDFEG CDEGALHKEOF()
	{
		return ((::ODNOMMABHBE_MLMECFGDFEG(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNOMMABHBE_CDEGALHKEOF_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::JCKLKIENABP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JCKLKIENABP*))((::PBYTE)hIl2Cpp + ODNOMMABHBE_BBOMJDBNHIC_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void FFJBFPIHEND(::ODNOMMABHBE_MLMECFGDFEG CFMBGCMCNMM)
	{
		return ((::System::Void(*)(::PVOID, ::ODNOMMABHBE_MLMECFGDFEG))((::PBYTE)hIl2Cpp + ODNOMMABHBE_FFJBFPIHEND_OFFSET))(this, CFMBGCMCNMM);
	}

	::System::Void NPNLGKACANI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNOMMABHBE_NPNLGKACANI_OFFSET))(this);
	}

	::System::Void CHPMFIIBNAC(::System::String* JPLKKOHBBKC, ::System::String* IEJAIGNKBGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ODNOMMABHBE_CHPMFIIBNAC_OFFSET))(this, JPLKKOHBBKC, IEJAIGNKBGB);
	}

	static ::System::Boolean JBEFNNBHMGK(::System::String* IEJAIGNKBGB)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ODNOMMABHBE_JBEFNNBHMGK_OFFSET))(IEJAIGNKBGB);
	}

	::System::Void BJANDJKKNCD(::JCKLKIENABP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JCKLKIENABP*))((::PBYTE)hIl2Cpp + ODNOMMABHBE_BJANDJKKNCD_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void GIMLHJNAPKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNOMMABHBE_GIMLHJNAPKK_OFFSET))(this);
	}

	::System::Void IFNMHGIANMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNOMMABHBE_IFNMHGIANMP_OFFSET))(this);
	}
};
