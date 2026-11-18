#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIEJNAJKLHK;
class EMFPGBMMDFN;
namespace System { template <typename T1, typename T2> class Action_2; }

#define EAFKOCFGFFA___C_MMKEOPOGHLK_OFFSET UNITYSDK_OFFSET(0x7FE2B40)
#define EAFKOCFGFFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FE2AF0)
#define EAFKOCFGFFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE2B30)

inline static constexpr unsigned int EAFKOCFGFFA___c_TypeDefinitionIndex = 66600;

class EAFKOCFGFFA___c : public ::System::Object
{
public:
	static ::System::Action_2<::EIEJNAJKLHK*, ::EMFPGBMMDFN*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::EIEJNAJKLHK*, ::EMFPGBMMDFN*>**)Il2CppClass::FromTypeDefinitionIndex(EAFKOCFGFFA___c_TypeDefinitionIndex)->GetStaticField(0x51330);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EAFKOCFGFFA___c_TypeDefinitionIndex)->GetStaticField(0x51338);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAFKOCFGFFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFKOCFGFFA___C__CTOR_OFFSET))(this);
	}

	::System::Void MMKEOPOGHLK(::EIEJNAJKLHK* KOHNJIACOAP, ::EMFPGBMMDFN* NHCAMKBBIGP)
	{
		return ((::System::Void(*)(::PVOID, ::EIEJNAJKLHK*, ::EMFPGBMMDFN*))((::PBYTE)hIl2Cpp + EAFKOCFGFFA___C_MMKEOPOGHLK_OFFSET))(this, KOHNJIACOAP, NHCAMKBBIGP);
	}
};
