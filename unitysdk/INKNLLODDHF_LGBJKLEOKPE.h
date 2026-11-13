#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAOCJKOBCN_JGBAFEEMGCI;
class INKNLLODDHF;
class POIONNNNCMJ;

#define INKNLLODDHF_LGBJKLEOKPE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A5F5780)
#define INKNLLODDHF_LGBJKLEOKPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F5770)

inline static constexpr unsigned int INKNLLODDHF_LGBJKLEOKPE_TypeDefinitionIndex = 82349;

	class INKNLLODDHF_LGBJKLEOKPE : public ::System::Object
	{
	public:
		::ALAOCJKOBCN_JGBAFEEMGCI* NALOLGLHFDC; // 0x10
		::System::Void _ctor(::ALAOCJKOBCN_JGBAFEEMGCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALAOCJKOBCN_JGBAFEEMGCI*))((::PBYTE)hIl2Cpp + INKNLLODDHF_LGBJKLEOKPE_CTOR_OFFSET))(this, a1);
		}

		::INKNLLODDHF* BPLPBPMEODA(::POIONNNNCMJ* a1, ::System::Int32 a2)
		{
			return ((::INKNLLODDHF*(*)(::PVOID, ::POIONNNNCMJ*, ::System::Int32))((::PBYTE)hIl2Cpp + INKNLLODDHF_LGBJKLEOKPE_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
