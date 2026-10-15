#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBAOKOHKCF.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALPLGBPDPIK_CTOR_OFFSET UNITYSDK_OFFSET(0x15566760)
#define ALPLGBPDPIK_GET_BASEADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x15566790)
#define ALPLGBPDPIK_GET_MULTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x155667B0)
#define ALPLGBPDPIK_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15566770)
#define ALPLGBPDPIK_SET_BASEADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x155667A0)
#define ALPLGBPDPIK_SET_MULTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x155667C0)
#define ALPLGBPDPIK_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x15566780)

inline static constexpr unsigned int ALPLGBPDPIK_TypeDefinitionIndex = 76382;

	class ALPLGBPDPIK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* _MultSequence_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* _BaseAddSequence_k__BackingField; // 0x18
		::GLBAOKOHKCF _PropertyType_k__BackingField; // 0x20
		::System::Void _ctor(::GLBAOKOHKCF a1, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GLBAOKOHKCF, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + ALPLGBPDPIK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::GLBAOKOHKCF get_PropertyType()
		{
			return ((::GLBAOKOHKCF(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPLGBPDPIK_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::GLBAOKOHKCF a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + ALPLGBPDPIK_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* get_BaseAddSequence()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPLGBPDPIK_GET_BASEADDSEQUENCE_OFFSET))(this);
		}

		::System::Void set_BaseAddSequence(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + ALPLGBPDPIK_SET_BASEADDSEQUENCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* get_MultSequence()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPLGBPDPIK_GET_MULTSEQUENCE_OFFSET))(this);
		}

		::System::Void set_MultSequence(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + ALPLGBPDPIK_SET_MULTSEQUENCE_OFFSET))(this, a1);
		}

	};
