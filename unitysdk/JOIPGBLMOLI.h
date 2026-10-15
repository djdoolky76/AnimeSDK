#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class ChenLingSkillRow; }
namespace System { class String; }

#define JOIPGBLMOLI_AKDMKAJEMHO_OFFSET UNITYSDK_OFFSET(0xB29A440)
#define JOIPGBLMOLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB29A300)
#define JOIPGBLMOLI_GET_ID_OFFSET UNITYSDK_OFFSET(0xB29A320)
#define JOIPGBLMOLI_LICBMPFDECL_OFFSET UNITYSDK_OFFSET(0xB29A3A0)
#define JOIPGBLMOLI_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xB29A340)
#define JOIPGBLMOLI_SET_ID_OFFSET UNITYSDK_OFFSET(0xB29A330)

inline static constexpr unsigned int JOIPGBLMOLI_TypeDefinitionIndex = 61449;

	class JOIPGBLMOLI : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::ChenLingSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingSkillRow*))((::PBYTE)hIl2Cpp + JOIPGBLMOLI_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIPGBLMOLI_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOIPGBLMOLI_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingSkillRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::ChenLingSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIPGBLMOLI_PDAENODHFCM_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* LICBMPFDECL()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIPGBLMOLI_LICBMPFDECL_OFFSET))(this);
		}

		::System::String* AKDMKAJEMHO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIPGBLMOLI_AKDMKAJEMHO_OFFSET))(this);
		}

	};
