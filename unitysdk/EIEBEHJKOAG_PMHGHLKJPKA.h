#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define EIEBEHJKOAG_PMHGHLKJPKA_ACEFBGLDOPG_OFFSET UNITYSDK_OFFSET(0x154B3E60)
#define EIEBEHJKOAG_PMHGHLKJPKA_AJOPEKGIJFO_OFFSET UNITYSDK_OFFSET(0x154B4C50)
#define EIEBEHJKOAG_PMHGHLKJPKA_CTOR_OFFSET UNITYSDK_OFFSET(0x154B3C30)
#define EIEBEHJKOAG_PMHGHLKJPKA_DBMPNDHOEDJ_OFFSET UNITYSDK_OFFSET(0x154B4EF0)
#define EIEBEHJKOAG_PMHGHLKJPKA_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x154B3D30)
#define EIEBEHJKOAG_PMHGHLKJPKA_PHGGCKNBFLI_OFFSET UNITYSDK_OFFSET(0x154B4CC0)

inline static constexpr unsigned int EIEBEHJKOAG_PMHGHLKJPKA_TypeDefinitionIndex = 47406;

	class EIEBEHJKOAG_PMHGHLKJPKA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* JBJOFIEPOFG; // 0x10
		::System::String* BKCDBPJJNMF; // 0x18
		// static const ::System::String* KHKNHCNCMEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_PMHGHLKJPKA_CTOR_OFFSET))(this);
		}

		::System::String* AJOPEKGIJFO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_PMHGHLKJPKA_AJOPEKGIJFO_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_PMHGHLKJPKA_EGFCFCBHJJP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACEFBGLDOPG(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_PMHGHLKJPKA_ACEFBGLDOPG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DBMPNDHOEDJ(::System::IO::StreamWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_PMHGHLKJPKA_DBMPNDHOEDJ_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* PHGGCKNBFLI()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEBEHJKOAG_PMHGHLKJPKA_PHGGCKNBFLI_OFFSET))(this);
		}

	};
