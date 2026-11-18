#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNAOBPFKOOC;
namespace System { template <typename T> class Action_1; }

#define KNAOBPFKOOC_DMAEOEEGBJA_FNBFLPBFBMG_OFFSET UNITYSDK_OFFSET(0x1D74D680)
#define KNAOBPFKOOC_DMAEOEEGBJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D74D670)

inline static constexpr unsigned int KNAOBPFKOOC_DMAEOEEGBJA_TypeDefinitionIndex = 8381;

class KNAOBPFKOOC_DMAEOEEGBJA : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* PNMOJJBCPJH; // 0x10
	::KNAOBPFKOOC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_DMAEOEEGBJA__CTOR_OFFSET))(this);
	}

	::System::Void FNBFLPBFBMG(::System::Int32 BPHGCFGJHMM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_DMAEOEEGBJA_FNBFLPBFBMG_OFFSET))(this, BPHGCFGJHMM);
	}
};
