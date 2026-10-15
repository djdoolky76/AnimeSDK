#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
class FGMHNMKDFMA;
class LDICEBCKAPP;
class LNHNKDOIOAG;
namespace RPG::GameCore { class GameEntityList; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IPHPIAKCCDD_BKFENLNGACO_OFFSET UNITYSDK_OFFSET(0x16520F40)
#define IPHPIAKCCDD_CTOR_OFFSET UNITYSDK_OFFSET(0x16520F50)
#define IPHPIAKCCDD_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x16520A60)
#define IPHPIAKCCDD_MJENDEPCPFL_OFFSET UNITYSDK_OFFSET(0x16520BE0)
#define IPHPIAKCCDD_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x16520AE0)
#define IPHPIAKCCDD_OOCPCDLJDBL_OFFSET UNITYSDK_OFFSET(0x16520DD0)

inline static constexpr unsigned int IPHPIAKCCDD_TypeDefinitionIndex = 53723;

	class IPHPIAKCCDD : public ::KIFCLJJAOFJ
	{
	public:
		::LNHNKDOIOAG* MJKMKDGAINA; // 0x20
		::System::Collections::Generic::List_1<::LDICEBCKAPP*>* AGLOMMKDCDN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHPIAKCCDD_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHPIAKCCDD_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHPIAKCCDD_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void MJENDEPCPFL(::RPG::GameCore::GameEntityList* a1, ::FGMHNMKDFMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::FGMHNMKDFMA*))((::PBYTE)hIl2Cpp + IPHPIAKCCDD_MJENDEPCPFL_OFFSET))(this, a1, a2);
		}

		::System::Void OOCPCDLJDBL(::FGMHNMKDFMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGMHNMKDFMA*))((::PBYTE)hIl2Cpp + IPHPIAKCCDD_OOCPCDLJDBL_OFFSET))(this, a1);
		}

		::LNHNKDOIOAG* BKFENLNGACO()
		{
			return ((::LNHNKDOIOAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHPIAKCCDD_BKFENLNGACO_OFFSET))(this);
		}

	};
