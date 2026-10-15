#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFPAFGCOKHK.h"

#define KFBGEBCPMAM_CTOR_OFFSET UNITYSDK_OFFSET(0xB3886E0)
#define KFBGEBCPMAM_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB3883F0)
#define KFBGEBCPMAM_KKGNDNGNIDI_OFFSET UNITYSDK_OFFSET(0xB388610)

inline static constexpr unsigned int KFBGEBCPMAM_TypeDefinitionIndex = 74201;

	class KFBGEBCPMAM : public ::FFPAFGCOKHK
	{
	public:
		::Il2CppArray<::System::UInt32>* OGCNKINAKEF; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBGEBCPMAM_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBGEBCPMAM_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void KKGNDNGNIDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBGEBCPMAM_KKGNDNGNIDI_OFFSET))(this, a1);
		}

	};
