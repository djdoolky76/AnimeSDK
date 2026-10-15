#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CBFCLHAAJHF_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A1CE0)

	class CBFCLHAAJHF : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* PFALOELOAJP; // 0x10
		::System::String* KBKOGLCAEKG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFCLHAAJHF_CTOR_OFFSET))(this);
		}

	};
