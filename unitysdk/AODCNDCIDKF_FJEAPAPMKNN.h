#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AODCNDCIDKF_FJEAPAPMKNN_PEBBGDIMMOG_OFFSET UNITYSDK_OFFSET(0xF777BC0)
#define AODCNDCIDKF_FJEAPAPMKNN__CTOR_OFFSET UNITYSDK_OFFSET(0xF777BB0)

inline static constexpr unsigned int AODCNDCIDKF_FJEAPAPMKNN_TypeDefinitionIndex = 79593;

class AODCNDCIDKF_FJEAPAPMKNN : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_FJEAPAPMKNN__CTOR_OFFSET))(this);
	}

	::System::Void PEBBGDIMMOG(::System::String* NHJPINCLDGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_FJEAPAPMKNN_PEBBGDIMMOG_OFFSET))(this, NHJPINCLDGD);
	}
};
