#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define EA4DA6602C6D47DA_F2B9DA5F7F9682FF_OFFSET UNITYSDK_OFFSET(0x3BB8760)
#define EA4DA6602C6D47DA__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB86F0)

inline static constexpr unsigned int EA4DA6602C6D47DA_TypeDefinitionIndex = 11189;

class EA4DA6602C6D47DA : public ::System::Object
{
public:
	::System::Int32 EDDF40A09F609C2E; // 0x10
	::System::Int32 F7DEA78B7EA02B5B; // 0x14
	::Il2CppArray<::System::String*>* E413E9E54E44BAA8; // 0x18
	::Il2CppArray<::System::Type*>* E4ADF76D6D51CC1F; // 0x20

	::System::Void _ctor(::System::Int32 EDDF40A09F609C2E, ::System::Int32 F7DEA78B7EA02B5B, ::Il2CppArray<::System::String*>* E413E9E54E44BAA8, ::Il2CppArray<::System::Type*>* E4ADF76D6D51CC1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + EA4DA6602C6D47DA__CTOR_OFFSET))(this, EDDF40A09F609C2E, F7DEA78B7EA02B5B, E413E9E54E44BAA8, E4ADF76D6D51CC1F);
	}

	::System::Boolean F2B9DA5F7F9682FF(::System::Int32 F7DEA78B7EA02B5B, ::Il2CppArray<::System::String*>* E413E9E54E44BAA8, ::Il2CppArray<::System::Type*>* E4ADF76D6D51CC1F)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + EA4DA6602C6D47DA_F2B9DA5F7F9682FF_OFFSET))(this, F7DEA78B7EA02B5B, E413E9E54E44BAA8, E4ADF76D6D51CC1F);
	}
};
