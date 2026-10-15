#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameTargetMemoryType.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FLNNDOOCHNF_JIHDMDMDPHG_OFFSET UNITYSDK_OFFSET(0x158426A0)

	class FLNNDOOCHNF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Int32>* JIHDMDMDPHG(::IOGNBKGNPFD* a1, ::RPG::GameCore::LittleGameTargetMemoryType a2, ::System::String* a3)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::IOGNBKGNPFD*, ::RPG::GameCore::LittleGameTargetMemoryType, ::System::String*))((::PBYTE)hIl2Cpp + FLNNDOOCHNF_JIHDMDMDPHG_OFFSET))(a1, a2, a3);
		}

	};
