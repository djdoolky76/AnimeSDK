#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define HBCGFPPMKCP_CTOR_OFFSET UNITYSDK_OFFSET(0x16B28410)
#define HBCGFPPMKCP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16B28420)

inline static constexpr unsigned int HBCGFPPMKCP_TypeDefinitionIndex = 80684;

	class HBCGFPPMKCP : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + HBCGFPPMKCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCGFPPMKCP_EXECUTE_OFFSET))(this);
		}

	};
