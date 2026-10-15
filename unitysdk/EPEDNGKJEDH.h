#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CSVRow; }
namespace System { class String; }
namespace System::IO { class TextWriter; }

#define EPEDNGKJEDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBDFB0)
#define EPEDNGKJEDH_KONFKKIOFLH_OFFSET UNITYSDK_OFFSET(0x1CDBE2C0)
#define EPEDNGKJEDH_MCAGHMBABGB_OFFSET UNITYSDK_OFFSET(0x1CDBE030)
#define EPEDNGKJEDH_MEGNNLKMBAJ_OFFSET UNITYSDK_OFFSET(0x1CDBE2B0)

	class EPEDNGKJEDH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* LADKLBIOMNC; // 0x10
		::System::IO::TextWriter* IADACDFOAJC; // 0x18
		::RPG::GameCore::CSVRow* NAENFAMAPBD; // 0x20
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
