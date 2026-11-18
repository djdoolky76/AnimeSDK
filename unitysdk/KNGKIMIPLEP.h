#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCJELHOJCIF;
class DCADLJAPMBH;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class LJIIAALIKDB_2;

#define KNGKIMIPLEP_AGPCALDNGEH_OFFSET UNITYSDK_OFFSET(0x17671450)
#define KNGKIMIPLEP_BFJMAHNCHKI_OFFSET UNITYSDK_OFFSET(0x17671330)
#define KNGKIMIPLEP_EBCNHHIGPAG_OFFSET UNITYSDK_OFFSET(0x176719D0)
#define KNGKIMIPLEP_FLKAMLDKGPI_OFFSET UNITYSDK_OFFSET(0x17671A40)
#define KNGKIMIPLEP_LAEAAGNEHNN_OFFSET UNITYSDK_OFFSET(0x176716E0)
#define KNGKIMIPLEP_OKIAHEDFGPJ_OFFSET UNITYSDK_OFFSET(0x17671750)
#define KNGKIMIPLEP__CTOR_OFFSET UNITYSDK_OFFSET(0x17671280)

inline static constexpr unsigned int KNGKIMIPLEP_TypeDefinitionIndex = 74924;

class KNGKIMIPLEP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* FBHIKINGPLE; // 0x10
	::LJIIAALIKDB_2<::System::Int32, ::System::Int32>* BFKMMPOPCFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGKIMIPLEP__CTOR_OFFSET))(this);
	}

	::System::Void BFJMAHNCHKI(::DCADLJAPMBH* POCMAAIMJKF)
	{
		return ((::System::Void(*)(::PVOID, ::DCADLJAPMBH*))((::PBYTE)hIl2Cpp + KNGKIMIPLEP_BFJMAHNCHKI_OFFSET))(this, POCMAAIMJKF);
	}

	::System::Void LAEAAGNEHNN(::System::Int32 AOCOIDIMLIH, ::System::Action_1<::System::Int32>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KNGKIMIPLEP_LAEAAGNEHNN_OFFSET))(this, AOCOIDIMLIH, GJBHEJGENMI);
	}

	::System::Void OKIAHEDFGPJ(::System::Int32 PPKEDEIDCGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNGKIMIPLEP_OKIAHEDFGPJ_OFFSET))(this, PPKEDEIDCGD);
	}

	::System::Void EBCNHHIGPAG(::System::Int32 AOCOIDIMLIH, ::System::Action_1<::System::Int32>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KNGKIMIPLEP_EBCNHHIGPAG_OFFSET))(this, AOCOIDIMLIH, GJBHEJGENMI);
	}

	::System::Void FLKAMLDKGPI(::CCJELHOJCIF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::CCJELHOJCIF*))((::PBYTE)hIl2Cpp + KNGKIMIPLEP_FLKAMLDKGPI_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void AGPCALDNGEH(::System::Int32 PPKEDEIDCGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNGKIMIPLEP_AGPCALDNGEH_OFFSET))(this, PPKEDEIDCGD);
	}
};
