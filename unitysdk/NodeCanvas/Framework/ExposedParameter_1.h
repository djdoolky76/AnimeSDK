#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ExposedParameter.h"

namespace NodeCanvas::Framework { template <typename T> class Variable_1; }
namespace System { class String; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ExposedParameter_1_TypeDefinitionIndex = 30585;

	template <typename T>
	class ExposedParameter_1 : public ::NodeCanvas::Framework::ExposedParameter
	{
	public:
		::System::String* _targetVariableID; // 0x0
		T _value; // 0x0
		::NodeCanvas::Framework::Variable_1<T>* _varRef_k__BackingField; // 0x0
	};
}
