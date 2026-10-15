#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudGraphicsSettingType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMCIALDOECA_CTOR_OFFSET UNITYSDK_OFFSET(0xB536A40)
#define KMCIALDOECA_PDAKILNLHNA_OFFSET UNITYSDK_OFFSET(0xB536350)

inline static constexpr unsigned int KMCIALDOECA_TypeDefinitionIndex = 59830;

	class KMCIALDOECA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudGraphicsSettingType, ::System::Object*>* PDAKILNLHNA()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudGraphicsSettingType, ::System::Object*>*(*)())((::PBYTE)hIl2Cpp + KMCIALDOECA_PDAKILNLHNA_OFFSET))();
		}

	};
