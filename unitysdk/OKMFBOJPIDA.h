#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CSVRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKMFBOJPIDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D294320)
#define OKMFBOJPIDA_MEGNNLKMBAJ_OFFSET UNITYSDK_OFFSET(0x1D294380)
#define OKMFBOJPIDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D294460)

inline static constexpr unsigned int OKMFBOJPIDA_TypeDefinitionIndex = 10822;

	class OKMFBOJPIDA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* LADKLBIOMNC; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::CSVRow*>* KKOHGABGELH; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + OKMFBOJPIDA_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::CSVRow* MEGNNLKMBAJ()
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMFBOJPIDA_MEGNNLKMBAJ_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMFBOJPIDA_TOSTRING_OFFSET))(this);
		}

	};
