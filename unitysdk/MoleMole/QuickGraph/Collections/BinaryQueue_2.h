#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2> class EGEFLIAADJB_2;

namespace MoleMole::QuickGraph::Collections
{
	inline static constexpr unsigned int BinaryQueue_2_TypeDefinitionIndex = 28202;

	template <typename T1, typename T2>
	class BinaryQueue_2 : public ::System::Object
	{
	public:
		::System::Func_2<T1, T2>* distances; // 0x0
		::EGEFLIAADJB_2<T2, T1>* heap; // 0x0
	};
}
