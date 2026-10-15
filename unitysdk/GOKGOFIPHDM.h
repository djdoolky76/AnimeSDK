#pragma once
#include "unitysdk/unitysdk.h"
class FFHMNHPIJNH;
namespace RPG::GameCore { class TaskContext; }

#define GOKGOFIPHDM_ADLMFDCIJAJ_OFFSET UNITYSDK_OFFSET(0x15B39510)
#define GOKGOFIPHDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B39200)
#define GOKGOFIPHDM_GEAIBGBGFDF_OFFSET UNITYSDK_OFFSET(0x15B392A0)
#define GOKGOFIPHDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B39230)

inline static constexpr unsigned int GOKGOFIPHDM_TypeDefinitionIndex = 55605;

	class GOKGOFIPHDM
	{
	public:
		// static const ::System::String* NMHCPDICPCO; // 0x0
		// static const ::System::String* JEPINIMBKHI; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FFHMNHPIJNH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FFHMNHPIJNH*))((::PBYTE)hIl2Cpp + GOKGOFIPHDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKGOFIPHDM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GEAIBGBGFDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKGOFIPHDM_GEAIBGBGFDF_OFFSET))(this);
		}

		::System::Void ADLMFDCIJAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKGOFIPHDM_ADLMFDCIJAJ_OFFSET))(this);
		}

	};
