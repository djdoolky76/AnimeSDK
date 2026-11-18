#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class LHPJNAPHCDO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define MFEEFEPGJIL_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x156A5E60)
#define MFEEFEPGJIL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x156A5C20)
#define MFEEFEPGJIL_JDADMHGCMJI_OFFSET UNITYSDK_OFFSET(0x156A5E70)
#define MFEEFEPGJIL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x156A5F10)
#define MFEEFEPGJIL_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x156A5E20)
#define MFEEFEPGJIL_JNABFFDGEDM_OFFSET UNITYSDK_OFFSET(0x156A5E40)
#define MFEEFEPGJIL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x156A5E80)
#define MFEEFEPGJIL_MNPDNGHCMPA_OFFSET UNITYSDK_OFFSET(0x156A5E30)
#define MFEEFEPGJIL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x156A5CF0)
#define MFEEFEPGJIL_OPLAFOBMPAO_OFFSET UNITYSDK_OFFSET(0x156A5E50)
#define MFEEFEPGJIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A5C70)
#define MFEEFEPGJIL__CTOR_OFFSET UNITYSDK_OFFSET(0x156A5D60)

inline static constexpr unsigned int MFEEFEPGJIL_TypeDefinitionIndex = 49396;

class MFEEFEPGJIL : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x206; // 0x0
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* _CDAILHAMPLH_k__BackingField; // 0x50
	::LHPJNAPHCDO* _FJAAAAACINE_k__BackingField; // 0x58
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* _HLKFLOEKAKD_k__BackingField; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFEEFEPGJIL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEEFEPGJIL__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEEFEPGJIL_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEEFEPGJIL_ONCLEAN_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::LHPJNAPHCDO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LHPJNAPHCDO*))((::PBYTE)hIl2Cpp + MFEEFEPGJIL_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* MNPDNGHCMPA()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEEFEPGJIL_MNPDNGHCMPA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* JNABFFDGEDM()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEEFEPGJIL_JNABFFDGEDM_OFFSET))(this);
	}

	::System::Void OPLAFOBMPAO(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MFEEFEPGJIL_OPLAFOBMPAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::LHPJNAPHCDO* BLIOCCCNKDK()
	{
		return ((::LHPJNAPHCDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEEFEPGJIL_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Void JDADMHGCMJI(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MFEEFEPGJIL_JDADMHGCMJI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEEFEPGJIL_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MFEEFEPGJIL* JFDOOELFAOA()
	{
		return ((::MFEEFEPGJIL*(*)())((::PBYTE)hIl2Cpp + MFEEFEPGJIL_JFDOOELFAOA_OFFSET))();
	}
};
