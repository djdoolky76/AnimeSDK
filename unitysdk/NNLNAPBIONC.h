#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NNLNAPBIONC;
namespace System { class String; }

#define NNLNAPBIONC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76AA40)
#define NNLNAPBIONC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E76AA50)
#define NNLNAPBIONC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E76AA10)

inline static constexpr unsigned int NNLNAPBIONC_TypeDefinitionIndex = 21903;

	class NNLNAPBIONC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* IOFABLBLODL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLNAPBIONC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NNLNAPBIONC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NNLNAPBIONC*))((::PBYTE)hIl2Cpp + NNLNAPBIONC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NNLNAPBIONC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NNLNAPBIONC*))((::PBYTE)hIl2Cpp + NNLNAPBIONC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
