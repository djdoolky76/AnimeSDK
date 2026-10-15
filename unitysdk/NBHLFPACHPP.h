#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class StageConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define NBHLFPACHPP_BJILKBJKOAP_OFFSET UNITYSDK_OFFSET(0xBAC4010)
#define NBHLFPACHPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBAC4220)
#define NBHLFPACHPP_KDEAEDHAAAE_OFFSET UNITYSDK_OFFSET(0xBAC4160)

inline static constexpr unsigned int NBHLFPACHPP_TypeDefinitionIndex = 69506;

	class NBHLFPACHPP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHLFPACHPP_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::StageConfig* BJILKBJKOAP(::System::String* a1)
		{
			return ((::RPG::GameCore::StageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + NBHLFPACHPP_BJILKBJKOAP_OFFSET))(a1);
		}

		static ::SimpleJSON::JSONNode* KDEAEDHAAAE(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + NBHLFPACHPP_KDEAEDHAAAE_OFFSET))(a1);
		}

	};
