#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDNCJLGEINF.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define GPKABFJEFIC_AINKOMDFELI_1_OFFSET UNITYSDK_OFFSET(0x18168830)
#define GPKABFJEFIC_AINKOMDFELI_OFFSET UNITYSDK_OFFSET(0x18168730)
#define GPKABFJEFIC_BPIDHEMCPCK_1_OFFSET UNITYSDK_OFFSET(0x181688E0)
#define GPKABFJEFIC_BPIDHEMCPCK_OFFSET UNITYSDK_OFFSET(0x18168680)
#define GPKABFJEFIC_DHCFJFGIEGI_OFFSET UNITYSDK_OFFSET(0x181687E0)
#define GPKABFJEFIC_DKDJDEJHABH_1_OFFSET UNITYSDK_OFFSET(0x181685E0)
#define GPKABFJEFIC_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x18168550)
#define GPKABFJEFIC__CTOR_OFFSET UNITYSDK_OFFSET(0x18168540)

inline static constexpr unsigned int GPKABFJEFIC_TypeDefinitionIndex = 69927;

class GPKABFJEFIC : public ::System::Object
{
public:
	::System::Action_1<::IDNCJLGEINF>* IDJOMIMIOGM; // 0x10
	::System::Action_2<::IDNCJLGEINF, ::System::Object*>* NBNCCBDHOEJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKABFJEFIC__CTOR_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::IDNCJLGEINF FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IDNCJLGEINF))((::PBYTE)hIl2Cpp + GPKABFJEFIC_DKDJDEJHABH_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void DKDJDEJHABH_1(::IDNCJLGEINF FFNKDGGHBPP, ::System::Object* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::IDNCJLGEINF, ::System::Object*))((::PBYTE)hIl2Cpp + GPKABFJEFIC_DKDJDEJHABH_1_OFFSET))(this, FFNKDGGHBPP, HNOPAJLDCFB);
	}

	::System::Void BPIDHEMCPCK(::System::Action_2<::IDNCJLGEINF, ::System::Object*>* GENBLGDBPDP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::IDNCJLGEINF, ::System::Object*>*))((::PBYTE)hIl2Cpp + GPKABFJEFIC_BPIDHEMCPCK_OFFSET))(this, GENBLGDBPDP);
	}

	::System::Void AINKOMDFELI(::System::Action_1<::IDNCJLGEINF>* GENBLGDBPDP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::IDNCJLGEINF>*))((::PBYTE)hIl2Cpp + GPKABFJEFIC_AINKOMDFELI_OFFSET))(this, GENBLGDBPDP);
	}

	::System::Void DHCFJFGIEGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKABFJEFIC_DHCFJFGIEGI_OFFSET))(this);
	}

	::System::Void AINKOMDFELI_1(::System::Action_2<::IDNCJLGEINF, ::System::Object*>* GENBLGDBPDP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::IDNCJLGEINF, ::System::Object*>*))((::PBYTE)hIl2Cpp + GPKABFJEFIC_AINKOMDFELI_1_OFFSET))(this, GENBLGDBPDP);
	}

	::System::Void BPIDHEMCPCK_1(::System::Action_1<::IDNCJLGEINF>* GENBLGDBPDP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::IDNCJLGEINF>*))((::PBYTE)hIl2Cpp + GPKABFJEFIC_BPIDHEMCPCK_1_OFFSET))(this, GENBLGDBPDP);
	}
};
