#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NDDDCIEFCNJ;
namespace System { class String; }

#define NDDDCIEFCNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C9E50)
#define NDDDCIEFCNJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1C9BF0)

inline static constexpr unsigned int NDDDCIEFCNJ_TypeDefinitionIndex = 14438;

	class NDDDCIEFCNJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BMCKCHLJFIE; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::System::String* KILFKBDMJGI; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OENAMINOLLF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDCIEFCNJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NDDDCIEFCNJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NDDDCIEFCNJ*))((::PBYTE)hIl2Cpp + NDDDCIEFCNJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
