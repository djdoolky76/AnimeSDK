#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"
class BKLDKFHBKGE;
class CLFIGBPHLHI;

#define BKLDKFHBKGE_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xC123EB0)
#define BKLDKFHBKGE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC123E70)
#define BKLDKFHBKGE_CLONE_OFFSET UNITYSDK_OFFSET(0xC124090)
#define BKLDKFHBKGE_CTOR_OFFSET UNITYSDK_OFFSET(0xC123FB0)
#define BKLDKFHBKGE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC123FD0)
#define BKLDKFHBKGE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC1240E0)
#define BKLDKFHBKGE_REVERSE_OFFSET UNITYSDK_OFFSET(0xC124040)

inline static constexpr unsigned int BKLDKFHBKGE_TypeDefinitionIndex = 75625;

	class BKLDKFHBKGE : public ::LLJAOGKDNFD
	{
	public:
		::System::Boolean IJBBMNNLFMH; // 0x38
		::System::Boolean NGFNMEBCAIB; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single OPPCPHJGDEF; // 0x3C
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
