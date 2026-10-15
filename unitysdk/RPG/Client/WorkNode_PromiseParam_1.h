#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int WorkNode_PromiseParam_1_TypeDefinitionIndex = 61071;

	template <typename T>
	class WorkNode_PromiseParam_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::IPromise_1<::System::Object*>* Promise; // 0x0
	};
}
