#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NMHEPKCFAFH;
namespace System { class String; }

#define NMHEPKCFAFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D209D30)
#define NMHEPKCFAFH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D209BE0)

inline static constexpr unsigned int NMHEPKCFAFH_TypeDefinitionIndex = 11689;

	class NMHEPKCFAFH : public ::System::Object
	{
	public:
		::System::String* BFLIFKBEOPJ; // 0x10
		::System::Int16 MNDFOPKBHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEPKCFAFH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMHEPKCFAFH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMHEPKCFAFH*))((::PBYTE)hIl2Cpp + NMHEPKCFAFH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
