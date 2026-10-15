#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class JMPLMDKPNDA;
class NGGLPLKJKMM;

#define JMPLMDKPNDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D01F460)
#define JMPLMDKPNDA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D01F350)

inline static constexpr unsigned int JMPLMDKPNDA_TypeDefinitionIndex = 18159;

	class JMPLMDKPNDA : public ::RPG::GameCore::JsonConfig
	{
	public:
		::NGGLPLKJKMM* CIDPKCICEBG; // 0x10
		::NGGLPLKJKMM* PNMCPEEAOMK; // 0x18
		::NGGLPLKJKMM* DPHAELOEHBM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLMDKPNDA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JMPLMDKPNDA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JMPLMDKPNDA*))((::PBYTE)hIl2Cpp + JMPLMDKPNDA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
