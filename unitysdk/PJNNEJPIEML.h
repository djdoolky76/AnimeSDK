#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }

#define PJNNEJPIEML_ADD_ONCLICKED_OFFSET UNITYSDK_OFFSET(0xCBC8B90)
#define PJNNEJPIEML_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC8CC0)
#define PJNNEJPIEML_JMPCNFIGLBK_OFFSET UNITYSDK_OFFSET(0xCBC8C50)
#define PJNNEJPIEML_REMOVE_ONCLICKED_OFFSET UNITYSDK_OFFSET(0xCBC8BF0)

inline static constexpr unsigned int PJNNEJPIEML_TypeDefinitionIndex = 79783;

	class PJNNEJPIEML : public ::System::Object
	{
	public:
		::System::Action_1<::System::UInt32>* OnClicked; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNNEJPIEML_CTOR_OFFSET))(this);
		}

		::System::Void add_OnClicked(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PJNNEJPIEML_ADD_ONCLICKED_OFFSET))(this, a1);
		}

		::System::Void remove_OnClicked(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PJNNEJPIEML_REMOVE_ONCLICKED_OFFSET))(this, a1);
		}

		::System::Void JMPCNFIGLBK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJNNEJPIEML_JMPCNFIGLBK_OFFSET))(this, a1);
		}

	};
