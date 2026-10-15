#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMBPFFMCJDF.h"
#include "unitysdk/System/Object.h"
class BOEEDNCHKMI;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }
namespace System { class String; }

#define FNPDPHDBNDJ_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0x158D0EC0)

inline static constexpr unsigned int FNPDPHDBNDJ_TypeDefinitionIndex = 74838;

	class FNPDPHDBNDJ : public ::System::Object
	{
	public:
		static ::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase* LHLALAKKKKJ(::System::UInt32 a1, ::System::String* a2, ::BOEEDNCHKMI* a3, ::Il2CppArray<::IMBPFFMCJDF>* a4)
		{
			return ((::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*(*)(::System::UInt32, ::System::String*, ::BOEEDNCHKMI*, ::Il2CppArray<::IMBPFFMCJDF>*))((::PBYTE)hIl2Cpp + FNPDPHDBNDJ_LHLALAKKKKJ_OFFSET))(a1, a2, a3, a4);
		}

	};
