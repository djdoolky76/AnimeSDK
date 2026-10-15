#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class EPOFOGGGMEH;
class FCOEMCEDLNL;
namespace System { class String; }

#define EPOFOGGGMEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD93410)
#define EPOFOGGGMEH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD93170)

inline static constexpr unsigned int EPOFOGGGMEH_TypeDefinitionIndex = 11251;

	class EPOFOGGGMEH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* NJJEIJGIENP; // 0x10
		::Il2CppArray<::System::UInt32>* PBLPLDJKPEI; // 0x18
		::Il2CppArray<::System::UInt32>* PGAMJHMNLLN; // 0x20
		::System::String* PMKEDGGOLKD; // 0x28
		::RPG::Client::TextID NMAHGFAPENI; // 0x30
		::System::UInt32 CDNGHDNMMAG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOFOGGGMEH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EPOFOGGGMEH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPOFOGGGMEH*))((::PBYTE)hIl2Cpp + EPOFOGGGMEH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
