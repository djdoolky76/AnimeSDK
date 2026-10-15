#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class RequestChangeMatchThreeV2BirdLocation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define IPHNEFLNKAF_CEGMLNPMGGL_OFFSET UNITYSDK_OFFSET(0x16520940)
#define IPHNEFLNKAF_CTOR_OFFSET UNITYSDK_OFFSET(0x16520600)
#define IPHNEFLNKAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16520610)
#define IPHNEFLNKAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16520770)
#define IPHNEFLNKAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16520660)
#define IPHNEFLNKAF_TICK_OFFSET UNITYSDK_OFFSET(0x16520710)

inline static constexpr unsigned int IPHNEFLNKAF_TypeDefinitionIndex = 53015;

	class IPHNEFLNKAF : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::RequestChangeMatchThreeV2BirdLocation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::UInt32 NFPAFAKKALP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + IPHNEFLNKAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHNEFLNKAF_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPHNEFLNKAF_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHNEFLNKAF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHNEFLNKAF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void CEGMLNPMGGL(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + IPHNEFLNKAF_CEGMLNPMGGL_OFFSET))(this, a1, a2);
		}

	};
