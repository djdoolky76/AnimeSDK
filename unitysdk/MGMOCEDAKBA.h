#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCMKIHKMBCF.h"
#include "unitysdk/System/Object.h"
class JKCBGFHPBJM;
class OADLFAMLGPP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGMOCEDAKBA_CTOR_OFFSET UNITYSDK_OFFSET(0xB922C50)
#define MGMOCEDAKBA_NMICMPPACIH_OFFSET UNITYSDK_OFFSET(0xB922D10)

inline static constexpr unsigned int MGMOCEDAKBA_TypeDefinitionIndex = 62568;

	class MGMOCEDAKBA : public ::System::Object
	{
	public:
		::JKCBGFHPBJM* CEFLLELKFOP; // 0x10
		::System::Collections::Generic::Dictionary_2<::DCMKIHKMBCF, ::OADLFAMLGPP*>* BJHGIDAEOHD; // 0x18
		::System::Void _ctor(::JKCBGFHPBJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKCBGFHPBJM*))((::PBYTE)hIl2Cpp + MGMOCEDAKBA_CTOR_OFFSET))(this, a1);
		}

		::OADLFAMLGPP* NMICMPPACIH(::DCMKIHKMBCF a1)
		{
			return ((::OADLFAMLGPP*(*)(::PVOID, ::DCMKIHKMBCF))((::PBYTE)hIl2Cpp + MGMOCEDAKBA_NMICMPPACIH_OFFSET))(this, a1);
		}

	};
