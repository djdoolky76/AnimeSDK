#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EE89522EBD8AC31D_BD7943E594BEC63C_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define EE89522EBD8AC31D_FF742AE8B52CEE9A_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define EE89522EBD8AC31D__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5180)

inline static constexpr unsigned int EE89522EBD8AC31D_TypeDefinitionIndex = 19010;

class EE89522EBD8AC31D : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* F725CF87CDF1307C; // 0x10
	::Il2CppArray<::System::Byte>* F719C8957D21FC59; // 0x18

	::Il2CppArray<::System::Byte>* BD7943E594BEC63C()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE89522EBD8AC31D_BD7943E594BEC63C_OFFSET))(this);
	}

	::System::Void _ctor(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::Il2CppArray<::System::Byte>* AFB1BC3C3A24DBD8)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EE89522EBD8AC31D__CTOR_OFFSET))(this, F220A2D27F7C6B6C, AFB1BC3C3A24DBD8);
	}

	::Il2CppArray<::System::Byte>* FF742AE8B52CEE9A()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE89522EBD8AC31D_FF742AE8B52CEE9A_OFFSET))(this);
	}
};
