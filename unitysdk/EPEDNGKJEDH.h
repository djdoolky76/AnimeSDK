#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CSVRow; }
namespace System { class String; }
namespace System::IO { class TextWriter; }

#define EPEDNGKJEDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8FF70)
#define EPEDNGKJEDH_KONFKKIOFLH_OFFSET UNITYSDK_OFFSET(0x1CD90280)
#define EPEDNGKJEDH_MCAGHMBABGB_OFFSET UNITYSDK_OFFSET(0x1CD8FFF0)
#define EPEDNGKJEDH_MEGNNLKMBAJ_OFFSET UNITYSDK_OFFSET(0x1CD90270)

inline static constexpr unsigned int EPEDNGKJEDH_TypeDefinitionIndex = 10823;

	class EPEDNGKJEDH : public ::System::Object
	{
	public:
		::RPG::GameCore::CSVRow* NAENFAMAPBD; // 0x10
		::Il2CppArray<::System::String*>* LADKLBIOMNC; // 0x18
		::System::IO::TextWriter* IADACDFOAJC; // 0x20
		::System::Void _ctor(::System::IO::TextWriter* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPEDNGKJEDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MCAGHMBABGB(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPEDNGKJEDH_MCAGHMBABGB_OFFSET))(this, a1);
		}

		::RPG::GameCore::CSVRow* MEGNNLKMBAJ()
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEDNGKJEDH_MEGNNLKMBAJ_OFFSET))(this);
		}

		::System::Void KONFKKIOFLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEDNGKJEDH_KONFKKIOFLH_OFFSET))(this);
		}

	};
