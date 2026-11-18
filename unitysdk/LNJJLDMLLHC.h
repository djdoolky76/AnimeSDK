#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFLJOMGPODL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class BNKIPOEJNNB;
class GEIHCPAOKKK;
class JFBNBOHNJBF;
class KPACKGEBECC;
namespace MoleMole { class MonoFollowJointMoveElement; }

#define LNJJLDMLLHC_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x125999D0)
#define LNJJLDMLLHC_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x125997B0)
#define LNJJLDMLLHC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x12599950)
#define LNJJLDMLLHC__CTOR_OFFSET UNITYSDK_OFFSET(0x125997A0)

inline static constexpr unsigned int LNJJLDMLLHC_TypeDefinitionIndex = 82816;

class LNJJLDMLLHC : public ::System::Object
{
public:
	::MoleMole::MonoFollowJointMoveElement* CLAFFCGDEGP; // 0x10
	::JFBNBOHNJBF* IHAMOGFIMAD; // 0x18
	::BNKIPOEJNNB* DFACBBJHKHC; // 0x20
	::GEIHCPAOKKK* OHPJHPEOFLD; // 0x28
	::KPACKGEBECC* EPFOEIJDMBM; // 0x30
	::UnityEngine::Quaternion DALIHPFNFFO; // 0x38
	::System::Int32 GDCEOHBJPGO; // 0x48
	::CFLJOMGPODL ILDFEIAMNIC; // 0x4C
	::System::UInt32 BKLGNCBNEGM; // 0x6C
	::System::Boolean ENMEJJKAICB; // 0x70
	::System::Boolean HFAHEOCIHAO; // 0x71
	::System::Boolean MNPLGOPOOBH; // 0x72
	::System::Byte _padding0[0x1];
	::System::Int32 LPJOPEDEMGF; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJJLDMLLHC__CTOR_OFFSET))(this);
	}

	static ::System::Void MBKDOMFJFIG(::LNJJLDMLLHC* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::LNJJLDMLLHC*))((::PBYTE)hIl2Cpp + LNJJLDMLLHC_MBKDOMFJFIG_OFFSET))(OBKICKGGFEO);
	}

	static ::LNJJLDMLLHC* BBPCBEEHALC()
	{
		return ((::LNJJLDMLLHC*(*)())((::PBYTE)hIl2Cpp + LNJJLDMLLHC_BBPCBEEHALC_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJJLDMLLHC_NPOLNFDBOOD_OFFSET))(this);
	}
};
