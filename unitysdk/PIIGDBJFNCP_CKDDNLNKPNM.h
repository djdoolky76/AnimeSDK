#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIIGDBJFNCP_CKDDNLNKPNM_CTOR_OFFSET UNITYSDK_OFFSET(0xC261300)

inline static constexpr unsigned int PIIGDBJFNCP_CKDDNLNKPNM_TypeDefinitionIndex = 55961;

	class PIIGDBJFNCP_CKDDNLNKPNM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* LGEMLFLOBKL; // 0x10
		::System::UInt32 HFLPDCJDIAC; // 0x18
		::System::UInt32 DOBKKDIECDO; // 0x1C
		::RPG::GameCore::FixPoint LIDEOEDABPL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_CKDDNLNKPNM_CTOR_OFFSET))(this);
		}

	};
