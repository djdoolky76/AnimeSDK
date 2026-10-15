#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define EABAKHCJHKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD38300)
#define EABAKHCJHKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD382B0)
#define EABAKHCJHKG_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1DD38310)

	class EABAKHCJHKG : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* _Arguments_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EABAKHCJHKG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EABAKHCJHKG_CTOR_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_Arguments()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABAKHCJHKG_GET_ARGUMENTS_OFFSET))(this);
		}

	};
