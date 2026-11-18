#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPPMPHICDEA_PBJJDMFNJMN_GKFOJJJGHPK_OFFSET UNITYSDK_OFFSET(0x14921BF0)
#define GPPMPHICDEA_PBJJDMFNJMN_KKFNPEOCIBN_OFFSET UNITYSDK_OFFSET(0x14921A30)
#define GPPMPHICDEA_PBJJDMFNJMN__CTOR_OFFSET UNITYSDK_OFFSET(0x14921A20)

inline static constexpr unsigned int GPPMPHICDEA_PBJJDMFNJMN_TypeDefinitionIndex = 42675;

class GPPMPHICDEA_PBJJDMFNJMN : public ::System::Object
{
public:
	::MoleMole::UIWindowController* GPJOAAKLNDF; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*>* KAKAEMACNPB; // 0x18
	::System::Int32 LAFJEJANLBF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_PBJJDMFNJMN__CTOR_OFFSET))(this);
	}

	::System::Void KKFNPEOCIBN(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* HHJDGADOGFP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_PBJJDMFNJMN_KKFNPEOCIBN_OFFSET))(this, HHJDGADOGFP);
	}

	::System::Void GKFOJJJGHPK(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPPMPHICDEA_PBJJDMFNJMN_GKFOJJJGHPK_OFFSET))(this, JHFKDGBCOBA);
	}
};
