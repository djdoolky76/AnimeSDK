#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BJJGOJAJDDA;
class ENMCNAPGMKO;
class IBPCDEKGHCJ;
class KADJHGPENEG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPIOFALHLMD_EGPNJPINDCM_OFFSET UNITYSDK_OFFSET(0x183181A0)
#define CPIOFALHLMD_OGIIJONKICH_OFFSET UNITYSDK_OFFSET(0x183184C0)
#define CPIOFALHLMD_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x18318430)
#define CPIOFALHLMD__CTOR_OFFSET UNITYSDK_OFFSET(0x18317FE0)

inline static constexpr unsigned int CPIOFALHLMD_TypeDefinitionIndex = 69816;

class CPIOFALHLMD : public ::System::Object
{
public:
	::IBPCDEKGHCJ* JKIPDAEINHP; // 0x10
	::BJJGOJAJDDA* ADMBFDBPPGL; // 0x18
	::System::Collections::Generic::List_1<::ENMCNAPGMKO*>* PPBOMIEEHBA; // 0x20
	::Foundation::AssetPath HEEGFLBNACP; // 0x28
	::KADJHGPENEG* LOFDELHIACF; // 0x38
	::System::Int32 NLECOLICBFJ; // 0x40
	::System::Boolean JFLGKCHNKLK; // 0x44
	::System::Boolean FIAMONGLOJG; // 0x45
	::System::Byte _padding0[0x2];
	::System::Int32 CDGLLBPJNPK; // 0x48
	::UnityEngine::Vector2 PKGANFLGNCM; // 0x4C
	::System::Int32 EFCBDOEHGGH; // 0x54
	::System::Int32 LMBPNLNPNIF; // 0x58

	::System::Void _ctor(::System::Int32 NLECOLICBFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPIOFALHLMD__CTOR_OFFSET))(this, NLECOLICBFJ);
	}

	::System::Boolean EGPNJPINDCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIOFALHLMD_EGPNJPINDCM_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIOFALHLMD_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Int32 OGIIJONKICH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIOFALHLMD_OGIIJONKICH_OFFSET))(this);
	}
};
