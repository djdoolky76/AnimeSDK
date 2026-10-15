#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
namespace RPG::Client::Motions { class MonoMontionInspector; }

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MontionInspector_1_TypeDefinitionIndex = 73493;

	template <typename T>
	class MontionInspector_1 : public ::MOGBNBGMIHF
	{
	public:
		T _innerMotion; // 0x0
		::RPG::Client::Motions::MonoMontionInspector* _inspector; // 0x0
	};
}
