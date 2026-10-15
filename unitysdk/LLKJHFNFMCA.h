#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDNJKAMIHHI.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LLKJHFNFMCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB774260)

	class LLKJHFNFMCA : public ::System::Object
	{
	public:
		::System::String* EINFJLDMHOA; // 0x10
		::DDNJKAMIHHI GMPGDEINODK; // 0x18
		::RPG::GameCore::PropState MEPFOEEGBEA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKJHFNFMCA_CTOR_OFFSET))(this);
		}

	};
