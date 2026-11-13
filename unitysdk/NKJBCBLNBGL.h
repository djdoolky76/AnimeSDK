#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JBNIMKGNBKB;
class KDJNAAOFMMJ;
namespace RPG::GameCore { class HipplenGameAreaListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NKJBCBLNBGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B5620)
#define NKJBCBLNBGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7B56E0)
#define NKJBCBLNBGL_DKLIJOFDJCK_OFFSET UNITYSDK_OFFSET(0x1A7B5990)
#define NKJBCBLNBGL_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x1A7B58C0)
#define NKJBCBLNBGL_JAAJHNKCADB_OFFSET UNITYSDK_OFFSET(0x1A7B5B30)
#define NKJBCBLNBGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7B5630)
#define NKJBCBLNBGL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A7B57A0)
#define NKJBCBLNBGL_TICK_OFFSET UNITYSDK_OFFSET(0x1A7B57F0)

inline static constexpr unsigned int NKJBCBLNBGL_TypeDefinitionIndex = 53377;

	class NKJBCBLNBGL : public ::GELIALJDFBL
	{
	public:
		::KDJNAAOFMMJ* HEAGLNNMMNJ; // 0x18
		::RPG::GameCore::HipplenGameAreaListener* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
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
