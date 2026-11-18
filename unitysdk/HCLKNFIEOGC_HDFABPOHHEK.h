#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPGLKKMDFID;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HCLKNFIEOGC_HDFABPOHHEK_JNECOMDBFAM_OFFSET UNITYSDK_OFFSET(0x14078300)
#define HCLKNFIEOGC_HDFABPOHHEK__CTOR_OFFSET UNITYSDK_OFFSET(0x140782F0)

inline static constexpr unsigned int HCLKNFIEOGC_HDFABPOHHEK_TypeDefinitionIndex = 72320;

class HCLKNFIEOGC_HDFABPOHHEK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* GEEKODJDNLG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLKNFIEOGC_HDFABPOHHEK__CTOR_OFFSET))(this);
	}

	::System::Boolean JNECOMDBFAM(::FPGLKKMDFID* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FPGLKKMDFID*))((::PBYTE)hIl2Cpp + HCLKNFIEOGC_HDFABPOHHEK_JNECOMDBFAM_OFFSET))(this, LJBPECKCCEA);
	}
};
