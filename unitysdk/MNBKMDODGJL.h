#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFLJIEBFMOF;
namespace RPG::Client { class MonoDanmuItem; }

#define MNBKMDODGJL_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E4750)
#define MNBKMDODGJL_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xB9E4600)

	class MNBKMDODGJL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBKMDODGJL_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::RPG::Client::MonoDanmuItem* a1, ::MFLJIEBFMOF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*, ::MFLJIEBFMOF*))((::PBYTE)hIl2Cpp + MNBKMDODGJL_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

	};
