#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define IJEFCGNGHBD_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1644DDC0)
#define IJEFCGNGHBD_BALEKJINMJL_OFFSET UNITYSDK_OFFSET(0x1644DFC0)
#define IJEFCGNGHBD_BLODAGPNJAO_OFFSET UNITYSDK_OFFSET(0x1644E030)
#define IJEFCGNGHBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1644DE80)
#define IJEFCGNGHBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1644DF40)
#define IJEFCGNGHBD_JPNGAJMIAJP_OFFSET UNITYSDK_OFFSET(0x1644DD70)
#define IJEFCGNGHBD_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1644DE20)

inline static constexpr unsigned int IJEFCGNGHBD_TypeDefinitionIndex = 60105;

	class IJEFCGNGHBD : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::System::Action* OnMaybeChanged; // 0x18
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IJEFCGNGHBD_CTOR_OFFSET))(this, a1);
		}

		::System::String* JPNGAJMIAJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEFCGNGHBD_JPNGAJMIAJP_OFFSET))(this);
		}

		::System::Void add_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IJEFCGNGHBD_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IJEFCGNGHBD_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEFCGNGHBD_DISPOSE_OFFSET))(this);
		}

		::System::Void BALEKJINMJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJEFCGNGHBD_BALEKJINMJL_OFFSET))(this, a1);
		}

		::System::Void BLODAGPNJAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJEFCGNGHBD_BLODAGPNJAO_OFFSET))(this, a1);
		}

	};
