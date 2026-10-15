#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class HEKOMMJCPJF;
namespace System { class String; }

#define HEKOMMJCPJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9B500)
#define HEKOMMJCPJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE9B3D0)

inline static constexpr unsigned int HEKOMMJCPJF_TypeDefinitionIndex = 23201;

	class HEKOMMJCPJF : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BFDAADMGNFD; // 0x10
		::System::String* ICEPLFPKAHC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOMMJCPJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HEKOMMJCPJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEKOMMJCPJF*))((::PBYTE)hIl2Cpp + HEKOMMJCPJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
