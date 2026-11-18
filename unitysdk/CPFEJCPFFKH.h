#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FDABFGBJMAD;
class HCAJMGAPEAJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GUIStyle; }

#define CPFEJCPFFKH_ADCCDNAIMAO_OFFSET UNITYSDK_OFFSET(0x16889270)
#define CPFEJCPFFKH_DGKEDKBFNMF_OFFSET UNITYSDK_OFFSET(0x168891C0)
#define CPFEJCPFFKH_HKPCLNBJAFK_1_OFFSET UNITYSDK_OFFSET(0x16888F90)
#define CPFEJCPFFKH_HKPCLNBJAFK_OFFSET UNITYSDK_OFFSET(0x16888CB0)
#define CPFEJCPFFKH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16888930)
#define CPFEJCPFFKH_PNFBADNJOPL_OFFSET UNITYSDK_OFFSET(0x16888A00)
#define CPFEJCPFFKH__CTOR_OFFSET UNITYSDK_OFFSET(0x16888800)

inline static constexpr unsigned int CPFEJCPFFKH_TypeDefinitionIndex = 82494;

class CPFEJCPFFKH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HCAJMGAPEAJ*>* MBCIAEPJNIO; // 0x10
	::System::Collections::Generic::List_1<::HCAJMGAPEAJ*>* FDGICBAEKOO; // 0x18
	::System::Collections::Generic::List_1<::HCAJMGAPEAJ*>* BHJEGANPOGO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEJCPFFKH__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEJCPFFKH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void PNFBADNJOPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEJCPFFKH_PNFBADNJOPL_OFFSET))(this);
	}

	::System::Boolean HKPCLNBJAFK(::FDABFGBJMAD* ANCGEPFCCKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::FDABFGBJMAD*))((::PBYTE)hIl2Cpp + CPFEJCPFFKH_HKPCLNBJAFK_OFFSET))(this, ANCGEPFCCKM);
	}

	::System::Boolean HKPCLNBJAFK_1(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CPFEJCPFFKH_HKPCLNBJAFK_1_OFFSET))(this, OHOGDOMNHNK);
	}

	::System::Void DGKEDKBFNMF(::HCAJMGAPEAJ* ECCGHEFMJDA)
	{
		return ((::System::Void(*)(::PVOID, ::HCAJMGAPEAJ*))((::PBYTE)hIl2Cpp + CPFEJCPFFKH_DGKEDKBFNMF_OFFSET))(this, ECCGHEFMJDA);
	}

	::System::Void ADCCDNAIMAO(::UnityEngine::GUIStyle* IFBIKDHCCOF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + CPFEJCPFFKH_ADCCDNAIMAO_OFFSET))(this, IFBIKDHCCOF);
	}
};
