#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMNHKCPIGDD.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class FOFFCBGKLDD;
namespace System { class String; }

#define FOFFCBGKLDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA35410)
#define FOFFCBGKLDD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA35140)

inline static constexpr unsigned int FOFFCBGKLDD_TypeDefinitionIndex = 16686;

	class FOFFCBGKLDD : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GOEFKDIGIGA; // 0x10
		::System::String* CIDCEJCGOGB; // 0x18
		::RPG::GameCore::FixPoint CELINBHMLDD; // 0x20
		::MMNHKCPIGDD FKCKKFALPBK; // 0x28
		::System::Int32 DKJFDABPLCO; // 0x2C
		::System::Int32 GKCBEIJONCH; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFFCBGKLDD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FOFFCBGKLDD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FOFFCBGKLDD*))((::PBYTE)hIl2Cpp + FOFFCBGKLDD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
