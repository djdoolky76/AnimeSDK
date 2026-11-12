#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FormationData; }
namespace System { class String; }

#define HBBDMIIALAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16B27E50)
#define HBBDMIIALAI_CTOR_2_OFFSET UNITYSDK_OFFSET(0x16B27EB0)
#define HBBDMIIALAI_CTOR_OFFSET UNITYSDK_OFFSET(0x16B27E00)
#define HBBDMIIALAI_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0x16B27FF0)
#define HBBDMIIALAI__RESOLVE_OFFSET UNITYSDK_OFFSET(0x16B27ED0)

inline static constexpr unsigned int HBBDMIIALAI_TypeDefinitionIndex = 57744;

	class HBBDMIIALAI
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HBBDMIIALAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HBBDMIIALAI_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::GameCore::FormationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FormationData*))((::PBYTE)hIl2Cpp + HBBDMIIALAI_CTOR_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::FormationData* _Resolve()
		{
			return ((::RPG::GameCore::FormationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBDMIIALAI__RESOLVE_OFFSET))(this);
		}

		::System::Void UnResolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBDMIIALAI_UNRESOLVE_OFFSET))(this);
		}

	};
