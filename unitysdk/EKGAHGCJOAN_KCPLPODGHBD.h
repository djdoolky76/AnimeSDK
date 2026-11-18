#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class JDDHAHBFBMI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define EKGAHGCJOAN_KCPLPODGHBD_NDADAPBBMMN_OFFSET UNITYSDK_OFFSET(0x1711B670)
#define EKGAHGCJOAN_KCPLPODGHBD_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1711B570)
#define EKGAHGCJOAN_KCPLPODGHBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1711B660)

inline static constexpr unsigned int EKGAHGCJOAN_KCPLPODGHBD_TypeDefinitionIndex = 51238;

class EKGAHGCJOAN_KCPLPODGHBD : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::JDDHAHBFBMI*>*>* GOEIFNKHGCG; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_KCPLPODGHBD__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_KCPLPODGHBD_ONCREATEPROPERTY_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::JDDHAHBFBMI*>*>* NDADAPBBMMN()
	{
		return ((::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::JDDHAHBFBMI*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_KCPLPODGHBD_NDADAPBBMMN_OFFSET))(this);
	}
};
