#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
#include "unitysdk/System/Object.h"
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define MMDJEHCBONC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53AB50)
#define MMDJEHCBONC_EOIADNMGMON_OFFSET UNITYSDK_OFFSET(0x1C53AB20)
#define MMDJEHCBONC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C53A630)
#define MMDJEHCBONC_KHIJIGMGGOP_OFFSET UNITYSDK_OFFSET(0x1C53AAC0)
#define MMDJEHCBONC_MPJBJLDPBBN_OFFSET UNITYSDK_OFFSET(0x1C53AAF0)
#define MMDJEHCBONC_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C53A970)
#define MMDJEHCBONC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C53A840)

inline static constexpr unsigned int MMDJEHCBONC_TypeDefinitionIndex = 41608;

	class MMDJEHCBONC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMDJEHCBONC_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + MMDJEHCBONC_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::String* KHIJIGMGGOP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_KHIJIGMGGOP_OFFSET))(this);
		}

		::RPG::Client::CompilerFramework::DiagnosticSeverity MPJBJLDPBBN()
		{
			return ((::RPG::Client::CompilerFramework::DiagnosticSeverity(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_MPJBJLDPBBN_OFFSET))(this);
		}

		::System::Boolean EOIADNMGMON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_EOIADNMGMON_OFFSET))(this);
		}

	};
