#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJOILEBHAFJ_GJCFNGNKFMG_OFFSET UNITYSDK_OFFSET(0xB7AA560)
#define BJOILEBHAFJ_KFCEIGKPKBP_OFFSET UNITYSDK_OFFSET(0xB7AA930)

inline static constexpr unsigned int BJOILEBHAFJ_TypeDefinitionIndex = 59683;

	class BJOILEBHAFJ : public ::System::Object
	{
	public:
		// static const ::System::String* FPLNHPOCLCE; // 0x0
		// static const ::System::String* HNGGEJAAKGD; // 0x0
		static ::System::Collections::Generic::List_1<::System::String*>* GJCFNGNKFMG()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + BJOILEBHAFJ_GJCFNGNKFMG_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::String*>* KFCEIGKPKBP()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + BJOILEBHAFJ_KFCEIGKPKBP_OFFSET))();
		}

	};
