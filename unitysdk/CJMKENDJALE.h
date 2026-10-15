#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KGHMBCLFFLG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CJMKENDJALE_DELMBDMKBJK_OFFSET UNITYSDK_OFFSET(0xD4D2DB0)
#define CJMKENDJALE_DFACNDFPDHK_OFFSET UNITYSDK_OFFSET(0xD4D25C0)
#define CJMKENDJALE_EFKEHEAMAKI_OFFSET UNITYSDK_OFFSET(0xD4D26C0)

inline static constexpr unsigned int CJMKENDJALE_TypeDefinitionIndex = 62651;

	class CJMKENDJALE : public ::System::Object
	{
	public:
		static ::System::Void DFACNDFPDHK(::System::Collections::Generic::IEnumerable_1<::KGHMBCLFFLG*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::KGHMBCLFFLG*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CJMKENDJALE_DFACNDFPDHK_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EFKEHEAMAKI(::System::Collections::Generic::IEnumerable_1<::KGHMBCLFFLG*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::Collections::Generic::IEnumerable_1<::KGHMBCLFFLG*>*))((::PBYTE)hIl2Cpp + CJMKENDJALE_EFKEHEAMAKI_OFFSET))(a1);
		}

		static ::System::Void DELMBDMKBJK(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CJMKENDJALE_DELMBDMKBJK_OFFSET))(a1, a2, a3);
		}

	};
