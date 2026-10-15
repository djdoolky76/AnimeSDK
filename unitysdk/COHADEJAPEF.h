#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class BKABEBEPPJK;
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COHADEJAPEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA134B0)
#define COHADEJAPEF_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA13600)

inline static constexpr unsigned int COHADEJAPEF_TypeDefinitionIndex = 43164;

	class COHADEJAPEF : public ::BKABEBEPPJK
	{
	public:
		::System::Collections::Generic::List_1<::BKABEBEPPJK*>* IFMDBDJCCCI; // 0x18
		::System::Void _ctor(::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + COHADEJAPEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COHADEJAPEF_KDNAAOHECPD_OFFSET))(this);
		}

	};
