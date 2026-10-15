#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JDOFOPKMEFJ;
namespace System { class String; }

#define JDOFOPKMEFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D019B40)
#define JDOFOPKMEFJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D019A00)

inline static constexpr unsigned int JDOFOPKMEFJ_TypeDefinitionIndex = 14172;

	class JDOFOPKMEFJ : public ::System::Object
	{
	public:
		::System::String* BFLIFKBEOPJ; // 0x10
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDOFOPKMEFJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JDOFOPKMEFJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JDOFOPKMEFJ*))((::PBYTE)hIl2Cpp + JDOFOPKMEFJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
