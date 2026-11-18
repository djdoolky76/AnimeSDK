#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class CKPKFKIJMIF;
class DEBACADPGID;
class MKJGFIDDEPA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T> class JIOLFCAGOFH_1;

#define EKGAHGCJOAN_LHIDCKICFPB_ANENMEAOMPO_OFFSET UNITYSDK_OFFSET(0x154B72C0)
#define EKGAHGCJOAN_LHIDCKICFPB_FOLDJLDOFDC_OFFSET UNITYSDK_OFFSET(0x154B7330)
#define EKGAHGCJOAN_LHIDCKICFPB_LEHMOLGJAJF_OFFSET UNITYSDK_OFFSET(0x154B6B10)
#define EKGAHGCJOAN_LHIDCKICFPB_MCCEHJLHDFO_OFFSET UNITYSDK_OFFSET(0x154B78C0)
#define EKGAHGCJOAN_LHIDCKICFPB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x154B6A10)
#define EKGAHGCJOAN_LHIDCKICFPB__CTOR_OFFSET UNITYSDK_OFFSET(0x154B6B00)

inline static constexpr unsigned int EKGAHGCJOAN_LHIDCKICFPB_TypeDefinitionIndex = 51247;

class EKGAHGCJOAN_LHIDCKICFPB : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DEBACADPGID*>* JNEGEOANJGP; // 0x88
	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::DEBACADPGID*>*>* EBFNJGKKMLD; // 0x90
	::JIOLFCAGOFH_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>* MGCFAMEMKBJ; // 0x98
	::System::Collections::Generic::HashSet_1<::System::Int32>* FBBCOLEINKN; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_LHIDCKICFPB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_LHIDCKICFPB_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void LEHMOLGJAJF(::MKJGFIDDEPA* FHIOPFNMGDF)
	{
		return ((::System::Void(*)(::PVOID, ::MKJGFIDDEPA*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_LHIDCKICFPB_LEHMOLGJAJF_OFFSET))(this, FHIOPFNMGDF);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* ANENMEAOMPO()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_LHIDCKICFPB_ANENMEAOMPO_OFFSET))(this);
	}

	::System::Void FOLDJLDOFDC(::CKPKFKIJMIF* GDINHGLCODO)
	{
		return ((::System::Void(*)(::PVOID, ::CKPKFKIJMIF*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_LHIDCKICFPB_FOLDJLDOFDC_OFFSET))(this, GDINHGLCODO);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DEBACADPGID*>* MCCEHJLHDFO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::DEBACADPGID*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_LHIDCKICFPB_MCCEHJLHDFO_OFFSET))(this);
	}
};
