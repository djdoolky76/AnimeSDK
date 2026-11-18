#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHDFMBBAKDI_ECABCFKOHOH_OFFSET UNITYSDK_OFFSET(0x156BB130)
#define FHDFMBBAKDI_FBNAEHNNLDM_OFFSET UNITYSDK_OFFSET(0x156BB560)
#define FHDFMBBAKDI_MFGHNFHIFHL_OFFSET UNITYSDK_OFFSET(0x156BB340)
#define FHDFMBBAKDI__CTOR_OFFSET UNITYSDK_OFFSET(0x156BB120)

inline static constexpr unsigned int FHDFMBBAKDI_TypeDefinitionIndex = 47671;

class FHDFMBBAKDI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDFMBBAKDI__CTOR_OFFSET))(this);
	}

	static ::System::Int32 ECABCFKOHOH(::System::Int32 GCNHGFACCCO)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FHDFMBBAKDI_ECABCFKOHOH_OFFSET))(GCNHGFACCCO);
	}

	static ::System::Void MFGHNFHIFHL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHDFMBBAKDI_MFGHNFHIFHL_OFFSET))();
	}

	static ::System::Void FBNAEHNNLDM(::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* LNKAJGLKAHE, ::System::Int32 JHFKDGBCOBA, ::System::Int32 MDKMEMLADPC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FHDFMBBAKDI_FBNAEHNNLDM_OFFSET))(LNKAJGLKAHE, JHFKDGBCOBA, MDKMEMLADPC);
	}
};
