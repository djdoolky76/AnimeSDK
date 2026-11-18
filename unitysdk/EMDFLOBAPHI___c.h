#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Func_2; }

#define EMDFLOBAPHI___C_FBAHMKNEDPH_OFFSET UNITYSDK_OFFSET(0x172465E0)
#define EMDFLOBAPHI___C_FGGBDLPAJBP_OFFSET UNITYSDK_OFFSET(0x17246600)
#define EMDFLOBAPHI___C_IPMPNMANKOB_OFFSET UNITYSDK_OFFSET(0x172465F0)
#define EMDFLOBAPHI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17246590)
#define EMDFLOBAPHI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172465D0)

inline static constexpr unsigned int EMDFLOBAPHI___c_TypeDefinitionIndex = 72524;

class EMDFLOBAPHI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EMDFLOBAPHI___c_TypeDefinitionIndex)->GetStaticField(0x407F0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>, ::Share::EAvatarSkillType>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>, ::Share::EAvatarSkillType>**)Il2CppClass::FromTypeDefinitionIndex(EMDFLOBAPHI___c_TypeDefinitionIndex)->GetStaticField(0x407F8);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__4_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(EMDFLOBAPHI___c_TypeDefinitionIndex)->GetStaticField(0x40800);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>, ::System::Byte>** StaticGet___9__8_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>, ::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(EMDFLOBAPHI___c_TypeDefinitionIndex)->GetStaticField(0x40808);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMDFLOBAPHI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFLOBAPHI___C__CTOR_OFFSET))(this);
	}

	::Share::EAvatarSkillType FBAHMKNEDPH(::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte> DLBHJOGKNOC)
	{
		return ((::Share::EAvatarSkillType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>))((::PBYTE)hIl2Cpp + EMDFLOBAPHI___C_FBAHMKNEDPH_OFFSET))(this, DLBHJOGKNOC);
	}

	::System::Void IPMPNMANKOB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EMDFLOBAPHI___C_IPMPNMANKOB_OFFSET))(this, NAPFALLANDL);
	}

	::System::Byte FGGBDLPAJBP(::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte> DLBHJOGKNOC)
	{
		return ((::System::Byte(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>))((::PBYTE)hIl2Cpp + EMDFLOBAPHI___C_FGGBDLPAJBP_OFFSET))(this, DLBHJOGKNOC);
	}
};
