#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BCLKDMAHONE;
class DDCDKHALPDP;
class LAECFLNNOFH;
class LKNHOMGIMDE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDCPBKEHEFF_CTOR_OFFSET UNITYSDK_OFFSET(0x13310490)
#define EDCPBKEHEFF_DAADBHOKCNB_OFFSET UNITYSDK_OFFSET(0x13310F40)
#define EDCPBKEHEFF_EPLOKIGGLPM_OFFSET UNITYSDK_OFFSET(0x13311AC0)
#define EDCPBKEHEFF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13310500)
#define EDCPBKEHEFF_FINJBOEMEGM_OFFSET UNITYSDK_OFFSET(0x133105D0)
#define EDCPBKEHEFF_HHFOOAMKBLF_OFFSET UNITYSDK_OFFSET(0x13311A70)
#define EDCPBKEHEFF_JPDDFFNAMDP_OFFSET UNITYSDK_OFFSET(0x13311810)
#define EDCPBKEHEFF_KGALMIKFIGH_OFFSET UNITYSDK_OFFSET(0x13311330)
#define EDCPBKEHEFF_MPPNEFBLDFH_OFFSET UNITYSDK_OFFSET(0x133115A0)

inline static constexpr unsigned int EDCPBKEHEFF_TypeDefinitionIndex = 77310;

	class EDCPBKEHEFF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LKNHOMGIMDE*>* LKNIHOLPBEP; // 0x10
		::DDCDKHALPDP* PDENFEFCAGN; // 0x18
		::LAECFLNNOFH* FKINCGODJEP; // 0x20
		::System::Void _ctor(::LAECFLNNOFH* a1, ::DDCDKHALPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + EDCPBKEHEFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCPBKEHEFF_EXECUTE_OFFSET))(this);
		}

		::System::Void FINJBOEMEGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCPBKEHEFF_FINJBOEMEGM_OFFSET))(this);
		}

		::System::Void DAADBHOKCNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCPBKEHEFF_DAADBHOKCNB_OFFSET))(this);
		}

		::System::Void KGALMIKFIGH(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EDCPBKEHEFF_KGALMIKFIGH_OFFSET))(this, a1, a2);
		}

		::System::Void MPPNEFBLDFH(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EDCPBKEHEFF_MPPNEFBLDFH_OFFSET))(this, a1, a2);
		}

		::System::Void JPDDFFNAMDP(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EDCPBKEHEFF_JPDDFFNAMDP_OFFSET))(this, a1, a2);
		}

		::System::Boolean EPLOKIGGLPM(::BCLKDMAHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + EDCPBKEHEFF_EPLOKIGGLPM_OFFSET))(this, a1);
		}

		::System::Boolean HHFOOAMKBLF(::BCLKDMAHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + EDCPBKEHEFF_HHFOOAMKBLF_OFFSET))(this, a1);
		}

	};
