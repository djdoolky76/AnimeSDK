#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNDDPNGIGJE.h"

class LHLDPHDJLNL;
class MBCEALDIBEL;
namespace System { class Type; }

#define MKKNKEFDKFH_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x17D462A0)
#define MKKNKEFDKFH_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x17D46400)
#define MKKNKEFDKFH_NGDJFFPHCEJ_OFFSET UNITYSDK_OFFSET(0x17D47960)
#define MKKNKEFDKFH__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D464A0)
#define MKKNKEFDKFH__CTOR_OFFSET UNITYSDK_OFFSET(0x17D46490)

inline static constexpr unsigned int MKKNKEFDKFH_TypeDefinitionIndex = 48273;

class MKKNKEFDKFH : public ::LNDDPNGIGJE
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_CBDBLKMJIOG()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(MKKNKEFDKFH_TypeDefinitionIndex)->GetStaticField(0x4F830);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKNKEFDKFH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKKNKEFDKFH__CCTOR_OFFSET))();
	}

	::LHLDPHDJLNL* HMMOPDIPIOJ(::MBCEALDIBEL* AAOCANGHBDG)
	{
		return ((::LHLDPHDJLNL*(*)(::PVOID, ::MBCEALDIBEL*))((::PBYTE)hIl2Cpp + MKKNKEFDKFH_HMMOPDIPIOJ_OFFSET))(this, AAOCANGHBDG);
	}

	::Il2CppArray<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKNKEFDKFH_JAPFFPNAJHB_OFFSET))(this);
	}

	::MBCEALDIBEL* NGDJFFPHCEJ()
	{
		return ((::MBCEALDIBEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKNKEFDKFH_NGDJFFPHCEJ_OFFSET))(this);
	}
};
