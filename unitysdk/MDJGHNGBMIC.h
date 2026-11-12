#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class MDJGHNGBMIC;
namespace System { class String; }

#define MDJGHNGBMIC_CTOR_OFFSET UNITYSDK_OFFSET(0xC15C5F0)
#define MDJGHNGBMIC_DFFCOPKFFJJ_OFFSET UNITYSDK_OFFSET(0xC15C550)
#define MDJGHNGBMIC_KCPNIHNMBGP_OFFSET UNITYSDK_OFFSET(0xC15C600)

inline static constexpr unsigned int MDJGHNGBMIC_TypeDefinitionIndex = 75061;

	class MDJGHNGBMIC : public ::System::Object
	{
	public:
		::System::String* DGENJGJODDD; // 0x10
		::System::String* GFNAPNFFGPJ; // 0x18
		::System::Boolean GNDCCBNILML; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID HODEGKDKNIM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJGHNGBMIC_CTOR_OFFSET))(this);
		}

		static ::MDJGHNGBMIC* DFFCOPKFFJJ(::System::String* a1, ::System::String* a2, ::RPG::Client::TextID a3)
		{
			return ((::MDJGHNGBMIC*(*)(::System::String*, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MDJGHNGBMIC_DFFCOPKFFJJ_OFFSET))(a1, a2, a3);
		}

		static ::MDJGHNGBMIC* KCPNIHNMBGP(::System::String* a1, ::System::String* a2)
		{
			return ((::MDJGHNGBMIC*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MDJGHNGBMIC_KCPNIHNMBGP_OFFSET))(a1, a2);
		}

	};
