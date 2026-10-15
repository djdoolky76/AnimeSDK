#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HANKGJILHLF;
class MEJCFGPFKII;

#define HANKGJILHLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7FD80)
#define HANKGJILHLF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE7FC30)

inline static constexpr unsigned int HANKGJILHLF_TypeDefinitionIndex = 14402;

	class HANKGJILHLF : public ::System::Object
	{
	public:
		::Il2CppArray<::MEJCFGPFKII*>* MGNHKOHFLPO; // 0x10
		::System::UInt32 CMNOEFFFNPE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANKGJILHLF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HANKGJILHLF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HANKGJILHLF*))((::PBYTE)hIl2Cpp + HANKGJILHLF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
