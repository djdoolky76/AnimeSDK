#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACHNEAMCCEC;
class BICOIIAPJKC;
class CEEGMMCFCBG;
class FKLECLLJCEH;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DDJAAKLBKAG_CTOR_OFFSET UNITYSDK_OFFSET(0xE4DE690)
#define DDJAAKLBKAG_GET_ATTRIBUTE1_OFFSET UNITYSDK_OFFSET(0xE4DE630)
#define DDJAAKLBKAG_GET_ATTRIBUTE2_OFFSET UNITYSDK_OFFSET(0xE4DE650)
#define DDJAAKLBKAG_GET_EXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xE4DE680)
#define DDJAAKLBKAG_GET_HASANYTRAIT_OFFSET UNITYSDK_OFFSET(0xE4DE660)
#define DDJAAKLBKAG_GET_HASATLEASTONEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xE4DE620)
#define DDJAAKLBKAG_GET_HASATLEASTTWOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xE4DE640)
#define DDJAAKLBKAG_GET_TRAITSTEXT_OFFSET UNITYSDK_OFFSET(0xE4DE670)
#define DDJAAKLBKAG_HLNPCKOBGBA_OFFSET UNITYSDK_OFFSET(0xE4DEFA0)

inline static constexpr unsigned int DDJAAKLBKAG_TypeDefinitionIndex = 79594;

	class DDJAAKLBKAG : public ::System::Object
	{
	public:
		::R3::Observable_1<::System::Boolean>* _HasAnyTrait_k__BackingField; // 0x10
		::ACHNEAMCCEC* _Attribute1_k__BackingField; // 0x18
		::R3::Observable_1<::System::String*>* _TraitsText_k__BackingField; // 0x20
		::R3::Observable_1<::System::Boolean>* _HasAtLeastOneAttribute_k__BackingField; // 0x28
		::CEEGMMCFCBG* _ExitCommand_k__BackingField; // 0x30
		::ACHNEAMCCEC* _Attribute2_k__BackingField; // 0x38
		::R3::Observable_1<::System::Boolean>* _HasAtLeastTwoAttribute_k__BackingField; // 0x40
		::System::Void _ctor(::BICOIIAPJKC* a1, ::System::Action* a2, ::System::Collections::Generic::IReadOnlyList_1<::ACHNEAMCCEC*>* a3, ::System::Collections::Generic::IReadOnlyList_1<::FKLECLLJCEH*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BICOIIAPJKC*, ::System::Action*, ::System::Collections::Generic::IReadOnlyList_1<::ACHNEAMCCEC*>*, ::System::Collections::Generic::IReadOnlyList_1<::FKLECLLJCEH*>*))((::PBYTE)hIl2Cpp + DDJAAKLBKAG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::R3::Observable_1<::System::Boolean>* get_HasAtLeastOneAttribute()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJAAKLBKAG_GET_HASATLEASTONEATTRIBUTE_OFFSET))(this);
		}

		::ACHNEAMCCEC* get_Attribute1()
		{
			return ((::ACHNEAMCCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJAAKLBKAG_GET_ATTRIBUTE1_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* get_HasAtLeastTwoAttribute()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJAAKLBKAG_GET_HASATLEASTTWOATTRIBUTE_OFFSET))(this);
		}

		::ACHNEAMCCEC* get_Attribute2()
		{
			return ((::ACHNEAMCCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJAAKLBKAG_GET_ATTRIBUTE2_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* get_HasAnyTrait()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJAAKLBKAG_GET_HASANYTRAIT_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* get_TraitsText()
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJAAKLBKAG_GET_TRAITSTEXT_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ExitCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJAAKLBKAG_GET_EXITCOMMAND_OFFSET))(this);
		}

		static ::System::String* HLNPCKOBGBA(::System::Collections::Generic::IReadOnlyList_1<::FKLECLLJCEH*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IReadOnlyList_1<::FKLECLLJCEH*>*))((::PBYTE)hIl2Cpp + DDJAAKLBKAG_HLNPCKOBGBA_OFFSET))(a1);
		}

	};
