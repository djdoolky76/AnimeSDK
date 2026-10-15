#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define HBCGFPPMKCP_CTOR_OFFSET UNITYSDK_OFFSET(0x15BD9880)
#define HBCGFPPMKCP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15BD9890)

inline static constexpr unsigned int HBCGFPPMKCP_TypeDefinitionIndex = 77948;

	class HBCGFPPMKCP : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::LMFOOOLDECA* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + HBCGFPPMKCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCGFPPMKCP_EXECUTE_OFFSET))(this);
		}

	};
