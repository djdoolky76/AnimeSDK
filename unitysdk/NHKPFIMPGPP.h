#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class EIIDDKDCOCL;
class HNAMMBJPEDF;
class NHKPFIMPGPP;
namespace RPG::GameCore { class IdleLiveSpineAnimTriggerRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHKPFIMPGPP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBCDCD0)
#define NHKPFIMPGPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBBCDDE0)
#define NHKPFIMPGPP_DPCKLFEKBNC_OFFSET UNITYSDK_OFFSET(0xBBCDC90)
#define NHKPFIMPGPP_JLODINLPCCO_OFFSET UNITYSDK_OFFSET(0xBBCE4E0)

inline static constexpr unsigned int NHKPFIMPGPP_TypeDefinitionIndex = 75394;

	class NHKPFIMPGPP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* ABIDONIKBFG; // 0x10
		::System::String* HPGOIKJCKLF; // 0x18
		::System::Single PFADDKKAOHI; // 0x20
		::System::Void _ctor(::System::Collections::Generic::IList_1<::HNAMMBJPEDF*>* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::HNAMMBJPEDF*>*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + NHKPFIMPGPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* DPCKLFEKBNC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKPFIMPGPP_DPCKLFEKBNC_OFFSET))(this);
		}

		static ::NHKPFIMPGPP* BPLPBPMEODA(::RPG::GameCore::IdleLiveSpineAnimTriggerRow* a1)
		{
			return ((::NHKPFIMPGPP*(*)(::RPG::GameCore::IdleLiveSpineAnimTriggerRow*))((::PBYTE)hIl2Cpp + NHKPFIMPGPP_BPLPBPMEODA_OFFSET))(a1);
		}

		::EIIDDKDCOCL* JLODINLPCCO()
		{
			return ((::EIIDDKDCOCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKPFIMPGPP_JLODINLPCCO_OFFSET))(this);
		}

	};
