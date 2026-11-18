#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class OFINFECEEHO_FAAEOFGCOPA;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OFINFECEEHO_GLIIMAADNDG_HPDOKOGHNKD_OFFSET UNITYSDK_OFFSET(0x1F736850)
#define OFINFECEEHO_GLIIMAADNDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F736840)

inline static constexpr unsigned int OFINFECEEHO_GLIIMAADNDG_TypeDefinitionIndex = 95323;

class OFINFECEEHO_GLIIMAADNDG : public ::System::Object
{
public:
	::OFINFECEEHO_FAAEOFGCOPA* FGBNBFHOKAA; // 0x10
	::System::ValueTuple_2<::System::Int32, ::System::Int32> ENNHPLKALJB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFINFECEEHO_GLIIMAADNDG__CTOR_OFFSET))(this);
	}

	::System::Boolean HPDOKOGHNKD(::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* JFBAHOFFGGO, ::System::ValueTuple_2<::System::Int32, ::System::Int32> OCFIGDGDPHF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + OFINFECEEHO_GLIIMAADNDG_HPDOKOGHNKD_OFFSET))(this, JFBAHOFFGGO, OCFIGDGDPHF);
	}
};
