#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarArchiveEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCACAFAEGGP_IOOABOOLJAM_OFFSET UNITYSDK_OFFSET(0xBFF19C0)
#define PCACAFAEGGP_JGKHKBDLHLP_OFFSET UNITYSDK_OFFSET(0xBFF1C10)
#define PCACAFAEGGP_NBEDONAJEOP_OFFSET UNITYSDK_OFFSET(0xBFF1D10)
#define PCACAFAEGGP_NMMENJBPAMO_OFFSET UNITYSDK_OFFSET(0xBFF1810)
#define PCACAFAEGGP_NNGCPBFBFPG_OFFSET UNITYSDK_OFFSET(0xBFF2270)

inline static constexpr unsigned int PCACAFAEGGP_TypeDefinitionIndex = 62417;

	class PCACAFAEGGP : public ::System::Object
	{
	public:
		static ::System::Void NMMENJBPAMO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PCACAFAEGGP_NMMENJBPAMO_OFFSET))(a1, a2);
		}

		static ::System::Void IOOABOOLJAM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PCACAFAEGGP_IOOABOOLJAM_OFFSET))(a1, a2);
		}

		static ::System::Boolean JGKHKBDLHLP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PCACAFAEGGP_JGKHKBDLHLP_OFFSET))(a1, a2);
		}

		static ::System::String* NBEDONAJEOP(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PCACAFAEGGP_NBEDONAJEOP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>* NNGCPBFBFPG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>*(*)())((::PBYTE)hIl2Cpp + PCACAFAEGGP_NNGCPBFBFPG_OFFSET))();
		}

	};
