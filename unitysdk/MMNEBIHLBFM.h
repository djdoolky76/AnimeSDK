#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGLCNFPHNEA;
namespace RPG::Client::DepletablePool { class DepletablePool; }

#define MMNEBIHLBFM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC296C50)
#define MMNEBIHLBFM_CTOR_OFFSET UNITYSDK_OFFSET(0xC297140)

inline static constexpr unsigned int MMNEBIHLBFM_TypeDefinitionIndex = 76977;

	class MMNEBIHLBFM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNEBIHLBFM_CTOR_OFFSET))(this);
		}

		::RPG::Client::DepletablePool::DepletablePool* BPLPBPMEODA(::JGLCNFPHNEA* a1)
		{
			return ((::RPG::Client::DepletablePool::DepletablePool*(*)(::PVOID, ::JGLCNFPHNEA*))((::PBYTE)hIl2Cpp + MMNEBIHLBFM_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
