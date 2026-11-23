#pragma once
#include "unitysdk/unitysdk.h"

namespace B40A70FA46516148
{
	inline static constexpr unsigned int F7B752EC1C663900_TypeDefinitionIndex = 19340;

	enum class F7B752EC1C663900 : ::System::Int32
	{
		Zero = 0,
		Tls10Client = 128,
		Tls10Server = 64,
		Tls10 = 192,
		Tls11Client = 512,
		Tls11Server = 256,
		Tls11 = 768,
		Tls12Client = 2048,
		Tls12Server = 1024,
		Tls12 = 3072,
		ClientMask = 2688,
		ServerMask = 1344,
	};
}
