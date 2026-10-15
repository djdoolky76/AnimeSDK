#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHFCJKKKNLP;
namespace System { class Action; }

#define OJLEPBKHELL_CTOR_OFFSET UNITYSDK_OFFSET(0xBEBE4D0)
#define OJLEPBKHELL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEBDE90)
#define OJLEPBKHELL_FCDMJDNDEPJ_OFFSET UNITYSDK_OFFSET(0xBEBE0B0)
#define OJLEPBKHELL_GLEMHHPAAJA_OFFSET UNITYSDK_OFFSET(0xBEBDF30)
#define OJLEPBKHELL_MKMKIMGFEEF_OFFSET UNITYSDK_OFFSET(0xBEBDEE0)
#define OJLEPBKHELL_OEKNALJNBHN_OFFSET UNITYSDK_OFFSET(0xBEBDF80)

	class OJLEPBKHELL : public ::System::Object
	{
	public:
		::System::Action* CICBJLKMMEG; // 0x10
		::System::Action* KNNELAOFNMJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLEPBKHELL_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLEPBKHELL_DISPOSE_OFFSET))(this);
		}

		::System::Void MKMKIMGFEEF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OJLEPBKHELL_MKMKIMGFEEF_OFFSET))(this, a1);
		}

		::System::Void GLEMHHPAAJA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OJLEPBKHELL_GLEMHHPAAJA_OFFSET))(this, a1);
		}

		::System::Void OEKNALJNBHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLEPBKHELL_OEKNALJNBHN_OFFSET))(this);
		}

		::System::Void FCDMJDNDEPJ(::FHFCJKKKNLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHFCJKKKNLP*))((::PBYTE)hIl2Cpp + OJLEPBKHELL_FCDMJDNDEPJ_OFFSET))(this, a1);
		}

	};
