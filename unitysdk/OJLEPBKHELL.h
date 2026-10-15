#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHFCJKKKNLP;
namespace System { class Action; }

#define OJLEPBKHELL_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB7020)
#define OJLEPBKHELL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEB69E0)
#define OJLEPBKHELL_FCDMJDNDEPJ_OFFSET UNITYSDK_OFFSET(0xBEB6C00)
#define OJLEPBKHELL_GLEMHHPAAJA_OFFSET UNITYSDK_OFFSET(0xBEB6A80)
#define OJLEPBKHELL_MKMKIMGFEEF_OFFSET UNITYSDK_OFFSET(0xBEB6A30)
#define OJLEPBKHELL_OEKNALJNBHN_OFFSET UNITYSDK_OFFSET(0xBEB6AD0)

inline static constexpr unsigned int OJLEPBKHELL_TypeDefinitionIndex = 75283;

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
