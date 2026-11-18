#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NGDDDCPNGCO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIFOEBDMGJI_CNCIMBIINBJ_OFFSET UNITYSDK_OFFSET(0x17233FE0)
#define EIFOEBDMGJI_EOADPANFMCA_OFFSET UNITYSDK_OFFSET(0x17233FF0)
#define EIFOEBDMGJI_NOJEKGOGJFM_1_OFFSET UNITYSDK_OFFSET(0x17234150)
#define EIFOEBDMGJI_NOJEKGOGJFM_OFFSET UNITYSDK_OFFSET(0x17234000)
#define EIFOEBDMGJI__CTOR_OFFSET UNITYSDK_OFFSET(0x17233FD0)

inline static constexpr unsigned int EIFOEBDMGJI_TypeDefinitionIndex = 77539;

class EIFOEBDMGJI : public ::System::Object
{
public:
	::System::Int32 _ODMKMCNKFGN_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 FBDFEMPJFPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIFOEBDMGJI__CTOR_OFFSET))(this, FBDFEMPJFPN);
	}

	::System::Void CNCIMBIINBJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIFOEBDMGJI_CNCIMBIINBJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EOADPANFMCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFOEBDMGJI_EOADPANFMCA_OFFSET))(this);
	}

	::NGDDDCPNGCO* NOJEKGOGJFM()
	{
		return ((::NGDDDCPNGCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFOEBDMGJI_NOJEKGOGJFM_OFFSET))(this);
	}

	::NGDDDCPNGCO* NOJEKGOGJFM_1(::System::Collections::Generic::List_1<::NGDDDCPNGCO*>*& DJLOKMMLFJC)
	{
		return ((::NGDDDCPNGCO*(*)(::PVOID, ::System::Collections::Generic::List_1<::NGDDDCPNGCO*>*&))((::PBYTE)hIl2Cpp + EIFOEBDMGJI_NOJEKGOGJFM_1_OFFSET))(this, DJLOKMMLFJC);
	}
};
