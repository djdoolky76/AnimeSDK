#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPOPELCLBDK;
namespace RPG::Client { class MockAnimator; }
namespace System { class Object; }
namespace System { class String; }

#define BPOPELCLBDK_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC1ACEF0)
#define BPOPELCLBDK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC1ACA60)
#define BPOPELCLBDK_CTOR_OFFSET UNITYSDK_OFFSET(0xC1ACBC0)
#define BPOPELCLBDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1ACEA0)
#define BPOPELCLBDK_FHFBNFGJHOJ_OFFSET UNITYSDK_OFFSET(0xC1ACE20)
#define BPOPELCLBDK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC1ACFD0)
#define BPOPELCLBDK_MAMDDODKFGO_OFFSET UNITYSDK_OFFSET(0xC1ACC90)

inline static constexpr unsigned int BPOPELCLBDK_TypeDefinitionIndex = 57004;

	class BPOPELCLBDK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* EGMDLKNFGCL; // 0x10
		::RPG::Client::MockAnimator* APPGGMLEPLN; // 0x18
		::System::Boolean HNALEMBOBFE; // 0x20
		::System::Void _ctor(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + BPOPELCLBDK_CTOR_OFFSET))(this, a1);
		}

		static ::BPOPELCLBDK* BPLPBPMEODA(::RPG::Client::MockAnimator* a1)
		{
			return ((::BPOPELCLBDK*(*)(::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + BPOPELCLBDK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void MAMDDODKFGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOPELCLBDK_MAMDDODKFGO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOPELCLBDK_DISPOSE_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + BPOPELCLBDK_BLILDBCEGFH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPOPELCLBDK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FHFBNFGJHOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOPELCLBDK_FHFBNFGJHOJ_OFFSET))(this);
		}

	};
