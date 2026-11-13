#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
namespace EnviromentSystem { class EnviroGUIHeader; }
namespace EnviromentSystem { class EnviroProperty; }
namespace System { class String; }

#define ENVIROMENTSYSTEM_ENVIROGUIHEADER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16B56460)
#define ENVIROMENTSYSTEM_ENVIROGUIHEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x16B56170)
#define ENVIROMENTSYSTEM_ENVIROGUIHEADER_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x16B564D0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGUIHeader_TypeDefinitionIndex = 50697;

	class EnviroGUIHeader : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIHEADER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroGUIHeader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroGUIHeader*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIHEADER_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIHEADER_PPEGOIODAKI_OFFSET))(this, a1);
		}

	};
}
