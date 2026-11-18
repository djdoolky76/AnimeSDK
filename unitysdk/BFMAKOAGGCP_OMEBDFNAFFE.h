#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OHJNEEKHFEM;
namespace System { class Action; }

#define BFMAKOAGGCP_OMEBDFNAFFE_CMFNIPHEDOB_OFFSET UNITYSDK_OFFSET(0x113E10D0)
#define BFMAKOAGGCP_OMEBDFNAFFE__CTOR_OFFSET UNITYSDK_OFFSET(0x113E10C0)

inline static constexpr unsigned int BFMAKOAGGCP_OMEBDFNAFFE_TypeDefinitionIndex = 56143;

class BFMAKOAGGCP_OMEBDFNAFFE : public ::System::Object
{
public:
	::System::Action* BEFEKPHFKCH; // 0x10
	::System::Int32 CBKMKCHAPNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMAKOAGGCP_OMEBDFNAFFE__CTOR_OFFSET))(this);
	}

	::System::Void CMFNIPHEDOB(::OHJNEEKHFEM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OHJNEEKHFEM*))((::PBYTE)hIl2Cpp + BFMAKOAGGCP_OMEBDFNAFFE_CMFNIPHEDOB_OFFSET))(this, GLAOEHCGCFO);
	}
};
