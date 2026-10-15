#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define KNOOGHJPPBL___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB58AB20)
#define KNOOGHJPPBL___C__DISPLAYCLASS11_0__ENUMERATESPECIFICPATHAVATARSBYROLE_B__0_OFFSET UNITYSDK_OFFSET(0xB58B540)

inline static constexpr unsigned int KNOOGHJPPBL___c__DisplayClass11_0_TypeDefinitionIndex = 62673;

	class KNOOGHJPPBL___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::DNFDBKCPBNM roleIdentifier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOOGHJPPBL___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _EnumerateSpecificPathAvatarsByRole_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + KNOOGHJPPBL___C__DISPLAYCLASS11_0__ENUMERATESPECIFICPATHAVATARSBYROLE_B__0_OFFSET))(this, a1);
		}

	};
