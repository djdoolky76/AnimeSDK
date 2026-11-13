#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int JCDJJEDDIMP_TransitionRule_1_TypeDefinitionIndex = 66139;

	template <typename T>
	class JCDJJEDDIMP_TransitionRule_1 : public ::System::Object
	{
	public:
		::JCDJJEDDIMP_IFlowState* _TargetState_k__BackingField; // 0x0
		::System::Object* _Param_k__BackingField; // 0x0
		::System::Predicate_1<T>* _Predicate; // 0x0
	};
