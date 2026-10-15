#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKNOHEHLKMB;
class FCOEMCEDLNL;

#define AKNOHEHLKMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA8520)
#define AKNOHEHLKMB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCA8340)

inline static constexpr unsigned int AKNOHEHLKMB_TypeDefinitionIndex = 15334;

	class AKNOHEHLKMB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LDCJONHGDAN; // 0x10
		::Il2CppArray<::System::UInt32>* PBLPLDJKPEI; // 0x18
		::System::UInt32 OFLMIGOHDDF; // 0x20
		::System::UInt32 BOKJJKFCFME; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNOHEHLKMB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AKNOHEHLKMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKNOHEHLKMB*))((::PBYTE)hIl2Cpp + AKNOHEHLKMB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
