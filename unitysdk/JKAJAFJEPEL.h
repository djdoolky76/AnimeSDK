#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKAJAFJEPEL__CTOR_OFFSET UNITYSDK_OFFSET(0x71FD20)

inline static constexpr unsigned int JKAJAFJEPEL_TypeDefinitionIndex = 48633;

struct alignas(8) JKAJAFJEPEL
{
	::System::Int32 LJMPPBEMEPP; // 0x10
	::System::Int32 GIAOKGFENJD; // 0x14
	::System::String* DFCJFPNCLEO; // 0x18
	::UnityEngine::Vector3 LLIOJLIMCEJ; // 0x20
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* JMDOANHOEJG; // 0x30
	::MoleMole::Config::CampType OLNAFBAENGH; // 0x38
	::System::Boolean PAAPAMNFLPD; // 0x3C
	::System::Byte _padding1[0x3];
	::System::Int32 MDIBMKOAJFO; // 0x40
	::System::Boolean IMGCEMDJFAI; // 0x44
	::System::Byte _padding2[0x3];
	::System::Int32 GNIFKCBCOCB; // 0x48

	::System::Void _ctor(::System::Int32 GIAOKGFENJD, ::System::String* DFCJFPNCLEO, ::UnityEngine::Vector3 LLIOJLIMCEJ, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* JMDOANHOEJG, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::Boolean PAAPAMNFLPD, ::System::Int32 MDIBMKOAJFO, ::System::Boolean IMGCEMDJFAI, ::System::Int32 GNIFKCBCOCB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*, ::MoleMole::Config::CampType, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + JKAJAFJEPEL__CTOR_OFFSET))(this, GIAOKGFENJD, DFCJFPNCLEO, LLIOJLIMCEJ, JMDOANHOEJG, OLNAFBAENGH, PAAPAMNFLPD, MDIBMKOAJFO, IMGCEMDJFAI, GNIFKCBCOCB);
	}
};
