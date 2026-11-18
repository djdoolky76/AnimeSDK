#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OCKFCFGIDIE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGELKINJIIN_EACOHCPFGAE_OFFSET UNITYSDK_OFFSET(0x1B9D7CB0)
#define PGELKINJIIN_NGELJIJDHLJ_OFFSET UNITYSDK_OFFSET(0x1B9D8FA0)
#define PGELKINJIIN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1B9D7CC0)
#define PGELKINJIIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D7C20)

inline static constexpr unsigned int PGELKINJIIN_TypeDefinitionIndex = 51829;

class PGELKINJIIN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* MNBKLIFCGLK; // 0x10
	::OCKFCFGIDIE* CJFMOFMGKMI; // 0x18
	::MoleMole::EntityHandle PCHMHIOFNMF; // 0x20
	::System::Single EGOCBPPDAPJ; // 0x30
	::System::Boolean _HLKOIMLGOHH_k__BackingField; // 0x34

	::System::Void _ctor(::MoleMole::EntityHandle BDHOILPIGKB, ::OCKFCFGIDIE* FBFCABKONIB, ::System::Single NKINLLEHHOO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::OCKFCFGIDIE*, ::System::Single))((::PBYTE)hIl2Cpp + PGELKINJIIN__CTOR_OFFSET))(this, BDHOILPIGKB, FBFCABKONIB, NKINLLEHHOO);
	}

	::System::Void EACOHCPFGAE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGELKINJIIN_EACOHCPFGAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGELKINJIIN_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Boolean NGELJIJDHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGELKINJIIN_NGELJIJDHLJ_OFFSET))(this);
	}
};
