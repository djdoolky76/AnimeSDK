#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExOutputAnalyzer.h"
namespace System { class Object; }

#define CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER_CTOR_OFFSET UNITYSDK_OFFSET(0x166FEA30)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayerOutputAnalyzer_TypeDefinitionIndex = 40061;

	class CriAtomExPlayerOutputAnalyzer : public ::CriWare::CriAtomExOutputAnalyzer
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::Object*>* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
