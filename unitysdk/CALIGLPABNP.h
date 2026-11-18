#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAJBCOHELJJ.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/KJBNPGMKJBJ.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CALIGLPABNP_HJNIADBPLHJ_OFFSET UNITYSDK_OFFSET(0x1399AD40)
#define CALIGLPABNP_JDPFCNKGIGH_OFFSET UNITYSDK_OFFSET(0x1399AB60)
#define CALIGLPABNP_KKLNHOHJPPC_OFFSET UNITYSDK_OFFSET(0x1399A910)
#define CALIGLPABNP_NAHDLCCBJKN_OFFSET UNITYSDK_OFFSET(0x1399A920)
#define CALIGLPABNP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1399A7E0)
#define CALIGLPABNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1399A7B0)

inline static constexpr unsigned int CALIGLPABNP_TypeDefinitionIndex = 47281;

class CALIGLPABNP : public ::FAJBCOHELJJ
{
public:
	static ::Il2CppArray<::MoleMole::Config::DamageElementType>** StaticGet_ANLLGFFBBFC()
	{
		return (::Il2CppArray<::MoleMole::Config::DamageElementType>**)Il2CppClass::FromTypeDefinitionIndex(CALIGLPABNP_TypeDefinitionIndex)->GetStaticField(0x4F280);
	}
	::System::String* _BBJKEGHKOJN_k__BackingField; // 0x1A0

	::System::Void _ctor(::KJBNPGMKJBJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KJBNPGMKJBJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CALIGLPABNP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CALIGLPABNP__CCTOR_OFFSET))();
	}

	::System::Void KKLNHOHJPPC(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CALIGLPABNP_KKLNHOHJPPC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* NAHDLCCBJKN()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALIGLPABNP_NAHDLCCBJKN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* JDPFCNKGIGH()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALIGLPABNP_JDPFCNKGIGH_OFFSET))(this);
	}

	::System::String* HJNIADBPLHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALIGLPABNP_HJNIADBPLHJ_OFFSET))(this);
	}
};
