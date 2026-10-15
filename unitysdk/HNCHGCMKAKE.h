#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HNCHGCMKAKE;

#define HNCHGCMKAKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9CC70)
#define HNCHGCMKAKE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE9CAF0)

inline static constexpr unsigned int HNCHGCMKAKE_TypeDefinitionIndex = 12703;

	class HNCHGCMKAKE : public ::System::Object
	{
	public:
		::System::UInt32 ACCJKGEKHKP; // 0x10
		::System::UInt32 ADGKGGIBBEC; // 0x14
		::System::UInt32 ELDCAFJBIPN; // 0x18
		::System::UInt32 JJKLIJNFIBB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCHGCMKAKE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HNCHGCMKAKE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNCHGCMKAKE*))((::PBYTE)hIl2Cpp + HNCHGCMKAKE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
