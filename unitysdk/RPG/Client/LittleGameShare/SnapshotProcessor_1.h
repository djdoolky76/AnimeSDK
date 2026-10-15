#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
class HNNHKPKCMJD;
namespace Entitas { template <typename T> class Context_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotProcessor_1_TypeDefinitionIndex = 36928;

	template <typename T>
	class SnapshotProcessor_1 : public ::System::Object
	{
	public:
		::HNNHKPKCMJD* _instance; // 0x0
		::Entitas::Context_1<T>* _context; // 0x0
		::Il2CppArray<::System::RuntimeTypeHandle>* _ComponentTypes; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
	};
}
