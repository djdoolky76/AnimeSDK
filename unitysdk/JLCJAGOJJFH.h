#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFCPCNGNEC.h"
#include "unitysdk/OIJLBJIKKNJ.h"
#include "unitysdk/System/Object.h"
class HKHEHEDBIJA;
namespace RPG::GameCore { class ComicDessertLevelComicRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JLCJAGOJJFH_CMDKBLLNMIB_OFFSET UNITYSDK_OFFSET(0xBA618D0)
#define JLCJAGOJJFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA61970)
#define JLCJAGOJJFH_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xBA612E0)
#define JLCJAGOJJFH_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0xBA613F0)
#define JLCJAGOJJFH_PPJNIBFINJO_OFFSET UNITYSDK_OFFSET(0xBA617C0)

inline static constexpr unsigned int JLCJAGOJJFH_TypeDefinitionIndex = 77160;

	class JLCJAGOJJFH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::OIJLBJIKKNJ, ::HKHEHEDBIJA*>* BDBOGJHLEIG; // 0x10
		::System::Collections::Generic::Dictionary_2<::CKFCPCNGNEC, ::HKHEHEDBIJA*>* CLMJNJAAEGA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCJAGOJJFH_CTOR_OFFSET))(this);
		}

		::HKHEHEDBIJA* FLFLCMEJEPM(::OIJLBJIKKNJ a1)
		{
			return ((::HKHEHEDBIJA*(*)(::PVOID, ::OIJLBJIKKNJ))((::PBYTE)hIl2Cpp + JLCJAGOJJFH_FLFLCMEJEPM_OFFSET))(this, a1);
		}

		::HKHEHEDBIJA* PPJNIBFINJO(::CKFCPCNGNEC a1)
		{
			return ((::HKHEHEDBIJA*(*)(::PVOID, ::CKFCPCNGNEC))((::PBYTE)hIl2Cpp + JLCJAGOJJFH_PPJNIBFINJO_OFFSET))(this, a1);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCJAGOJJFH_HHNFFFMBIKD_OFFSET))(this);
		}

		static ::HKHEHEDBIJA* CMDKBLLNMIB(::RPG::GameCore::ComicDessertLevelComicRow* a1)
		{
			return ((::HKHEHEDBIJA*(*)(::RPG::GameCore::ComicDessertLevelComicRow*))((::PBYTE)hIl2Cpp + JLCJAGOJJFH_CMDKBLLNMIB_OFFSET))(a1);
		}

	};
