#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELAJGKCJCLB.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/PMBCHGNJMKF.h"

namespace Foundation { class NameValueContainerBuilder; }
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class BoneSocketConfig; }
namespace MoleMole::Photo { class ReferenceSkeletonConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APDFDFADELO_BOBJBPEFLND_OFFSET UNITYSDK_OFFSET(0xF782D10)
#define APDFDFADELO_CKBOAFMDIFD_OFFSET UNITYSDK_OFFSET(0xF7816D0)
#define APDFDFADELO_HIIFANMHOIG_OFFSET UNITYSDK_OFFSET(0xF77FC50)
#define APDFDFADELO_JOHCMDKPHEB_OFFSET UNITYSDK_OFFSET(0xF7818D0)
#define APDFDFADELO_LDIHHDLBGNP_OFFSET UNITYSDK_OFFSET(0xF77FE30)
#define APDFDFADELO_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0xF781C20)
#define APDFDFADELO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF77FBD0)
#define APDFDFADELO__CTOR_OFFSET UNITYSDK_OFFSET(0xF77FB50)

inline static constexpr unsigned int APDFDFADELO_TypeDefinitionIndex = 91353;

class APDFDFADELO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FName, ::System::ValueTuple_2<::System::Object*, ::HHDPDELCDNI>>* GOIPOKGILEM; // 0x10
	::MoleMole::Photo::ReferenceSkeletonConfig* CEJENBBHBBG; // 0x18
	::Foundation::NameValueContainerBuilder* OELBDKOILEP; // 0x20
	::Foundation::NameValueContainerBuilder* BDJBNNKHNEA; // 0x28
	::Il2CppArray<::Foundation::NativeMemoryRequestHandle>* OJBJOMEFLBI; // 0x30
	::ELAJGKCJCLB AGNPPGPGGPP; // 0x38

	::System::Void _ctor(::MoleMole::Photo::ReferenceSkeletonConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ReferenceSkeletonConfig*))((::PBYTE)hIl2Cpp + APDFDFADELO__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDFDFADELO__CTOR_1_OFFSET))(this);
	}

	::HHDPDELCDNI HIIFANMHOIG(::Foundation::Unreal::FName HIAIKHDFCLN)
	{
		return ((::HHDPDELCDNI(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + APDFDFADELO_HIIFANMHOIG_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void LDIHHDLBGNP(::Foundation::NativeMemoryBuilder* GENNIFDPOAM, ::System::String*& DAJPJKMHMFN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryBuilder*, ::System::String*&))((::PBYTE)hIl2Cpp + APDFDFADELO_LDIHHDLBGNP_OFFSET))(this, GENNIFDPOAM, DAJPJKMHMFN);
	}

	::System::Boolean CKBOAFMDIFD(::MoleMole::Photo::BoneSocketConfig* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Photo::BoneSocketConfig*))((::PBYTE)hIl2Cpp + APDFDFADELO_CKBOAFMDIFD_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void JOHCMDKPHEB(::Foundation::NativeMemoryBuilder* GENNIFDPOAM, ::System::String*& DAJPJKMHMFN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryBuilder*, ::System::String*&))((::PBYTE)hIl2Cpp + APDFDFADELO_JOHCMDKPHEB_OFFSET))(this, GENNIFDPOAM, DAJPJKMHMFN);
	}

	::PMBCHGNJMKF PKOGNPKCHHE(::Foundation::NativeMemory* HIECLGCOKGD, ::System::String*& DAJPJKMHMFN)
	{
		return ((::PMBCHGNJMKF(*)(::PVOID, ::Foundation::NativeMemory*, ::System::String*&))((::PBYTE)hIl2Cpp + APDFDFADELO_PKOGNPKCHHE_OFFSET))(this, HIECLGCOKGD, DAJPJKMHMFN);
	}

	::System::Void BOBJBPEFLND(::Foundation::NativeMemoryBuilder* GENNIFDPOAM, ::MoleMole::Photo::Skeleton* NEGDIIDKGIA, ::System::String*& DAJPJKMHMFN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryBuilder*, ::MoleMole::Photo::Skeleton*, ::System::String*&))((::PBYTE)hIl2Cpp + APDFDFADELO_BOBJBPEFLND_OFFSET))(this, GENNIFDPOAM, NEGDIIDKGIA, DAJPJKMHMFN);
	}
};
