#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define ALEPDLNOEHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15566380)
#define ALEPDLNOEHE_CTOR_2_OFFSET UNITYSDK_OFFSET(0x155663E0)
#define ALEPDLNOEHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15566330)
#define ALEPDLNOEHE_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0x15566520)
#define ALEPDLNOEHE__RESOLVE_OFFSET UNITYSDK_OFFSET(0x15566400)

	class ALEPDLNOEHE
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ALEPDLNOEHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALEPDLNOEHE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::GameCore::VCameraConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + ALEPDLNOEHE_CTOR_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::VCameraConfig* _Resolve()
		{
			return ((::RPG::GameCore::VCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEPDLNOEHE__RESOLVE_OFFSET))(this);
		}

		::System::Void UnResolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEPDLNOEHE_UNRESOLVE_OFFSET))(this);
		}

	};
