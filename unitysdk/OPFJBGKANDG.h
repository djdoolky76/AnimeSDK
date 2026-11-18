#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

#define OPFJBGKANDG_CCOHJIFDBCD_OFFSET UNITYSDK_OFFSET(0x12957520)
#define OPFJBGKANDG_FEGPFGCHMAD_OFFSET UNITYSDK_OFFSET(0x12957E20)
#define OPFJBGKANDG_IEKDNCLGNBP_OFFSET UNITYSDK_OFFSET(0x12957660)
#define OPFJBGKANDG_KJCKNAFIANH_OFFSET UNITYSDK_OFFSET(0x12957740)
#define OPFJBGKANDG_KMALBLGKLEK_OFFSET UNITYSDK_OFFSET(0x12957A70)
#define OPFJBGKANDG_NGDHJLJGCON_OFFSET UNITYSDK_OFFSET(0x129574C0)
#define OPFJBGKANDG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12957440)

inline static constexpr unsigned int OPFJBGKANDG_TypeDefinitionIndex = 84800;

class OPFJBGKANDG : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_CFHMACBEHIO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OPFJBGKANDG_TypeDefinitionIndex)->GetStaticField(0x11ED0);
	}
	static ::Foundation::Coroutine::CoroutineHandle* StaticGet_DKLFOHCDEME()
	{
		return (::Foundation::Coroutine::CoroutineHandle*)Il2CppClass::FromTypeDefinitionIndex(OPFJBGKANDG_TypeDefinitionIndex)->GetStaticField(0x11ED4);
	}
	static ::System::Single* StaticGet_KBNJEOGBMLH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OPFJBGKANDG_TypeDefinitionIndex)->GetStaticField(0x11ED8);
	}
	static ::System::Boolean* StaticGet_DIGMONIAOIK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OPFJBGKANDG_TypeDefinitionIndex)->GetStaticField(0x11EDC);
	}
	// static const ::System::String* AHIHOGNHGOD; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPFJBGKANDG__CCTOR_OFFSET))();
	}

	static ::System::Boolean NGDHJLJGCON()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OPFJBGKANDG_NGDHJLJGCON_OFFSET))();
	}

	static ::System::Void CCOHJIFDBCD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPFJBGKANDG_CCOHJIFDBCD_OFFSET))();
	}

	static ::System::Void IEKDNCLGNBP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPFJBGKANDG_IEKDNCLGNBP_OFFSET))();
	}

	static ::System::Void KJCKNAFIANH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPFJBGKANDG_KJCKNAFIANH_OFFSET))();
	}

	static ::System::Void KMALBLGKLEK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPFJBGKANDG_KMALBLGKLEK_OFFSET))();
	}

	static ::System::Void FEGPFGCHMAD(::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + OPFJBGKANDG_FEGPFGCHMAD_OFFSET))(BIOGEIHKABE);
	}
};
