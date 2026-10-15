#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDNJKAMIHHI.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LLKJHFNFMCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB76D180)

inline static constexpr unsigned int LLKJHFNFMCA_TypeDefinitionIndex = 68009;

	class LLKJHFNFMCA : public ::System::Object
	{
	public:
		::System::String* EINFJLDMHOA; // 0x10
		::RPG::GameCore::PropState MEPFOEEGBEA; // 0x18
		::DDNJKAMIHHI GMPGDEINODK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKJHFNFMCA_CTOR_OFFSET))(this);
		}

	};
