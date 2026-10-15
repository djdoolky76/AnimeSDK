#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JBNIMKGNBKB;
class KDJNAAOFMMJ;
namespace RPG::GameCore { class HipplenGameAreaListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NKJBCBLNBGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC32530)
#define NKJBCBLNBGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC325F0)
#define NKJBCBLNBGL_DKLIJOFDJCK_OFFSET UNITYSDK_OFFSET(0xBC32860)
#define NKJBCBLNBGL_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xBC32790)
#define NKJBCBLNBGL_JAAJHNKCADB_OFFSET UNITYSDK_OFFSET(0xBC32A00)
#define NKJBCBLNBGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC32540)
#define NKJBCBLNBGL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC326B0)
#define NKJBCBLNBGL_TICK_OFFSET UNITYSDK_OFFSET(0xBC32700)

inline static constexpr unsigned int NKJBCBLNBGL_TypeDefinitionIndex = 52271;

	class NKJBCBLNBGL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::HipplenGameAreaListener* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KDJNAAOFMMJ* HEAGLNNMMNJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameAreaListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameAreaListener*))((::PBYTE)hIl2Cpp + NKJBCBLNBGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJBCBLNBGL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJBCBLNBGL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJBCBLNBGL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKJBCBLNBGL_TICK_OFFSET))(this, a1);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKJBCBLNBGL_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Void DKLIJOFDJCK(::JBNIMKGNBKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBNIMKGNBKB*))((::PBYTE)hIl2Cpp + NKJBCBLNBGL_DKLIJOFDJCK_OFFSET))(this, a1);
		}

		::System::Void JAAJHNKCADB(::JBNIMKGNBKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBNIMKGNBKB*))((::PBYTE)hIl2Cpp + NKJBCBLNBGL_JAAJHNKCADB_OFFSET))(this, a1);
		}

	};
