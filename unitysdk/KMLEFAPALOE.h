#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }

#define KMLEFAPALOE_CLEANUP_OFFSET UNITYSDK_OFFSET(0xB566420)
#define KMLEFAPALOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB566340)
#define KMLEFAPALOE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB566350)
#define KMLEFAPALOE_PDMDIGBCCCI_OFFSET UNITYSDK_OFFSET(0xB566470)

	class KMLEFAPALOE : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::Entitas::IGroup* CEBJLDMINPB; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
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
