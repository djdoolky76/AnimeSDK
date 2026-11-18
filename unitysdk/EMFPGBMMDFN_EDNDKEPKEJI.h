#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EMFPGBMMDFN_MDAGFCEKAMO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define EMFPGBMMDFN_EDNDKEPKEJI_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x12366960)
#define EMFPGBMMDFN_EDNDKEPKEJI_LKGOONCJMKA_OFFSET UNITYSDK_OFFSET(0x12365410)
#define EMFPGBMMDFN_EDNDKEPKEJI_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x123652A0)
#define EMFPGBMMDFN_EDNDKEPKEJI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12364D70)
#define EMFPGBMMDFN_EDNDKEPKEJI__CTOR_OFFSET UNITYSDK_OFFSET(0x12364CA0)

inline static constexpr unsigned int EMFPGBMMDFN_EDNDKEPKEJI_TypeDefinitionIndex = 70907;

class EMFPGBMMDFN_EDNDKEPKEJI : public ::System::Object
{
public:
	::EMFPGBMMDFN_MDAGFCEKAMO* IGAAFEICBEO; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IIKEBOHKJDF; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FEAODIKHJHB; // 0x20
	::System::Boolean DIANFPOAIMH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_EDNDKEPKEJI__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_EDNDKEPKEJI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_EDNDKEPKEJI_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void KKFNPONHGEM(::EMFPGBMMDFN_MDAGFCEKAMO* JJODPPOOBDI)
	{
		return ((::System::Void(*)(::PVOID, ::EMFPGBMMDFN_MDAGFCEKAMO*))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_EDNDKEPKEJI_KKFNPONHGEM_OFFSET))(this, JJODPPOOBDI);
	}

	::System::Void LKGOONCJMKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFPGBMMDFN_EDNDKEPKEJI_LKGOONCJMKA_OFFSET))(this);
	}
};
