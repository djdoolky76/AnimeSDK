#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMPOHNBEPFK;
class DOJFNCNIHKF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define NPNGKEADAGC_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x15F4CE20)
#define NPNGKEADAGC_IJJHKEMLEEC_1_OFFSET UNITYSDK_OFFSET(0x15F4CCB0)
#define NPNGKEADAGC_IJJHKEMLEEC_OFFSET UNITYSDK_OFFSET(0x15F4CA20)
#define NPNGKEADAGC_MHAMBHGFIPH_OFFSET UNITYSDK_OFFSET(0x15F4CA80)
#define NPNGKEADAGC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15F4CC10)
#define NPNGKEADAGC_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x15F4C650)
#define NPNGKEADAGC__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4C570)

inline static constexpr unsigned int NPNGKEADAGC_TypeDefinitionIndex = 49570;

class NPNGKEADAGC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DOJFNCNIHKF*>* ODJCPMKHGGD; // 0x10
	::System::Collections::Generic::List_1<::DOJFNCNIHKF*>* LNJIHGFPNIJ; // 0x18
	::System::UInt32 FABKAHICNPL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNGKEADAGC__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPNGKEADAGC_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::CMPOHNBEPFK* MHAMBHGFIPH(::UnityEngine::RectTransform* IAPKABMDJNF)
	{
		return ((::CMPOHNBEPFK*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NPNGKEADAGC_MHAMBHGFIPH_OFFSET))(this, IAPKABMDJNF);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNGKEADAGC_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void IJJHKEMLEEC(::DOJFNCNIHKF* MMDKDGPNHCK)
	{
		return ((::System::Void(*)(::PVOID, ::DOJFNCNIHKF*))((::PBYTE)hIl2Cpp + NPNGKEADAGC_IJJHKEMLEEC_OFFSET))(this, MMDKDGPNHCK);
	}

	::System::Void IJJHKEMLEEC_1(::System::UInt32 LONODJEPPGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPNGKEADAGC_IJJHKEMLEEC_1_OFFSET))(this, LONODJEPPGL);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNGKEADAGC_HNDGJKPNIHA_OFFSET))(this);
	}
};
