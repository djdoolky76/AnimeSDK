#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLEHLBPAAKM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICEDIJHDAIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C662D80)
#define ICEDIJHDAIA_FGLGLHDAEDE_OFFSET UNITYSDK_OFFSET(0x1C63A330)

inline static constexpr unsigned int ICEDIJHDAIA_TypeDefinitionIndex = 36513;

	class ICEDIJHDAIA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MLEHLBPAAKM*>* KKOHGABGELH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEDIJHDAIA_CTOR_OFFSET))(this);
		}

		::System::Void FGLGLHDAEDE(::MLEHLBPAAKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLEHLBPAAKM*))((::PBYTE)hIl2Cpp + ICEDIJHDAIA_FGLGLHDAEDE_OFFSET))(this, a1);
		}

	};
