#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JPJHKCDGGIK.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KLDGLJNPMHO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOPMMOJPLBK_JGOCJFLBKGI_OFFSET UNITYSDK_OFFSET(0x15DBFB50)
#define HOPMMOJPLBK_MDGNJPIMCPH_1_OFFSET UNITYSDK_OFFSET(0x15DBFF90)
#define HOPMMOJPLBK_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x15DBFD40)

	class HOPMMOJPLBK : public ::System::Object
	{
	public:
		static ::System::String* JGOCJFLBKGI(::KLDGLJNPMHO* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::KLDGLJNPMHO*, ::System::String*))((::PBYTE)hIl2Cpp + HOPMMOJPLBK_JGOCJFLBKGI_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MDGNJPIMCPH(::System::Collections::Generic::List_1<::JPJHKCDGGIK>* a1, ::RPG::GameCore::RtModifierPropertyType a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::JPJHKCDGGIK>*, ::RPG::GameCore::RtModifierPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HOPMMOJPLBK_MDGNJPIMCPH_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 MDGNJPIMCPH_1(::System::Collections::Generic::List_1<::JPJHKCDGGIK>* a1, ::RPG::GameCore::RtModifierPropertyType a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::JPJHKCDGGIK>*, ::RPG::GameCore::RtModifierPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + HOPMMOJPLBK_MDGNJPIMCPH_1_OFFSET))(a1, a2, a3);
		}

	};
