#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCKGNNCJKPH;
namespace InControl { class PlayerAction; }
namespace System { class String; }

#define HCKGNNCJKPH_CTOR_OFFSET UNITYSDK_OFFSET(0x16B639E0)
#define HCKGNNCJKPH_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x16B639F0)
#define HCKGNNCJKPH_MOFNFHFGNNF_1_OFFSET UNITYSDK_OFFSET(0x16B63940)
#define HCKGNNCJKPH_MOFNFHFGNNF_OFFSET UNITYSDK_OFFSET(0x16B638F0)

inline static constexpr unsigned int HCKGNNCJKPH_TypeDefinitionIndex = 70169;

	class HCKGNNCJKPH : public ::System::Object
	{
	public:
		::InControl::PlayerAction* CAFNPBJBOEG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGNNCJKPH_CTOR_OFFSET))(this);
		}

		static ::HCKGNNCJKPH* MOFNFHFGNNF(::System::String* a1)
		{
			return ((::HCKGNNCJKPH*(*)(::System::String*))((::PBYTE)hIl2Cpp + HCKGNNCJKPH_MOFNFHFGNNF_OFFSET))(a1);
		}

		static ::HCKGNNCJKPH* MOFNFHFGNNF_1(::InControl::PlayerAction* a1)
		{
			return ((::HCKGNNCJKPH*(*)(::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + HCKGNNCJKPH_MOFNFHFGNNF_1_OFFSET))(a1);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGNNCJKPH_FFHNOMIDEDE_OFFSET))(this);
		}

	};
