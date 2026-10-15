#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNNHKPKCMJD;
class MHKOBCIGDOH;
class PCOMPBCHHKC;
namespace Entitas { template <typename T> class Context_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotPredicateSystem_1_TypeDefinitionIndex = 36922;

	template <typename T>
	class SnapshotPredicateSystem_1 : public ::System::Object
	{
	public:
		::HNNHKPKCMJD* _instance; // 0x0
		::MHKOBCIGDOH* _SnapshotPredicationHistorySystemRef; // 0x0
		::Entitas::Context_1<T>* _context; // 0x0
		::System::Collections::Generic::Queue_1<::PCOMPBCHHKC*>* _PredictionCheckFrameSnapshotQueue; // 0x0
		::System::Action* OnApplyFrameSnapshot; // 0x0
	};
}
