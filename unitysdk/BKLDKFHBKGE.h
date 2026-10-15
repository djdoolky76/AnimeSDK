#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"
class BKLDKFHBKGE;
class CLFIGBPHLHI;

#define BKLDKFHBKGE_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xBA57370)
#define BKLDKFHBKGE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA57330)
#define BKLDKFHBKGE_CLONE_OFFSET UNITYSDK_OFFSET(0xBA57550)
#define BKLDKFHBKGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA57470)
#define BKLDKFHBKGE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA57490)
#define BKLDKFHBKGE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA575A0)
#define BKLDKFHBKGE_REVERSE_OFFSET UNITYSDK_OFFSET(0xBA57500)

inline static constexpr unsigned int BKLDKFHBKGE_TypeDefinitionIndex = 73501;

	class BKLDKFHBKGE : public ::LLJAOGKDNFD
	{
	public:
		::System::Single OPPCPHJGDEF; // 0x38
		::System::Boolean IJBBMNNLFMH; // 0x3C
		::System::Boolean NGFNMEBCAIB; // 0x3D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLDKFHBKGE_CTOR_OFFSET))(this);
		}

		static ::BKLDKFHBKGE* BPLPBPMEODA()
		{
			return ((::BKLDKFHBKGE*(*)())((::PBYTE)hIl2Cpp + BKLDKFHBKGE_BPLPBPMEODA_OFFSET))();
		}

		static ::BKLDKFHBKGE* BPLPBPMEODA_1(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::BKLDKFHBKGE*(*)(::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BKLDKFHBKGE_BPLPBPMEODA_1_OFFSET))(a1, a2, a3);
		}

		::System::Boolean KPJGDHLENIP(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BKLDKFHBKGE_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLDKFHBKGE_REVERSE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLDKFHBKGE_CLONE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKLDKFHBKGE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
