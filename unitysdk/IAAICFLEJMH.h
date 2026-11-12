#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore::Match3 { class Match3EnvActionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAAICFLEJMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCAC50)

inline static constexpr unsigned int IAAICFLEJMH_TypeDefinitionIndex = 43212;

	class IAAICFLEJMH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::Match3::Match3EnvActionConfig*>* HKBOLCKKNJE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAICFLEJMH_CTOR_OFFSET))(this);
		}

	};
