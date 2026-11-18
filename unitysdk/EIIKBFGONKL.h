#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCCAIMPBGPD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIIKBFGONKL_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0x14152AA0)
#define EIIKBFGONKL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x141529D0)
#define EIIKBFGONKL__CTOR_OFFSET UNITYSDK_OFFSET(0x141528A0)

inline static constexpr unsigned int EIIKBFGONKL_TypeDefinitionIndex = 64050;

class EIIKBFGONKL : public ::System::Object
{
public:
	// static const ::System::Int32 KACOJPIAJGN = 0x6; // 0x0
	::System::Collections::Generic::List_1<::KCCAIMPBGPD*>* DCBBOJCFFHF; // 0x10
	::System::Collections::Generic::List_1<::KCCAIMPBGPD*>* BAHGLDKKNMF; // 0x18
	::System::Collections::Generic::List_1<::KCCAIMPBGPD*>* OGPFKPJPBBA; // 0x20
	::System::Boolean NPLMDLMDCNB; // 0x28
	::System::Boolean BHPHFLFABNJ; // 0x29
	::System::Byte _padding0[0x2];
	::System::Int32 ONMKHGCNICI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIKBFGONKL__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIKBFGONKL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void JCFJOKPIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIKBFGONKL_JCFJOKPIFPL_OFFSET))(this);
	}
};
