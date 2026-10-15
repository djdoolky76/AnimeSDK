#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FEJDJEHOJIK;

#define FEJDJEHOJIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE1F80)
#define FEJDJEHOJIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE1E60)

inline static constexpr unsigned int FEJDJEHOJIK_TypeDefinitionIndex = 12879;

	class FEJDJEHOJIK : public ::System::Object
	{
	public:
		::System::UInt32 ACCJKGEKHKP; // 0x10
		::System::UInt32 DLOOMDHHNGC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJDJEHOJIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FEJDJEHOJIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FEJDJEHOJIK*))((::PBYTE)hIl2Cpp + FEJDJEHOJIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
