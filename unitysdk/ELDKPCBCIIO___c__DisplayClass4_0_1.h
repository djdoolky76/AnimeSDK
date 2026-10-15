#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELDKPCBCIIO;
namespace RPG::Client::FateRin { template <typename T> class PresentResult_1; }
namespace RPG::Client::Promises { class Promise; }

inline static constexpr unsigned int ELDKPCBCIIO___c__DisplayClass4_0_1_TypeDefinitionIndex = 80618;

	template <typename T>
	class ELDKPCBCIIO___c__DisplayClass4_0_1 : public ::System::Object
	{
	public:
		::ELDKPCBCIIO* __4__this; // 0x0
		T viewModel; // 0x0
		::RPG::Client::Promises::Promise* resultPromise; // 0x0
	};
