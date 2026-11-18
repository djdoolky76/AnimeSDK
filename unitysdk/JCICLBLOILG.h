#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define JCICLBLOILG_ADPJEOKEDND_OFFSET UNITYSDK_OFFSET(0x1659B870)
#define JCICLBLOILG__CTOR_OFFSET UNITYSDK_OFFSET(0x1659B860)

inline static constexpr unsigned int JCICLBLOILG_TypeDefinitionIndex = 45089;

class JCICLBLOILG : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* IIHAHGCFBKL; // 0x10

	::System::Void _ctor(::System::Action_1<::System::Boolean>* PHPGAGGHDJB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + JCICLBLOILG__CTOR_OFFSET))(this, PHPGAGGHDJB);
	}

	::System::Void ADPJEOKEDND(::System::Boolean FIPHFGHNNBE, ::System::Boolean IOKNPLAMIKB, ::System::Action* NJJPAJNJFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + JCICLBLOILG_ADPJEOKEDND_OFFSET))(this, FIPHFGHNNBE, IOKNPLAMIKB, NJJPAJNJFOJ);
	}
};
