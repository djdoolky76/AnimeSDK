#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCMKIHKMBCF.h"
#include "unitysdk/System/Object.h"
class JKCBGFHPBJM;
class OADLFAMLGPP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGMOCEDAKBA_CTOR_OFFSET UNITYSDK_OFFSET(0xC1DC510)
#define MGMOCEDAKBA_NMICMPPACIH_OFFSET UNITYSDK_OFFSET(0xC1DC5D0)

inline static constexpr unsigned int MGMOCEDAKBA_TypeDefinitionIndex = 63981;

	class MGMOCEDAKBA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::DCMKIHKMBCF, ::OADLFAMLGPP*>* BJHGIDAEOHD; // 0x10
		::JKCBGFHPBJM* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::JKCBGFHPBJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKCBGFHPBJM*))((::PBYTE)hIl2Cpp + MGMOCEDAKBA_CTOR_OFFSET))(this, a1);
		}

		::OADLFAMLGPP* NMICMPPACIH(::DCMKIHKMBCF a1, ::System::UInt32 a2)
		{
			return ((::OADLFAMLGPP*(*)(::PVOID, ::DCMKIHKMBCF, ::System::UInt32))((::PBYTE)hIl2Cpp + MGMOCEDAKBA_NMICMPPACIH_OFFSET))(this, a1, a2);
		}

	};
