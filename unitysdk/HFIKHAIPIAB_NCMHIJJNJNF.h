#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFIKHAIPIAB_NCMHIJJNJNF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C70210)
#define HFIKHAIPIAB_NCMHIJJNJNF_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C70220)

inline static constexpr unsigned int HFIKHAIPIAB_NCMHIJJNJNF_TypeDefinitionIndex = 65538;

	class HFIKHAIPIAB_NCMHIJJNJNF : public ::System::Object
	{
	public:
		::System::UInt32 PDCMDACNCCN; // 0x10
		::System::UInt32 PELEBCHEOFK; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_NCMHIJJNJNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_NCMHIJJNJNF_HKKFFCBJOKM_OFFSET))(this);
		}

	};
