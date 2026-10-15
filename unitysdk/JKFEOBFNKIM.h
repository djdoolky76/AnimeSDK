#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JKFEOBFNKIM;

#define JKFEOBFNKIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D011890)
#define JKFEOBFNKIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0118A0)
#define JKFEOBFNKIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D011860)

inline static constexpr unsigned int JKFEOBFNKIM_TypeDefinitionIndex = 19948;

	class JKFEOBFNKIM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 AGFMMBCEPAO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFEOBFNKIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JKFEOBFNKIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKFEOBFNKIM*))((::PBYTE)hIl2Cpp + JKFEOBFNKIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JKFEOBFNKIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKFEOBFNKIM*))((::PBYTE)hIl2Cpp + JKFEOBFNKIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
