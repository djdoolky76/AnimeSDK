#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Throw_1_TypeDefinitionIndex = 45671;

	template <typename T>
	class Throw_1 : public ::System::Object
	{
	public:
		::System::Exception* exception; // 0x0
	};
}
