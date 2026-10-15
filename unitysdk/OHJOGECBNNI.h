#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
class AIFHJBBDKDC;
class DEOOCBMMENB;

#define OHJOGECBNNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5B810)
#define OHJOGECBNNI_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xBE5B150)

inline static constexpr unsigned int OHJOGECBNNI_TypeDefinitionIndex = 62047;

	class OHJOGECBNNI : public ::BFLILCJMKDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJOGECBNNI_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + OHJOGECBNNI_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

	};
