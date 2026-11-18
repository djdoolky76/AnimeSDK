#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define AAOHOKHKMPI_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x17C92DB0)
#define AAOHOKHKMPI_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x17C92900)
#define AAOHOKHKMPI_DAPCBDMHKJA_1_OFFSET UNITYSDK_OFFSET(0x17C92D10)
#define AAOHOKHKMPI_DAPCBDMHKJA_OFFSET UNITYSDK_OFFSET(0x17C92760)
#define AAOHOKHKMPI_DIOOOLLLPPO_OFFSET UNITYSDK_OFFSET(0x17C92D60)
#define AAOHOKHKMPI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x17C92CA0)
#define AAOHOKHKMPI__CTOR_OFFSET UNITYSDK_OFFSET(0x17C92750)

inline static constexpr unsigned int AAOHOKHKMPI_TypeDefinitionIndex = 66386;

class AAOHOKHKMPI : public ::System::Object
{
public:
	::MoleMole::EffectSimulate::NapEffectSimulatorMgr* PKJMAIAPONN; // 0x10
	::UnityEngine::MaterialPropertyBlock* KJDNGLKGFAJ; // 0x18
	::EHKKPCGAJHO* POBADKEDFOE; // 0x20
	::AEMCAOEICDG* OHPJHPEOFLD; // 0x28
	::MoleMole::Battle::Entity* BHHAEJEOEJA; // 0x30
	::Il2CppArray<::System::Int32>* GPNDGCHOEIN; // 0x38
	::Il2CppArray<::System::Int32>* JBEFJMGCBOL; // 0x40
	::Il2CppArray<::System::Int32>* HNKMFKJANID; // 0x48
	::System::UInt32 BKLGNCBNEGM; // 0x50
	::System::Single HOKJLCIJHEN; // 0x54
	::System::Single HPEILDFFBFN; // 0x58
	::System::Boolean EBEOKEPOKIJ; // 0x5C
	::System::Boolean GAFBDILPAKE; // 0x5D
	::System::Boolean OPPHKFLBBLK; // 0x5E
	::System::Byte _padding0[0x1];
	::System::Single FJNLPACPMJA; // 0x60
	::System::Boolean IEELCAPJOCE; // 0x64
	::System::Boolean HJEFCCAFEAH; // 0x65
	::System::Boolean IDJLOMMBFIL; // 0x66
	::System::Boolean IKIMOPOHONI; // 0x67

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOHOKHKMPI__CTOR_OFFSET))(this);
	}

	static ::System::Void DAPCBDMHKJA(::AAOHOKHKMPI*& OBKICKGGFEO)
	{
		return ((::System::Void(*)(::AAOHOKHKMPI*&))((::PBYTE)hIl2Cpp + AAOHOKHKMPI_DAPCBDMHKJA_OFFSET))(OBKICKGGFEO);
	}

	static ::System::Void DAPCBDMHKJA_1(::AAOHOKHKMPI* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::AAOHOKHKMPI*))((::PBYTE)hIl2Cpp + AAOHOKHKMPI_DAPCBDMHKJA_1_OFFSET))(OBKICKGGFEO);
	}

	::System::Void DIOOOLLLPPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOHOKHKMPI_DIOOOLLLPPO_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOHOKHKMPI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOHOKHKMPI_BJANDJKKNCD_OFFSET))(this);
	}

	static ::AAOHOKHKMPI* BBPCBEEHALC()
	{
		return ((::AAOHOKHKMPI*(*)())((::PBYTE)hIl2Cpp + AAOHOKHKMPI_BBPCBEEHALC_OFFSET))();
	}
};
