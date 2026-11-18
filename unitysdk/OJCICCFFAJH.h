#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDDCKGJPAPN;
class EKGAHGCJOAN;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OJCICCFFAJH_BGNJCMHHIOA_OFFSET UNITYSDK_OFFSET(0x172CD150)
#define OJCICCFFAJH_DFAALKOONML_OFFSET UNITYSDK_OFFSET(0x172CDD40)
#define OJCICCFFAJH_DMGOOKEFAJK_OFFSET UNITYSDK_OFFSET(0x172CC940)
#define OJCICCFFAJH_LNCJGOJGEDJ_OFFSET UNITYSDK_OFFSET(0x172CC500)
#define OJCICCFFAJH_NJHKHOHDJGI_OFFSET UNITYSDK_OFFSET(0x172CCD70)
#define OJCICCFFAJH__CCTOR_OFFSET UNITYSDK_OFFSET(0x172CC470)

inline static constexpr unsigned int OJCICCFFAJH_TypeDefinitionIndex = 80195;

class OJCICCFFAJH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GLNOELDBLKO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OJCICCFFAJH_TypeDefinitionIndex)->GetStaticField(0x4FDB0);
	}
	// static const ::System::Int32 KMOBIFPCADN = 0x279E; // 0x0
	// static const ::System::Int32 AEGMBNEJIGN = 0xF79B9; // 0x0
	// static const ::System::Int32 FLBHBDLDDBJ = 0xF79BA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJCICCFFAJH__CCTOR_OFFSET))();
	}

	static ::System::Boolean LNCJGOJGEDJ(::EKGAHGCJOAN* LHPFMGBDFPN, ::System::Int32 IFDJIGHBAEI, ::BDDCKGJPAPN*& HHJGENIJBLM, ::System::Int32& ALJJBJEHLDN)
	{
		return ((::System::Boolean(*)(::EKGAHGCJOAN*, ::System::Int32, ::BDDCKGJPAPN*&, ::System::Int32&))((::PBYTE)hIl2Cpp + OJCICCFFAJH_LNCJGOJGEDJ_OFFSET))(LHPFMGBDFPN, IFDJIGHBAEI, HHJGENIJBLM, ALJJBJEHLDN);
	}

	static ::System::Void DMGOOKEFAJK(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* DOIJOAEAPCF, ::System::Int32& OIAOHDAOEKA, ::System::Int32& ALJJBJEHLDN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + OJCICCFFAJH_DMGOOKEFAJK_OFFSET))(DOIJOAEAPCF, OIAOHDAOEKA, ALJJBJEHLDN);
	}

	static ::System::Int32 NJHKHOHDJGI(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* JLOHLLBNCGH)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OJCICCFFAJH_NJHKHOHDJGI_OFFSET))(JLOHLLBNCGH);
	}

	static ::System::Void BGNJCMHHIOA(::System::Boolean OKMPDLJOIMN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OJCICCFFAJH_BGNJCMHHIOA_OFFSET))(OKMPDLJOIMN);
	}

	static ::System::Void DFAALKOONML(::System::Boolean OKMPDLJOIMN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OJCICCFFAJH_DFAALKOONML_OFFSET))(OKMPDLJOIMN);
	}
};
