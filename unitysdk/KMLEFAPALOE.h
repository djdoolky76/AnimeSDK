#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define KMLEFAPALOE_CLEANUP_OFFSET UNITYSDK_OFFSET(0xB55F7D0)
#define KMLEFAPALOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB55F6F0)
#define KMLEFAPALOE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB55F700)
#define KMLEFAPALOE_PDMDIGBCCCI_OFFSET UNITYSDK_OFFSET(0xB55F820)

inline static constexpr unsigned int KMLEFAPALOE_TypeDefinitionIndex = 77167;

	class KMLEFAPALOE : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* CEBJLDMINPB; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + KMLEFAPALOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLEFAPALOE_INITIALIZE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLEFAPALOE_CLEANUP_OFFSET))(this);
		}

		::System::Void PDMDIGBCCCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLEFAPALOE_PDMDIGBCCCI_OFFSET))(this);
		}

	};
