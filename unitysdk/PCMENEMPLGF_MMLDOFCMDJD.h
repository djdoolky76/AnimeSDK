#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF_CKNMDHMICFJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCMENEMPLGF_MMLDOFCMDJD_HELFMDMENCA_OFFSET UNITYSDK_OFFSET(0x18461780)
#define PCMENEMPLGF_MMLDOFCMDJD_PEDFHEJDMIP_OFFSET UNITYSDK_OFFSET(0x184616E0)
#define PCMENEMPLGF_MMLDOFCMDJD__CTOR_OFFSET UNITYSDK_OFFSET(0x184616D0)

inline static constexpr unsigned int PCMENEMPLGF_MMLDOFCMDJD_TypeDefinitionIndex = 62858;

class PCMENEMPLGF_MMLDOFCMDJD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KDMEGJCNJFC; // 0x10
	::PCMENEMPLGF_CKNMDHMICFJ* FGBNBFHOKAA; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* BGDLHIIIKGL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MMLDOFCMDJD__CTOR_OFFSET))(this);
	}

	::System::Void PEDFHEJDMIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MMLDOFCMDJD_PEDFHEJDMIP_OFFSET))(this);
	}

	::System::Void HELFMDMENCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MMLDOFCMDJD_HELFMDMENCA_OFFSET))(this);
	}
};
