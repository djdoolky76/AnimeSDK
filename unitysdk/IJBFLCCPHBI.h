#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APGOKGEOJJJ.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define IJBFLCCPHBI_AGMADLINOKE_OFFSET UNITYSDK_OFFSET(0x1657A200)
#define IJBFLCCPHBI_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1657A1B0)
#define IJBFLCCPHBI_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x1657A3C0)
#define IJBFLCCPHBI_MELJAFNJJMA_OFFSET UNITYSDK_OFFSET(0x1657A3D0)
#define IJBFLCCPHBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1657A1A0)

inline static constexpr unsigned int IJBFLCCPHBI_TypeDefinitionIndex = 50006;

class IJBFLCCPHBI : public ::APGOKGEOJJJ
{
public:
	::System::Int32 _EGBKMJIFEKN_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJBFLCCPHBI__CTOR_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean FCFOEJGPDNO(::System::Collections::Generic::IList_1<::System::Int32>* HGKANJHHLMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IJBFLCCPHBI_FCFOEJGPDNO_OFFSET))(this, HGKANJHHLMF);
	}

	::System::Int32 AGMADLINOKE(::System::Collections::Generic::IList_1<::System::Int32>* HGKANJHHLMF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IJBFLCCPHBI_AGMADLINOKE_OFFSET))(this, HGKANJHHLMF);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBFLCCPHBI_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 MELJAFNJJMA(::System::Collections::Generic::IList_1<::System::Int32>* MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IJBFLCCPHBI_MELJAFNJJMA_OFFSET))(this, MIALFKCCCPI);
	}
};
