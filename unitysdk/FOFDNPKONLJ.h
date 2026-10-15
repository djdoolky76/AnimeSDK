#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FOFDNPKONLJ;
namespace System { class String; }

#define FOFDNPKONLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE4940)
#define FOFDNPKONLJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDE4950)
#define FOFDNPKONLJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE4910)

inline static constexpr unsigned int FOFDNPKONLJ_TypeDefinitionIndex = 22416;

	class FOFDNPKONLJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* KAHBCKFNAFM; // 0x18
		::System::Boolean DMKJAJLNEBK; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single IEHPFADHJFD; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFDNPKONLJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FOFDNPKONLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FOFDNPKONLJ*))((::PBYTE)hIl2Cpp + FOFDNPKONLJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FOFDNPKONLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FOFDNPKONLJ*))((::PBYTE)hIl2Cpp + FOFDNPKONLJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
