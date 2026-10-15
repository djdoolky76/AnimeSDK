#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class DBGGPBEKFNL;
class FCOEMCEDLNL;
namespace System { class String; }

#define DBGGPBEKFNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCFB10)
#define DBGGPBEKFNL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCCF890)

inline static constexpr unsigned int DBGGPBEKFNL_TypeDefinitionIndex = 21454;

	class DBGGPBEKFNL : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BAHLDFMIJFG; // 0x10
		::System::Boolean CEFGAPLELBN; // 0x18
		::System::Boolean PAHCFELAJPB; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::MVector3 JBIKFECEIIJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGGPBEKFNL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DBGGPBEKFNL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBGGPBEKFNL*))((::PBYTE)hIl2Cpp + DBGGPBEKFNL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
