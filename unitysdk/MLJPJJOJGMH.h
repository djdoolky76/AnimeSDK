#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/Object.h"

class FGNEAMDEOLM;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLJPJJOJGMH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14DF0770)
#define MLJPJJOJGMH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14DF0650)
#define MLJPJJOJGMH_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x14DF11F0)
#define MLJPJJOJGMH_FPBKMHGCGJK_OFFSET UNITYSDK_OFFSET(0x14DEFF50)
#define MLJPJJOJGMH_KDPJNLOINEA_OFFSET UNITYSDK_OFFSET(0x14DF0F60)
#define MLJPJJOJGMH_KEPKIIIAGPC_OFFSET UNITYSDK_OFFSET(0x14DF0470)
#define MLJPJJOJGMH_NNPNFBCMIIB_OFFSET UNITYSDK_OFFSET(0x14DF0BB0)
#define MLJPJJOJGMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DEFE20)

inline static constexpr unsigned int MLJPJJOJGMH_TypeDefinitionIndex = 64424;

class MLJPJJOJGMH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::FGNEAMDEOLM*>** StaticGet_HADOHNMLDMO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::FGNEAMDEOLM*>**)Il2CppClass::FromTypeDefinitionIndex(MLJPJJOJGMH_TypeDefinitionIndex)->GetStaticField(0x51650);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::FGNEAMDEOLM*>** StaticGet_DBLAGCHDKPM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::FGNEAMDEOLM*>**)Il2CppClass::FromTypeDefinitionIndex(MLJPJJOJGMH_TypeDefinitionIndex)->GetStaticField(0x51658);
	}
	static ::MoleMole::LanguageVoiceType* StaticGet_NKIEJIDKDJC()
	{
		return (::MoleMole::LanguageVoiceType*)Il2CppClass::FromTypeDefinitionIndex(MLJPJJOJGMH_TypeDefinitionIndex)->GetStaticField(0x134E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLJPJJOJGMH__CCTOR_OFFSET))();
	}

	static ::FGNEAMDEOLM* FPBKMHGCGJK(::System::String* LJIMDJELPEO)
	{
		return ((::FGNEAMDEOLM*(*)(::System::String*))((::PBYTE)hIl2Cpp + MLJPJJOJGMH_FPBKMHGCGJK_OFFSET))(LJIMDJELPEO);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MLJPJJOJGMH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::FGNEAMDEOLM* NNPNFBCMIIB(::System::String* KPIAFDELPJL)
	{
		return ((::FGNEAMDEOLM*(*)(::System::String*))((::PBYTE)hIl2Cpp + MLJPJJOJGMH_NNPNFBCMIIB_OFFSET))(KPIAFDELPJL);
	}

	static ::System::Single KDPJNLOINEA(::System::String* KPIAFDELPJL, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MLJPJJOJGMH_KDPJNLOINEA_OFFSET))(KPIAFDELPJL, FNIOPKPHDEH);
	}

	static ::FGNEAMDEOLM* KEPKIIIAGPC(::System::String* OIIHCACKLHD)
	{
		return ((::FGNEAMDEOLM*(*)(::System::String*))((::PBYTE)hIl2Cpp + MLJPJJOJGMH_KEPKIIIAGPC_OFFSET))(OIIHCACKLHD);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF, ::System::Boolean LCJIPMCLCJC)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MLJPJJOJGMH_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF, LCJIPMCLCJC);
	}

	static ::System::Single FCFOEJGPDNO(::System::String* LJIMDJELPEO, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MLJPJJOJGMH_FCFOEJGPDNO_OFFSET))(LJIMDJELPEO, FNIOPKPHDEH);
	}
};
