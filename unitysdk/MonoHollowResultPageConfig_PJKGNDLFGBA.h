#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class MonoHollowResultPageConfig;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12C1E110)
#define MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12C1E120)
#define MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA_WRITE_OFFSET UNITYSDK_OFFSET(0x12C1E8B0)
#define MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C1ED70)
#define MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1ED30)

inline static constexpr unsigned int MonoHollowResultPageConfig_PJKGNDLFGBA_TypeDefinitionIndex = 63411;

class MonoHollowResultPageConfig_PJKGNDLFGBA
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_PJKGNDLFGBA_TypeDefinitionIndex)->GetStaticField(0x50E80);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_AGLBFLNEIDG()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_PJKGNDLFGBA_TypeDefinitionIndex)->GetStaticField(0x50E88);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_PJKGNDLFGBA_TypeDefinitionIndex)->GetStaticField(0x50E90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoHollowResultPageConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoHollowResultPageConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
	}

	::System::Void Write(::MonoHollowResultPageConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
	{
		return ((::System::Void(*)(::PVOID, ::MonoHollowResultPageConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_PJKGNDLFGBA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
	}
};
