#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class FAKIACDIKOP;
class PJHKDJEGJOG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOKFPNKJOON_JFOEAFEPHNA_FIIOLFJPECH_OFFSET UNITYSDK_OFFSET(0x14C24920)
#define AOKFPNKJOON_JFOEAFEPHNA_IAPKNJDNJAH_OFFSET UNITYSDK_OFFSET(0x14C246E0)
#define AOKFPNKJOON_JFOEAFEPHNA_JKFNFNJDGAN_OFFSET UNITYSDK_OFFSET(0x14C24800)
#define AOKFPNKJOON_JFOEAFEPHNA__CTOR_OFFSET UNITYSDK_OFFSET(0x14C246D0)

inline static constexpr unsigned int AOKFPNKJOON_JFOEAFEPHNA_TypeDefinitionIndex = 51459;

class AOKFPNKJOON_JFOEAFEPHNA : public ::System::Object
{
public:
	::System::Action* KAKAEMACNPB; // 0x10
	::System::Action* OLDCEOGKOAE; // 0x18
	::PJHKDJEGJOG* EGGOCICCFJC; // 0x20
	::System::Single CIIPCCLOHLH; // 0x28
	::System::Single HHMMKIAFHOC; // 0x2C
	::System::Boolean CCFIKJAILPN; // 0x30
	::System::Boolean PLCJLHLIMGG; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_JFOEAFEPHNA__CTOR_OFFSET))(this);
	}

	::System::Void IAPKNJDNJAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_JFOEAFEPHNA_IAPKNJDNJAH_OFFSET))(this);
	}

	::System::Void JKFNFNJDGAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_JFOEAFEPHNA_JKFNFNJDGAN_OFFSET))(this);
	}

	::System::Void FIIOLFJPECH(::FAKIACDIKOP* GLAOEHCGCFO, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::FAKIACDIKOP*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + AOKFPNKJOON_JFOEAFEPHNA_FIIOLFJPECH_OFFSET))(this, GLAOEHCGCFO, POLEBKEFMFL);
	}
};
