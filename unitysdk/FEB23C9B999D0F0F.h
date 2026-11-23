#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FEB23C9B999D0F0F_B84ADEF90BDE235C_OFFSET UNITYSDK_OFFSET(0x3C46E90)
#define FEB23C9B999D0F0F_E8711EEE9556B6E3_OFFSET UNITYSDK_OFFSET(0x3C46BE0)
#define FEB23C9B999D0F0F_EC92AE268DA88BBF_OFFSET UNITYSDK_OFFSET(0x3C46F70)
#define FEB23C9B999D0F0F_F1F4A92C47D3AEDC_OFFSET UNITYSDK_OFFSET(0x3C46CB0)
#define FEB23C9B999D0F0F__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C472B0)
#define FEB23C9B999D0F0F__CTOR_OFFSET UNITYSDK_OFFSET(0x3C47340)

inline static constexpr unsigned int FEB23C9B999D0F0F_TypeDefinitionIndex = 11556;

class FEB23C9B999D0F0F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_B55B55FC70BBC95D()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FEB23C9B999D0F0F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 EB36C7A66E748C31; // 0x10
	::System::Int32 EF5A2B68FEDCE0D3; // 0x14
	::Il2CppArray<::System::Int64>* F65A074E4CD2D39B; // 0x18
	::Il2CppArray<::System::Object*>* A00F333156508F83; // 0x20

	::System::Int64 F1F4A92C47D3AEDC(::System::Object* A86A90C31A146E9C, ::System::Boolean& BC0A4B7A6C78C3CE)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FEB23C9B999D0F0F_F1F4A92C47D3AEDC_OFFSET))(this, A86A90C31A146E9C, BC0A4B7A6C78C3CE);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEB23C9B999D0F0F__CCTOR_OFFSET))();
	}

	::System::Int64 B84ADEF90BDE235C(::System::Object* A86A90C31A146E9C, ::System::Boolean& BC0A4B7A6C78C3CE)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FEB23C9B999D0F0F_B84ADEF90BDE235C_OFFSET))(this, A86A90C31A146E9C, BC0A4B7A6C78C3CE);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEB23C9B999D0F0F__CTOR_OFFSET))(this);
	}

	::System::Void EC92AE268DA88BBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEB23C9B999D0F0F_EC92AE268DA88BBF_OFFSET))(this);
	}

	::System::Int32 E8711EEE9556B6E3(::System::Object* A86A90C31A146E9C, ::System::Boolean& E35730C081D38203)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FEB23C9B999D0F0F_E8711EEE9556B6E3_OFFSET))(this, A86A90C31A146E9C, E35730C081D38203);
	}
};
