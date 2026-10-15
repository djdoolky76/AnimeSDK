#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class KMOOMLFMMEC;
namespace System { class String; }

#define KMOOMLFMMEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D087950)
#define KMOOMLFMMEC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D087860)

inline static constexpr unsigned int KMOOMLFMMEC_TypeDefinitionIndex = 21557;

	class KMOOMLFMMEC : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* AJPGMJGOICE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOOMLFMMEC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KMOOMLFMMEC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KMOOMLFMMEC*))((::PBYTE)hIl2Cpp + KMOOMLFMMEC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
