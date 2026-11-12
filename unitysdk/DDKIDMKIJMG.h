#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGHBKHHINFP;
namespace RPG::GameCore { class ConfigTrainDispatcher; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DDKIDMKIJMG_ACDGPABGIFE_OFFSET UNITYSDK_OFFSET(0xEE29C20)
#define DDKIDMKIJMG_AJDCANKOGBK_OFFSET UNITYSDK_OFFSET(0xEE29BD0)
#define DDKIDMKIJMG_CTOR_OFFSET UNITYSDK_OFFSET(0xEE2A560)
#define DDKIDMKIJMG_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xEE29F20)
#define DDKIDMKIJMG_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xEE2A400)
#define DDKIDMKIJMG_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xEE2A4B0)
#define DDKIDMKIJMG_MBAEJHBGACF_OFFSET UNITYSDK_OFFSET(0xEE2A040)
#define DDKIDMKIJMG_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xEE29D60)

inline static constexpr unsigned int DDKIDMKIJMG_TypeDefinitionIndex = 71114;

	class DDKIDMKIJMG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FGHBKHHINFP*>* PGMOEJGBLLG; // 0x10
		::RPG::GameCore::ConfigTrainDispatcher* EJJEEJENLDA; // 0x18
		::System::Collections::Generic::List_1<::FGHBKHHINFP*>* JHLBFPBGGIN; // 0x20
		::System::Int32 ILIHFKCDBDH; // 0x28
		::System::Boolean AAECOAAJBFE; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKIDMKIJMG_CTOR_OFFSET))(this);
		}

		::System::Boolean AJDCANKOGBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKIDMKIJMG_AJDCANKOGBK_OFFSET))(this);
		}

		::System::Void ACDGPABGIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKIDMKIJMG_ACDGPABGIFE_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDKIDMKIJMG_OHMHJFANEIF_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDKIDMKIJMG_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void MBAEJHBGACF(::RPG::GameCore::ConfigTrainDispatcher* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigTrainDispatcher*))((::PBYTE)hIl2Cpp + DDKIDMKIJMG_MBAEJHBGACF_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKIDMKIJMG_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKIDMKIJMG_KGJAMKFPOAB_OFFSET))(this);
		}

	};
