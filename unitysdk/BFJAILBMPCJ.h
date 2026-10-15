#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/INBCAKDBHHE.h"
class MLFAGNKOOBJ;
class PEELDCHBLJK;
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BFJAILBMPCJ_APPCBLHJNFK_OFFSET UNITYSDK_OFFSET(0xB16C7C0)
#define BFJAILBMPCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB16B8A0)
#define BFJAILBMPCJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB16B8D0)
#define BFJAILBMPCJ_ENKPHKGECEJ_OFFSET UNITYSDK_OFFSET(0xB16B840)
#define BFJAILBMPCJ_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB16B7B0)
#define BFJAILBMPCJ_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xB16BDA0)
#define BFJAILBMPCJ_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xB16B7E0)
#define BFJAILBMPCJ_JJGBDAJOEGH_OFFSET UNITYSDK_OFFSET(0xB16B7D0)
#define BFJAILBMPCJ_JMDDMIJIBDA_OFFSET UNITYSDK_OFFSET(0xB16C540)
#define BFJAILBMPCJ_LFGPAMCBKAD_OFFSET UNITYSDK_OFFSET(0xB16B7C0)
#define BFJAILBMPCJ_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0xB16B920)

inline static constexpr unsigned int BFJAILBMPCJ_TypeDefinitionIndex = 69283;

	class BFJAILBMPCJ : public ::System::Object
	{
	public:
		::MLFAGNKOOBJ* KGCNPIEDOCA; // 0x10
		::Il2CppArray<::PEELDCHBLJK*>* CCECMIKFAME; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* BLIOECEONGF; // 0x20
		::RPG::GameCore::RuntimeGroupInfo* DMIJAIJDKNP; // 0x28
		::System::UInt32 _GroupID_k__BackingField; // 0x30
		::System::Void _ctor(::MLFAGNKOOBJ* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a3, ::RPG::GameCore::RuntimeGroupInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MLFAGNKOOBJ*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_GET_GROUPID_OFFSET))(this);
		}

		::MLFAGNKOOBJ* LFGPAMCBKAD()
		{
			return ((::MLFAGNKOOBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_LFGPAMCBKAD_OFFSET))(this);
		}

		::Il2CppArray<::PEELDCHBLJK*>* JJGBDAJOEGH()
		{
			return ((::Il2CppArray<::PEELDCHBLJK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_JJGBDAJOEGH_OFFSET))(this);
		}

		::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_JDKCDJNJAOL_OFFSET))(this);
		}

		::System::Boolean ENKPHKGECEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_ENKPHKGECEJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::PEELDCHBLJK*>* HKEPJLDBGIG(::System::Boolean a1)
		{
			return ((::Il2CppArray<::PEELDCHBLJK*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::Il2CppArray<::PEELDCHBLJK*>* PEECNCABGFD(::System::Boolean a1)
		{
			return ((::Il2CppArray<::PEELDCHBLJK*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_PEECNCABGFD_OFFSET))(this, a1);
		}

		static ::System::Boolean JMDDMIJIBDA(::System::Collections::Generic::IList_1<::PEELDCHBLJK*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::PEELDCHBLJK*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_JMDDMIJIBDA_OFFSET))(a1, a2);
		}

		static ::INBCAKDBHHE APPCBLHJNFK(::RPG::GameCore::LevelPedestrianV2Info* a1, ::System::Collections::Generic::IEnumerable_1<::INBCAKDBHHE>* a2)
		{
			return ((::INBCAKDBHHE(*)(::RPG::GameCore::LevelPedestrianV2Info*, ::System::Collections::Generic::IEnumerable_1<::INBCAKDBHHE>*))((::PBYTE)hIl2Cpp + BFJAILBMPCJ_APPCBLHJNFK_OFFSET))(a1, a2);
		}

	};
