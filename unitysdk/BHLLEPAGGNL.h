#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GotoType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }

#define BHLLEPAGGNL_AHNFFPBKHGO_OFFSET UNITYSDK_OFFSET(0xB48A200)
#define BHLLEPAGGNL_APFIBFBIGMG_OFFSET UNITYSDK_OFFSET(0xB48A450)
#define BHLLEPAGGNL_CKMECGOBMDC_1_OFFSET UNITYSDK_OFFSET(0xB48A360)
#define BHLLEPAGGNL_CKMECGOBMDC_OFFSET UNITYSDK_OFFSET(0xB48A2A0)
#define BHLLEPAGGNL_EONDAJLHHDJ_OFFSET UNITYSDK_OFFSET(0xB48A020)
#define BHLLEPAGGNL_FHMHFKCILOI_OFFSET UNITYSDK_OFFSET(0xB489F80)
#define BHLLEPAGGNL_GBEPLHHEKPO_OFFSET UNITYSDK_OFFSET(0xB48A160)
#define BHLLEPAGGNL_NNJLOEEHJPF_1_OFFSET UNITYSDK_OFFSET(0xB48A690)
#define BHLLEPAGGNL_NNJLOEEHJPF_OFFSET UNITYSDK_OFFSET(0xB48A5D0)
#define BHLLEPAGGNL_OOBEFAFLDAF_OFFSET UNITYSDK_OFFSET(0xB48A0C0)

inline static constexpr unsigned int BHLLEPAGGNL_TypeDefinitionIndex = 59400;

	class BHLLEPAGGNL : public ::System::Object
	{
	public:
		static ::RPG::Client::LuaUIController* FHMHFKCILOI(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::LuaUIController*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_FHMHFKCILOI_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LuaUIController* EONDAJLHHDJ(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::LuaUIController*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_EONDAJLHHDJ_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LuaUIController* OOBEFAFLDAF(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::LuaUIController*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_OOBEFAFLDAF_OFFSET))(a1, a2);
		}

		static ::System::Boolean GBEPLHHEKPO(::System::UInt32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_GBEPLHHEKPO_OFFSET))(a1, a2);
		}

		static ::System::Boolean AHNFFPBKHGO(::RPG::GameCore::GotoType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GotoType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_AHNFFPBKHGO_OFFSET))(a1, a2);
		}

		static ::System::Boolean CKMECGOBMDC(::System::UInt32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_CKMECGOBMDC_OFFSET))(a1, a2);
		}

		static ::System::Boolean CKMECGOBMDC_1(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_CKMECGOBMDC_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean NNJLOEEHJPF(::RPG::GameCore::GotoType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GotoType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_NNJLOEEHJPF_OFFSET))(a1, a2);
		}

		static ::System::Boolean NNJLOEEHJPF_1(::RPG::GameCore::GotoType a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GotoType, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_NNJLOEEHJPF_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* APFIBFBIGMG(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHLLEPAGGNL_APFIBFBIGMG_OFFSET))(a1, a2);
		}

	};
