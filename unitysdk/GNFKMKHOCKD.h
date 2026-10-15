#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define GNFKMKHOCKD_CTOR_OFFSET UNITYSDK_OFFSET(0x15AF6780)
#define GNFKMKHOCKD_GET_COMPONENTINTERFACES_OFFSET UNITYSDK_OFFSET(0x15AF6770)

inline static constexpr unsigned int GNFKMKHOCKD_TypeDefinitionIndex = 74063;

	class GNFKMKHOCKD : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Type*>* _ComponentInterfaces_k__BackingField; // 0x10
		::System::Void _ctor(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + GNFKMKHOCKD_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* get_ComponentInterfaces()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFKMKHOCKD_GET_COMPONENTINTERFACES_OFFSET))(this);
		}

	};
