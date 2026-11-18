#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoBuddyStairAnimCorrector; }

#define CNJDEEHGMNN_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x12044EF0)
#define CNJDEEHGMNN_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x12044D10)
#define CNJDEEHGMNN_MFBONMIAINE_OFFSET UNITYSDK_OFFSET(0x12044F80)
#define CNJDEEHGMNN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x12044E90)
#define CNJDEEHGMNN__CTOR_OFFSET UNITYSDK_OFFSET(0x12044D00)

inline static constexpr unsigned int CNJDEEHGMNN_TypeDefinitionIndex = 50605;

class CNJDEEHGMNN : public ::System::Object
{
public:
	::MoleMole::MonoBuddyStairAnimCorrector* GDFGLHFOJLL; // 0x10
	::System::Int32 KKIIJGFNHOD; // 0x18
	::System::Int32 FDPLLMAKMHH; // 0x1C
	::System::Int32 ABOLAPGOFMP; // 0x20
	::System::Int32 BDOFHDPJHIL; // 0x24
	::UnityEngine::Vector3 GHCJBAELHMG; // 0x28
	::System::Boolean BOHGEAEJEAM; // 0x34
	::System::Boolean FCAEDOEAMGI; // 0x35
	::System::Boolean EMOHBFKPIIJ; // 0x36

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJDEEHGMNN__CTOR_OFFSET))(this);
	}

	static ::System::Void MBKDOMFJFIG(::CNJDEEHGMNN* OBKICKGGFEO)
	{
		return ((::System::Void(*)(::CNJDEEHGMNN*))((::PBYTE)hIl2Cpp + CNJDEEHGMNN_MBKDOMFJFIG_OFFSET))(OBKICKGGFEO);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJDEEHGMNN_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::CNJDEEHGMNN* BBPCBEEHALC()
	{
		return ((::CNJDEEHGMNN*(*)())((::PBYTE)hIl2Cpp + CNJDEEHGMNN_BBPCBEEHALC_OFFSET))();
	}

	::System::Void MFBONMIAINE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJDEEHGMNN_MFBONMIAINE_OFFSET))(this);
	}
};
