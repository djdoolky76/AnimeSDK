#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define KNHNLPIHONJ_KCBPAABGBNF_CGCBGPNGALH_OFFSET UNITYSDK_OFFSET(0x1D0BC3B0)
#define KNHNLPIHONJ_KCBPAABGBNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BC1A0)
#define KNHNLPIHONJ_KCBPAABGBNF_GDKHMPFOFID_OFFSET UNITYSDK_OFFSET(0x1D0BCF90)
#define KNHNLPIHONJ_KCBPAABGBNF_MFPGLOEGJJA_OFFSET UNITYSDK_OFFSET(0x1D0BD0F0)
#define KNHNLPIHONJ_KCBPAABGBNF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1D0BC550)

inline static constexpr unsigned int KNHNLPIHONJ_KCBPAABGBNF_TypeDefinitionIndex = 10369;

	class KNHNLPIHONJ_KCBPAABGBNF : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::System::Runtime::InteropServices::GCHandle>* GCJAAMJPJLA; // 0x10
		::System::Int64 PAIFFEDEADB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_KCBPAABGBNF_CTOR_OFFSET))(this);
		}

		::PVOID GDKHMPFOFID(::System::Int64 a1)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_KCBPAABGBNF_GDKHMPFOFID_OFFSET))(this, a1);
		}

		::PVOID MFPGLOEGJJA()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_KCBPAABGBNF_MFPGLOEGJJA_OFFSET))(this);
		}

		::PVOID CGCBGPNGALH(::System::Int64 a1)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_KCBPAABGBNF_CGCBGPNGALH_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_KCBPAABGBNF_PJPFIHFAHGO_OFFSET))(this);
		}

	};
