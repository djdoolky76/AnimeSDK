#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHJJMPHHLF;
class DNJGCKKGBKH_KDJJMKEANKA;
class GFFIKKPLIGC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHPDPBHPJLI_BMINIOODOLE_OFFSET UNITYSDK_OFFSET(0x139CA3A0)
#define CHPDPBHPJLI_KPCPNHOBHPJ_OFFSET UNITYSDK_OFFSET(0x139CA2B0)
#define CHPDPBHPJLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x139CA350)
#define CHPDPBHPJLI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x139CA050)
#define CHPDPBHPJLI__CTOR_OFFSET UNITYSDK_OFFSET(0x139C9E90)

inline static constexpr unsigned int CHPDPBHPJLI_TypeDefinitionIndex = 54171;

class CHPDPBHPJLI : public ::System::Object
{
public:
	static ::DNJGCKKGBKH_KDJJMKEANKA** StaticGet_AOEEIBJHENI()
	{
		return (::DNJGCKKGBKH_KDJJMKEANKA**)Il2CppClass::FromTypeDefinitionIndex(CHPDPBHPJLI_TypeDefinitionIndex)->GetStaticField(0x4F2F0);
	}
	::System::Collections::Generic::List_1<::GFFIKKPLIGC*>* OGKBBJGMLOF; // 0x10
	::System::UInt32 ACHBBPJIBIE; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::String*>* LBJDPMKEJDH, ::System::Boolean PFOMKKMOOPJ)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHPDPBHPJLI__CTOR_OFFSET))(this, LBJDPMKEJDH, PFOMKKMOOPJ);
	}

	::System::Void _ctor_1(::DMHJJMPHHLF* OCHOKJLOBMC, ::System::Boolean PFOMKKMOOPJ)
	{
		return ((::System::Void(*)(::PVOID, ::DMHJJMPHHLF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHPDPBHPJLI__CTOR_1_OFFSET))(this, OCHOKJLOBMC, PFOMKKMOOPJ);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHPDPBHPJLI__CCTOR_OFFSET))();
	}

	::GFFIKKPLIGC* KPCPNHOBHPJ()
	{
		return ((::GFFIKKPLIGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHPDPBHPJLI_KPCPNHOBHPJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::GFFIKKPLIGC*>* BMINIOODOLE()
	{
		return ((::System::Collections::Generic::List_1<::GFFIKKPLIGC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHPDPBHPJLI_BMINIOODOLE_OFFSET))(this);
	}
};
