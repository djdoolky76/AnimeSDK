#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DAFKCJCPINC;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define DAFKCJCPINC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC8410)
#define DAFKCJCPINC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCC8420)
#define DAFKCJCPINC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCC83E0)

inline static constexpr unsigned int DAFKCJCPINC_TypeDefinitionIndex = 21477;

	class DAFKCJCPINC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* GCBNEHBJBPH; // 0x18
		::Il2CppArray<::System::UInt32>* KCFDJIGEJCF; // 0x20
		::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFKCJCPINC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DAFKCJCPINC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DAFKCJCPINC*))((::PBYTE)hIl2Cpp + DAFKCJCPINC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DAFKCJCPINC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DAFKCJCPINC*))((::PBYTE)hIl2Cpp + DAFKCJCPINC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
