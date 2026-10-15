#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define PLIJICJHHDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC307CC0)
#define PLIJICJHHDA_CTOR_2_OFFSET UNITYSDK_OFFSET(0xC307D70)
#define PLIJICJHHDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC307CB0)
#define PLIJICJHHDA_EGBEGBDAALB_OFFSET UNITYSDK_OFFSET(0xC307CA0)
#define PLIJICJHHDA_HBJAPBFKNAB_OFFSET UNITYSDK_OFFSET(0xC307C90)
#define PLIJICJHHDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC307E20)

inline static constexpr unsigned int PLIJICJHHDA_TypeDefinitionIndex = 59631;

	class PLIJICJHHDA : public ::System::Object
	{
	public:
		::System::String* CAJPAGKBBML; // 0x10
		::System::DateTime KBIHLBEECKN; // 0x18
		::System::Int32 EOONMIGPBEF; // 0x20
		::System::Int32 GMDHMGAGAFK; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIJICJHHDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + PLIJICJHHDA_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PLIJICJHHDA_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HBJAPBFKNAB(::RPG::Client::ExeCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + PLIJICJHHDA_HBJAPBFKNAB_OFFSET))(this, a1);
		}

		::RPG::Client::ExeCode EGBEGBDAALB()
		{
			return ((::RPG::Client::ExeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIJICJHHDA_EGBEGBDAALB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIJICJHHDA_TOSTRING_OFFSET))(this);
		}

	};
